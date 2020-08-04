#pragma once
#include "frmMantProductos.h"
namespace SistemaMiRestauranteView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace SistemaMiRestauranteController;
	using namespace SistemaMiRestauranteModel;
	using namespace System::IO;

	/// <summary>
	/// Summary for frmVerCarta
	/// </summary>
	public ref class frmVerCarta : public System::Windows::Forms::Form
	{
	public:
		frmVerCarta(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		frmVerCarta(GestorCarta^ GestorCarta, int filaseleccionada, GestorProducto^ GestorProducto)
		{
			InitializeComponent();
			this->filaseleccionada = filaseleccionada;
			this->objGestorCarta = GestorCarta;
			this->objGestorProducto = GestorProducto; // este gestor es para poder leer todos los elementos productos
	

		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~frmVerCarta()
		{
			if (components)
			{
				delete components;
			}
		}
	private: int filaseleccionada;
	private: GestorCarta^ objGestorCarta;
	private: GestorProducto^ objGestorProducto;
	private: System::Windows::Forms::TextBox^  textBox3;
	protected:
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label4;


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
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox3
			// 
			this->textBox3->Enabled = false;
			this->textBox3->Location = System::Drawing::Point(138, 110);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(245, 20);
			this->textBox3->TabIndex = 20;
			// 
			// textBox2
			// 
			this->textBox2->Enabled = false;
			this->textBox2->Location = System::Drawing::Point(138, 67);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 19;
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(138, 25);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 18;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(175, 340);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 17;
			this->button2->Text = L"Cerrar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmVerCarta::button2_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column1,
					this->Column2, this->Column3
			});
			this->dataGridView1->Location = System::Drawing::Point(29, 188);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(354, 135);
			this->dataGridView1->TabIndex = 15;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Código";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Nombre";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Precio";
			this->Column3->Name = L"Column3";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(26, 113);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(104, 13);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Nombre de la Carta :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(26, 70);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(80, 13);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Fecha Validez :";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(26, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(46, 13);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Código :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(26, 154);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(61, 13);
			this->label4->TabIndex = 21;
			this->label4->Text = L"Productos :";
			// 
			// frmVerCarta
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(488, 444);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"frmVerCarta";
			this->Text = L"frmVerCarta";
			this->Load += gcnew System::EventHandler(this, &frmVerCarta::frmVerCarta_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

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
		this->dataGridView1->Rows->Add(fila);
	}
}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
	private: System::Void frmVerCarta_Load(System::Object^  sender, System::EventArgs^  e) {
		Carta^ objCarta = this->objGestorCarta->ObtenerCartaUnaPosicion(filaseleccionada);
		
		this->textBox1->Text = objCarta->codigo;
		this->textBox2->Text = objCarta->FechaValidez;
		this->textBox3->Text = objCarta->Nombre;

		this->dataGridView1->Rows->Clear();
		for (int i = 0; i < objCarta->listaProductos->Count; i++) {
			Producto^ objProducto = objCarta->listaProductos[i];
			array<String^>^ fila = gcnew array<String^>(3);
			fila[0] = objProducto->codigo;
			fila[1] = objProducto->nombre;
			fila[2] = objProducto->precio;
			this->dataGridView1->Rows->Add(fila);;
		}
	/*	//leemos detalles carta para agregarle losp roductos a la carta
	//	array<String^>^ lineasDetalles = File::ReadAllLines("detalleCartas.txt");
		String^ separadores = ";";

		for each(String^ lineasProducto in lineasDetalles)
		{
			array<String^>^ camposdetalles = lineasProducto->Split(separadores->ToCharArray());
			String^ codigocarta = camposdetalles[0];
			if (codigocarta == objCarta->codigo) {
				String^ codigoProducto = camposdetalles[1];
				//obtenemos el producti que sale en la lista de detalles
				Producto^ objProducto = this->objGestorProducto->BuscarProductoxCogido(codigoProducto);
				String^ nombre = objProducto->nombre;
				String^ precio = objProducto->precio;
				//esta parte es para mostrar los productos en la grilla
				array<String^>^ fila = gcnew array<String^>(4);
				fila[0] = codigoProducto;
				fila[1] = objProducto->nombre;
				fila[2] = objProducto->precio;
				this->dataGridView1->Rows->Add(fila);
				// añanimos el producto a lista;
				//dbemos verificar si producto ya existe
				objCarta->listaProductos->Add(objProducto);
				// falta añadir el objeto producto a la lista de productos de la carta
						//puede ser por el metodo de diego  , solo conozco ese metodo
			}

			*/
}

};
}
