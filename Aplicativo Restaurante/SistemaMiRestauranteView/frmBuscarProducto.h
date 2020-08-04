#pragma once

namespace SistemaMiRestauranteView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace SistemaMiRestauranteController;
	using namespace SistemaMiRestauranteModel;
	/// <summary>
	/// Summary for frmBuscarProducto
	/// </summary>
	public ref class frmBuscarProducto : public System::Windows::Forms::Form
	{
	public:
		frmBuscarProducto(GestorProducto^ objGestorProducto)
		{
			InitializeComponent();
			this->objGestorProducto =  objGestorProducto;
			this->objGestorCarta = gcnew GestorCarta();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~frmBuscarProducto()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: GestorProducto^ objGestorProducto;
	private: GestorCarta^ objGestorCarta;
	public: Producto^ objProductoSeleccionado;
	protected:
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(37, 32);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(449, 100);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Búsqueda";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(289, 40);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Buscar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmBuscarProducto::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(103, 42);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(171, 20);
			this->textBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(47, 45);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(50, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nombre :";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column1,
					this->Column2, this->Column3, this->Column4
			});
			this->dataGridView1->Location = System::Drawing::Point(37, 138);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(449, 150);
			this->dataGridView1->TabIndex = 2;
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
			this->Column3->HeaderText = L"Descripción";
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Precio";
			this->Column4->Name = L"Column4";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(213, 298);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Seleccionar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmBuscarProducto::button2_Click);
			// 
			// frmBuscarProducto
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(521, 333);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"frmBuscarProducto";
			this->Text = L"frmBuscarProducto";
			this->Load += gcnew System::EventHandler(this, &frmBuscarProducto::CargarVentanaBuscarProducto);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
private: void MostrarDatosEnGrilla()
{	
	this->dataGridView1->Rows->Clear();
	for (int i = 0; i < this->objGestorProducto->ObtenerCantidadProducto(); i++)
	{
		Producto^ objProducto = this->objGestorProducto->ObtenerProductoUnaPosicion(i);
		array<String^>^ fila = gcnew array<String^>(4);
		fila[0] = objProducto->codigo;
		fila[1] = objProducto->nombre;
		fila[2] = objProducto->descripcion;
		fila[3] = objProducto->precio;

		this->dataGridView1->Rows->Add(fila);;
	}
}

		 //Cargar Archivos
private: System::Void CargarVentanaBuscarProducto(System::Object^  sender, System::EventArgs^  e) {
	this->objGestorProducto->Deserializar();
	MostrarDatosEnGrilla();
}


 //SELECCIONAR
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	int posicionSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
	this->objProductoSeleccionado = objGestorProducto->ObtenerProductoUnaPosicion(posicionSeleccionada);	
	MessageBox::Show("Producto agregado");
	this->Close();
}
		
		 //BUSCARRR
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ nombre = this->textBox1->Text;
	if (nombre == "")
	{
		MostrarDatosEnGrilla();
	}
	else
	{
		Producto^ objProducto = this->objGestorProducto->BuscarProductoxNomrbe(nombre);
		this->dataGridView1->Rows->Clear();

		array<String^>^ fila = gcnew array<String^>(4);
		fila[0] = objProducto->codigo;
		fila[1] = objProducto->nombre;
		fila[2] = objProducto->descripcion;
		fila[3] = Convert::ToString(objProducto->precio);
		this->dataGridView1->Rows->Add(fila);
		
	}
}
		 



};
}
