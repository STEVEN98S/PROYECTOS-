#pragma once
#include "frmBuscarProducto.h"

namespace SistemaMiRestauranteView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace SistemaMiRestauranteController;
	using namespace SistemaMiRestauranteModel;


	/// <summary>
	/// Resumen de frmNuevaCartaa
	/// </summary>
	public ref class frmNuevaCartaa : public System::Windows::Forms::Form
	{
	public:
		frmNuevaCartaa(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmNuevaCartaa(GestorCarta^ objGestorCarta) {
			
				InitializeComponent();
				this->objGestorCarta = objGestorCarta;
				this->objGestorProducto = gcnew GestorProducto();
				this->listaDeProductos = gcnew List<Producto^>(); // agregamos una lista vacia de productos
				//List<Producto^>^ listaProductos = gcnew List<Producto^>(); // agregamos una lista vacia por ahora a las cartas
				//inicializamos los valores de la carta en vacios
				this->codigo = "";
				this->fechaValidez = "";
				this->Nombre = "";
				this->estado = "";
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmNuevaCartaa()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: String^ codigo;
	private: String^ Nombre;
	private: String^ fechaValidez;
	private: String^ estado;

	private: GestorCarta^ objGestorCarta;
	private: GestorProducto^ objGestorProducto;
	private: Carta^ objCarta;
	private: List<Producto^>^ listaDeProductos;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::ComboBox^  comboBox1;





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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(73, 51);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(46, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Código :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(73, 100);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(92, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Fecha de Validez:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(73, 141);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(101, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Nombre de la Carta:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(73, 181);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(43, 13);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Estado:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(223, 44);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 8;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(223, 93);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 9;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(223, 134);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 10;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(433, 237);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 37);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Agregar Productos";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmNuevaCartaa::button1_Click_1);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(205, 358);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(104, 23);
			this->button2->TabIndex = 13;
			this->button2->Text = L"Grabar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmNuevaCartaa::button2_Click_1);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column1,
					this->Column2, this->Column3
			});
			this->dataGridView1->Location = System::Drawing::Point(76, 218);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(342, 114);
			this->dataGridView1->TabIndex = 14;
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
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Activo", L"Inactivo" });
			this->comboBox1->Location = System::Drawing::Point(223, 174);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(100, 21);
			this->comboBox1->TabIndex = 15;
			// 
			// frmNuevaCartaa
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(558, 393);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"frmNuevaCartaa";
			this->Text = L"frmNuevaCartaa";
			this->Load += gcnew System::EventHandler(this, &frmNuevaCartaa::frmNuevaCartaa_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		//grilla comun y corriente , no sirve aquí
private: void MostrarDatosEnGrilla()
{
	this->dataGridView1->Rows->Clear();
	for (int i = 0; i < this->objGestorProducto->ObtenerCantidadProducto(); i++)
	{
		Producto^ objProducto = this->objGestorProducto->ObtenerProductoUnaPosicion(i);
		array<String^>^ fila = gcnew array<String^>(4);
		fila[0] = objProducto->codigo;
		fila[1] = objProducto->nombre;
		fila[2] = objProducto->precio;
		this->dataGridView1->Rows->Add(fila);;
	}
}
private: System::Void frmNuevaCartaa_Load(System::Object^  sender, System::EventArgs^  e) {
	this->objCarta = gcnew Carta(codigo, fechaValidez, Nombre, estado, listaDeProductos);

}
		 //AgregarProducto
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {

	frmBuscarProducto^ ventanaBuscarProducto = gcnew frmBuscarProducto(objGestorProducto);
	ventanaBuscarProducto->ShowDialog();// se mantendrá aqui mientras no cerremos la ventana

	array<String^>^ fila = gcnew array<String^>(4);
	Producto^ objProductoSeleccionado = ventanaBuscarProducto->objProductoSeleccionado;
	fila[0] = objProductoSeleccionado->codigo;
	fila[1] = objProductoSeleccionado->nombre;
	fila[2] = objProductoSeleccionado->precio;
	this->dataGridView1->Rows->Add(fila);
	//agregamos el producto a la lista vacia de la carta
	objCarta->listaProductos->Add(objProductoSeleccionado);
}
		 //BOTON GRABAR
private: System::Void button2_Click_1(System::Object^  sender, System::EventArgs^  e) {
	String^ codigo = this->textBox1->Text;
	String^ fechavalidez = this->textBox2->Text;
	String^ nombre = this->textBox3->Text;
	String^ estado = this->comboBox1->Text;
	
	this->objCarta->codigo = codigo;
	this->objCarta->FechaValidez = fechavalidez;
	this->objCarta->Nombre = nombre;
	this->objCarta->estado = estado;

	this->objGestorCarta->AgregarCarta(objCarta);
	this->objGestorCarta->SerializeDetallesCarta(/*objCarta*/);
	MessageBox::Show("Carta Agregada");
	this->textBox1->Text = "";
	this->textBox2->Text = "";
	this->textBox3->Text = "";
	this->comboBox1->Text = "";

	this->Close();
}
};
}