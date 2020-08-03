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
	/// Resumen de LiStALed
	/// </summary>
	public ref class LiStALed : public System::Windows::Forms::Form
	{
	public:
		LiStALed(void)
		{
			InitializeComponent();
			this->objGestorLED = gcnew GestorLED();

			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~LiStALed()
		{
			if (components)
			{
				delete components;
			}
		}
	private: GestorLED^ objGestorLED;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	protected:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column1,
					this->Column2, this->Column3, this->Column4
			});
			this->dataGridView1->Location = System::Drawing::Point(12, 143);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(553, 189);
			this->dataGridView1->TabIndex = 0;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"codigo";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"tiempo";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"color";
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"tipo";
			this->Column4->Name = L"Column4";
			// 
			// LiStALed
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(622, 497);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"LiStALed";
			this->Text = L"LiStALed";
			this->Load += gcnew System::EventHandler(this, &LiStALed::LiStALed_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	//Mostrar
	private: void MostrarDatosEnGrilla()
	{
		this->dataGridView1->Rows->Clear();
		for (int i = 0; i < this->objGestorLED->ObtenerCantLEDS(); i++) {
			LED^ objLED = this->objGestorLED->ObtenerLED(i);
			array<String^>^ fila = gcnew array<String^>(4);
			fila[0] = Convert::ToString(objLED->codigo);
			fila[1] = Convert::ToString(objLED->tiempo);
			fila[2] = objLED->color;
			fila[3] = objLED->tipo;
			this->dataGridView1->Rows->Add(fila);
		}
	}

private: System::Void LiStALed_Load(System::Object^  sender, System::EventArgs^  e) {
		objGestorLED->CargarLEDS();
		MostrarDatosEnGrilla();
	}
	};
}
