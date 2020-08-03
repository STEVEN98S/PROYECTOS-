#pragma once

namespace ProyectoSemaforoView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ProyectoSemaforoController;
	using namespace ProyectoSemaforoModel;

	/// <summary>
	/// Summary for frmAgregarLED
	/// </summary>
	public ref class frmAgregarLED : public System::Windows::Forms::Form
	{
	public:
		frmAgregarLED(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		frmAgregarLED(GestorLED^ objGestorLED) {
			InitializeComponent();
			this->objGestorLED = objGestorLED;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~frmAgregarLED()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: GestorLED ^ objGestorLED;
	protected:
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label3;





	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(130, 266);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(86, 33);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Grabar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmAgregarLED::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(185, 178);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(121, 22);
			this->textBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(32, 181);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(129, 17);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Tiempo encendido:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(62, 114);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(99, 17);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Color del LED:";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Rojo", L"Verde", L"Amarillo", L"Azul" });
			this->comboBox1->Location = System::Drawing::Point(185, 111);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 24);
			this->comboBox1->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(109, 35);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(136, 25);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Agregar LED";
			// 
			// frmAgregarLED
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(352, 338);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Name = L"frmAgregarLED";
			this->Text = L"frmAgregarLED";
			this->Load += gcnew System::EventHandler(this, &frmAgregarLED::frmAgregarLED_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//Grabar
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		int colorValido = 1;
		int validar = 0;
		int tiempo;
		int codigo;
		String^ color = this->comboBox1->Text;
		if ((color == "Rojo") || (color == "Verde") || (color == "Amarillo") || (color == "Azul")) //Validamos el color
		{
			for (int i = 0; i < this->objGestorLED->ObtenerCantLEDS(); i++) {
				LED^ objLEDComp = this->objGestorLED->ObtenerLED(i);
				if (color == objLEDComp->color) {
					colorValido = 0;
					break;
				}
			}
		}
		else if (color == "") {
			MessageBox::Show("Por favor, seleccione un color");
		}
		if (this->textBox1->Text != "") { //Validamos que se haya ingresado un tiempo
			tiempo = Convert::ToInt32(this->textBox1->Text);
			validar++;
		}
		else {
			MessageBox::Show("Por favor, ingrese un tiempo");
		}
		if (colorValido == 1) {
			validar++;
		}
		else {
			MessageBox::Show("Error, ya hay un LED de ese color");
		}
		if (validar == 2) { //Si todo es validado, entonces se guarda el objeto en el gestor
			LED^ objLED = gcnew LED(color, tiempo, codigo, "indicador");
			this->objGestorLED->AgregarLED(objLED);
			MessageBox::Show("El LED fue agregado exitosamente");
			this->Close();
		} 
	}
private: System::Void frmAgregarLED_Load(System::Object^  sender, System::EventArgs^  e) {
}
};
}