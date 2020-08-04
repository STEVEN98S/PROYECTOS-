#pragma once
#include "frmVerCarta.h"
#include "frmNuevaCarta.h"
#include "frmNuevaCartaa.h"
namespace SistemaMiRestauranteView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections::Generic;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace SistemaMiRestauranteController;
	using namespace SistemaMiRestauranteModel;
	/// <summary>
	/// Summary for frmMantCartas
	/// </summary>
	public ref class frmMantCartas : public System::Windows::Forms::Form
	{
	public:
		frmMantCartas(void)
		{
			InitializeComponent();
			this->objGestorCarta = gcnew GestorCarta();
			this->objGestorProducto = gcnew GestorProducto();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~frmMantCartas()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: GestorCarta^ objGestorCarta;
	private: GestorProducto^ objGestorProducto;
	protected:
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;

	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;


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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(50, 25);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(463, 100);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Búsqueda";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(336, 44);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Buscar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmMantCartas::button1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Activo", L"Inactivo" });
			this->comboBox1->Location = System::Drawing::Point(150, 46);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(132, 21);
			this->comboBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(71, 49);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(46, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Estado :";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column1,
					this->Column2, this->Column3, this->Column4
			});
			this->dataGridView1->Location = System::Drawing::Point(50, 144);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(463, 150);
			this->dataGridView1->TabIndex = 1;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Código";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Fecha de Validez";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Nombre";
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Estado";
			this->Column4->Name = L"Column4";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(319, 316);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Ver Carta";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmMantCartas::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(111, 316);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(120, 23);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Nuevo";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmMantCartas::button2_Click);
			// 
			// frmMantCartas
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(577, 362);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"frmMantCartas";
			this->Text = L"frmMantCartas";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &frmMantCartas::frmMantCartas_FormClosed);
			this->Load += gcnew System::EventHandler(this, &frmMantCartas::cargafrmMantCartas);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
private: void MostrarDatosEnGrilla()
		{
			this->dataGridView1->Rows->Clear();
			for (int i = 0; i < this->objGestorCarta->ObtenerCantidadCarta(); i++)
			{
				Carta^ objCarta = this->objGestorCarta->ObtenerCartaUnaPosicion(i);
				array<String^>^ fila = gcnew array<String^>(4);
				fila[0] = objCarta->codigo;
				fila[1] = objCarta->FechaValidez;
				fila[2] = objCarta->Nombre;
				fila[3] = objCarta->estado;
				this->dataGridView1->Rows->Add(fila);;
			}
}
//Ver Carta
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
				
	if (this->dataGridView1->SelectedRows->Count != 0) {
		int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
		frmVerCarta^ ventanaVerCarta = gcnew frmVerCarta(objGestorCarta, filaSeleccionada, objGestorProducto); // me parece que el gestor producto no deberia ir porque se supone que cada carta ya tiene su lista de productos
		ventanaVerCarta->ShowDialog();
		MostrarDatosEnGrilla();
	}
	else {
		MessageBox::Show("Selecione una fila");
	}

}

 //Buscar
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ estado = this->comboBox1->Text;

	if (estado == "") {
		MostrarDatosEnGrilla();
	}
	else {

		List<Carta^>^ listaCartasBuscadas = this->objGestorCarta->BuscardorCartas(estado);
		this->dataGridView1->Rows->Clear();
		array<String^>^ fila = gcnew array<String^>(4);
		for each (Carta^ objCarta in listaCartasBuscadas)
		{
			fila[0] = objCarta->codigo;
			fila[1] = objCarta->FechaValidez;
			fila[2] = objCarta->Nombre;
			fila[3] = objCarta->estado;

			this->dataGridView1->Rows->Add(fila);
		}
	}
}

/* //Ejemplo de como insertar dia, devuelve lista
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		if (this->comboBox1->Text == "")
		{
			InicializarDataGrid();
		}
		else
		{
			String^ diasalida = this->comboBox1->Text;//dia salida va a ser el texto en combobox
			Itinerario^ objItinerario = this->objGestorItinerario->ObtenerItinerarioxDiaS(diasalida);//llama a gestor buscador
			if (objItinerario == nullptr)
				MessageBox::Show("No se encontró ningun Itinerario");//si no encuentra nada, devuelve null
			else
				CargarDataGrid(diasalida);
		}

	}*/
private: System::Void cargafrmMantCartas(System::Object^  sender, System::EventArgs^  e) {


	if (!System::IO::File::Exists("cartas.bin")) {
		this->objGestorCarta->CargarCartaArchivo();
	}
	else
	{
		this->objGestorCarta->Deserializar();
	}
	this->objGestorProducto->Deserializar(); // cargamos los productos almacenados hasa este momento
	MostrarDatosEnGrilla();
}
	
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

	frmNuevaCartaa^ ventanacarta = gcnew frmNuevaCartaa(objGestorCarta);
	ventanacarta->ShowDialog();
	MostrarDatosEnGrilla();
 }
private: System::Void frmMantCartas_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
	this->objGestorCarta->Serializar();
}
};
}
