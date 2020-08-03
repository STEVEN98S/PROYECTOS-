#pragma once
#include "frmNuevoSemaforo.h"
#include "frmModificarSemaforo.h"

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
	/// Summary for frmMantSemaforos
	/// </summary>
	public ref class frmMantSemaforos : public System::Windows::Forms::Form
	{
	public:
		frmMantSemaforos(void)
		{
			InitializeComponent();
			this->objGestorSemaforo = gcnew GestorSemaforo();
			this->objGestorLED = gcnew GestorLED();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~frmMantSemaforos()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: GestorSemaforo^ objGestorSemaforo;
	private: GestorLED ^ objGestorLED;
	protected:


	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;








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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->Column1,
					this->Column2
			});
			this->dataGridView1->Location = System::Drawing::Point(127, 147);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(346, 158);
			this->dataGridView1->TabIndex = 0;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Codigo";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Nombre de la calle";
			this->Column2->Name = L"Column2";
			this->Column2->Width = 300;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(81, 332);
			this->button1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(62, 28);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Nuevo";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmMantSemaforos::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(436, 332);
			this->button2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(62, 28);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Eliminar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmMantSemaforos::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(263, 332);
			this->button3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(62, 28);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Modificar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmMantSemaforos::button3_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Location = System::Drawing::Point(63, 25);
			this->groupBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox1->Size = System::Drawing::Size(446, 96);
			this->groupBox1->TabIndex = 4;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Búsqueda";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(35, 38);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(114, 15);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Nombre de la calle:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(164, 37);
			this->textBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(140, 20);
			this->textBox1->TabIndex = 6;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(332, 32);
			this->button4->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(62, 28);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Buscar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &frmMantSemaforos::button4_Click);
			// 
			// frmMantSemaforos
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(637, 429);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"frmMantSemaforos";
			this->Text = L"frmMantSemaforos";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &frmMantSemaforos::frmMantSemaforos_FormClosed);
			this->Load += gcnew System::EventHandler(this, &frmMantSemaforos::frmMantSemaforos_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		//Nuevo
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		frmNuevoSemaforo^ ventanaNuevoSemaforo = gcnew frmNuevoSemaforo(this->objGestorSemaforo);
		ventanaNuevoSemaforo->ShowDialog();
		MostrarDatosEnGrilla();
	}
			 //Mostrar
	private: void MostrarDatosEnGrilla()
	{
		this->dataGridView1->Rows->Clear();
		for (int i = 0; i < this->objGestorSemaforo->ObtenerCantSemaforos(); i++) {
			Semaforo^ objSemaforo = this->objGestorSemaforo->ObtenerSemaforo(i);
			array<String^>^ fila = gcnew array<String^>(2);
			fila[0] = Convert::ToString(objSemaforo->codigo);
			fila[1] = objSemaforo->cuadra;
			this->dataGridView1->Rows->Add(fila);
		}
	}
			 //Modificar
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->dataGridView1->SelectedRows->Count != 0) { //Vemos si se ha seleccionado una fila
		int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
		int CantProductos = this->objGestorSemaforo->ObtenerCantSemaforos();
		int PosicionSemaforo = 0;
		if (filaSeleccionada == CantProductos) { //Vemos si la fila seleccionada tiene datos en ella
			MessageBox::Show("No hay elementos para modificar");
		}
		else {
			String^ cuadra = this->textBox1->Text;
			if (cuadra != "") { //Si se ha hecho alguna busqueda entonces buscamos el objeto correspondiente en el gestor
				for (int i = 0; i < CantProductos; i++) {
					Semaforo^ objSemaforoComp = this->objGestorSemaforo->ObtenerSemaforo(i);
					if (cuadra == objSemaforoComp->cuadra) {
						PosicionSemaforo = i;
						break;
					}
				}
			}
			else {
				PosicionSemaforo = filaSeleccionada;
			}
			frmModificarSemaforo^ ventanaModificarSemaforo = gcnew frmModificarSemaforo(this->objGestorSemaforo, PosicionSemaforo);
			ventanaModificarSemaforo->ShowDialog();
		}
		MostrarDatosEnGrilla();
	}
	else {
		MessageBox::Show("Seleccione una fila");
	}
}
		 //Eliminar
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->dataGridView1->SelectedRows->Count != 0) { //Vemos si se ha seleccionado una fila
		int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
		int CantSemaforos = this->objGestorSemaforo->ObtenerCantSemaforos();
		if (filaSeleccionada == CantSemaforos) { //Vemos si la fila seleccionada tiene datos en ella
			MessageBox::Show("No hay elementos para elminar");
		}
		else {
			int PosicionProducto = -1;
			String^ cuadra = this->textBox1->Text;
			if (cuadra != "") { //Si se ha hecho alguna busqueda entonces buscamos el objeto correspondiente en el gestor
				int PosicionProducto = -1;
				for (int i = 0; i < CantSemaforos; i++) {
					Semaforo^ objSemaforoComp = this->objGestorSemaforo->ObtenerSemaforo(i);
					if (cuadra == objSemaforoComp->cuadra) {
						PosicionProducto = i;
						break;
					}
				}
			}
			else {
				PosicionProducto = filaSeleccionada;
			}
			this->objGestorSemaforo->Eliminar(PosicionProducto);
		}
		MostrarDatosEnGrilla();
	}
	else {
		MessageBox::Show("Seleccione una fila");
	}
}
		 //Buscar
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
 	String^ cuadra = this->textBox1->Text;
	if (cuadra == "") { //Si no se ha buscado ningun semaforo, se muestran todos los que hay en el gestor
		MostrarDatosEnGrilla();
	}
	else { //De lo contrario se genera una lista que cumpla con el parametro de la busqueda
		List<Semaforo^>^ listaSemaforosBuscados = this->objGestorSemaforo->BuscarSemaforosCuadra(cuadra);
		this->dataGridView1->Rows->Clear();
		array<String^>^ fila = gcnew array<String^>(2);
		for each (Semaforo^ objSemaforo in listaSemaforosBuscados)
		{
			fila[0] = Convert::ToString(objSemaforo->codigo);
			fila[1] = objSemaforo->cuadra;
			this->dataGridView1->Rows->Add(fila);
		}
	}
}
		 //Cargar
private: System::Void frmMantSemaforos_Load(System::Object^  sender, System::EventArgs^  e) {
	if (System::IO::File::Exists("Semaforos.bin")) {
		objGestorSemaforo->Deserializar();
	}
	
	MostrarDatosEnGrilla();
}
		 //Grabar
private: System::Void frmMantSemaforos_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
	List<LED^>^ listaLEDs = gcnew List<LED^>();
	//Se obtienen los LEDs correspondientes por cada semaforo para poder guardarlos
	for (int i = 0; i < objGestorSemaforo->ObtenerCantSemaforos(); i++) {
		Semaforo^ objSemaforo = objGestorSemaforo->ObtenerSemaforo(i);
		listaLEDs = objSemaforo->ListaLEDs;
		for (int j = 0; j < listaLEDs->Count; j++) {
			LED^ objLED = listaLEDs[j];
			objGestorLED->AgregarLED(objLED);
		}
	}
	objGestorLED->Serializar();
	objGestorSemaforo->Serializar();
}
};
}
