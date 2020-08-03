#pragma once
#include "frmModificarLED.h"
#include "frmAgregarLED.h"

namespace ProyectoSemaforoView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace ProyectoSemaforoController;
	using namespace ProyectoSemaforoModel;

	/// <summary>
	/// Summary for frmModificarSemaforo
	/// </summary>
	public ref class frmModificarSemaforo : public System::Windows::Forms::Form
	{
	public:
		frmModificarSemaforo(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		frmModificarSemaforo(GestorSemaforo^ objGestorSemaforo, int posicionSemaforo) {
			InitializeComponent();
			this->objGestorSemaforo = objGestorSemaforo;
			this->posicionSemaforo = posicionSemaforo;
			this->objGestorLED = gcnew GestorLED();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~frmModificarSemaforo()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button3;
	private: GestorSemaforo ^ objGestorSemaforo;
	private: GestorLED ^ objGestorLED;
	private: int posicionSemaforo;
	protected:
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::DataGridView^  dataGridView1;



	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;



	protected:
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
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(319, 473);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(85, 30);
			this->button3->TabIndex = 18;
			this->button3->Text = L"Modificar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmModificarSemaforo::button3_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(174, 201);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(130, 17);
			this->label3->TabIndex = 17;
			this->label3->Text = L"Nombre de la calle:";
			this->label3->Click += gcnew System::EventHandler(this, &frmModificarSemaforo::label3_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(324, 198);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(126, 22);
			this->textBox2->TabIndex = 16;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(569, 317);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(88, 47);
			this->button2->TabIndex = 15;
			this->button2->Text = L"Agregar LED";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmModificarSemaforo::button2_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column3,
					this->Column1, this->Column2
			});
			this->dataGridView1->Location = System::Drawing::Point(83, 266);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(451, 150);
			this->dataGridView1->TabIndex = 14;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Código";
			this->Column3->Name = L"Column3";
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Tiempo LED Encendido";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Color del LED";
			this->Column2->Name = L"Column2";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(248, 142);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(56, 17);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Código:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(324, 139);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(126, 22);
			this->textBox1->TabIndex = 12;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &frmModificarSemaforo::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(277, 76);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(199, 25);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Modificar Semáforo";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(120, 473);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(85, 30);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Grabar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmModificarSemaforo::button1_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(523, 473);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(85, 30);
			this->button4->TabIndex = 19;
			this->button4->Text = L"Eliminar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &frmModificarSemaforo::button4_Click);
			// 
			// frmModificarSemaforo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(741, 560);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"frmModificarSemaforo";
			this->Text = L"frmModificarSemaforo";
			this->Load += gcnew System::EventHandler(this, &frmModificarSemaforo::frmModificarSemaforo_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void frmModificarSemaforo_Load(System::Object^  sender, System::EventArgs^  e) {
		Semaforo^ objSemaforo = this->objGestorSemaforo->ObtenerSemaforo(posicionSemaforo);
		this->textBox1->Text = Convert::ToString(objSemaforo->codigo);
		this->textBox2->Text = objSemaforo->cuadra;
		for each (LED^ objLED in objSemaforo->ListaLEDs)
		{
			objGestorLED->AgregarLED(objLED);
		}

		MostrarDatosEnGrilla();
	}
			 //Mostrar
	private: void MostrarDatosEnGrilla()
	{
		this->dataGridView1->Rows->Clear();
		for(int i = 0; i < objGestorLED->ObtenerCantLEDS(); i++)
		{
			LED^ objLED = objGestorLED->ObtenerLED(i);
			array<String^>^ fila = gcnew array<String^>(3);
			fila[0] = Convert::ToString(objLED->codigo);
			fila[1] = Convert::ToString(objLED->tiempo);
			fila[2] = objLED->color;
			this->dataGridView1->Rows->Add(fila);
		}
	}
			 //Grabar
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	int valido = 0;
	int codigo;
	String^ cuadra;
	List<LED^>^ listaLEDS;
	if (this->textBox1->Text != "") { //Validamos que se haya ingresado un codigo
		codigo = Convert::ToInt32(this->textBox1->Text);
		valido++;
	}
	else 
	{
		MessageBox::Show("Por favor, ingrese un codigo");
	}
	if (this->textBox2->Text != "") { //Validamos que se haya ingresado el nombre de la calle
		cuadra = this->textBox2->Text;
		valido++;
	}
	else
	{
		MessageBox::Show("Por favor, ingrese el nombre de la calle");
	}
	if (this->objGestorLED->ObtenerCantLEDS() == 4) { //Validamos que se hayan ingresado todos los LEDs
		valido++;
		listaLEDS = gcnew List<LED^>();
		for (int i = 0; i < this->objGestorLED->ObtenerCantLEDS(); i++)
		{
			LED^ objLED = this->objGestorLED->ObtenerLED(i);
			listaLEDS->Add(objLED);
		}
	}
	else 
	{
		MessageBox::Show("Por favor, ingrese más LEDs");
	}
	if (valido == 3) { //Si todo lo demas fue validado entonces se guarda el objeto en el gestor
		this->objGestorSemaforo->Eliminar(posicionSemaforo);
		Semaforo^ objSemaforo = gcnew Semaforo(codigo, cuadra, listaLEDS);
		this->objGestorSemaforo->AgregarSemaforo(objSemaforo);
		MessageBox::Show("El semáforo fue modificado exitosamente");
		this->Close();
	}
}
		 //Modificar
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->dataGridView1->SelectedRows->Count != 0) { //Vemos si se ha seleccionado una fila
		int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
		int CantLEDS = this->objGestorLED->ObtenerCantLEDS();
		if (filaSeleccionada == CantLEDS) { //Vemos si la fila seleccionada tiene datos en ella
			MessageBox::Show("No hay elementos para modificar");
		}
		else {
			frmModificarLED^ ventanaModificarLED = gcnew frmModificarLED(this->objGestorLED, filaSeleccionada);
			ventanaModificarLED->ShowDialog();
			MostrarDatosEnGrilla();
		}
	}
	else {
		MessageBox::Show("Seleccione una fila");
	}
}
		 //Eliminar
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->dataGridView1->SelectedRows->Count != 0) { //Vemos si se ha seleccionado una fila
		int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
		int CantLEDs = this->objGestorLED->ObtenerCantLEDS();
		if (filaSeleccionada == CantLEDs) { //Vemos si la fila seleccionada tiene datos en ella
			MessageBox::Show("No hay elementos para elminar");
		}
		else {
			this->objGestorLED->Eliminar(filaSeleccionada);

		}
		MostrarDatosEnGrilla();
	}
	else {
		MessageBox::Show("Seleccione una fila");
	}
}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
}
		 //Agregar LED
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	frmAgregarLED^ ventanaAgregarLED = gcnew frmAgregarLED(this->objGestorLED);
	ventanaAgregarLED->ShowDialog();
	MostrarDatosEnGrilla();
}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	MostrarDatosEnGrilla();
}
};
}
