#pragma once

namespace PaintView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;	
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace PaintController;
	using namespace PaintModel;

	/// <summary>
	/// Summary for frmPaint
	/// </summary>
	public ref class frmPaint : public System::Windows::Forms::Form
	{
	public:
		frmPaint(void)
		{
			InitializeComponent();
			this->objGestorFiguras = gcnew GestorFiguras();
			this->objColor = Color::Red;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~frmPaint()
		{
			if (components)
			{
				delete components;
			}
		}
	private: int figura = 1;
	private: int x1, x2, y1, y2;
	private: Color objColor;
	private: GestorFiguras^ objGestorFiguras;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  archivoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  cargarToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  guardarToolStripMenuItem;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::ColorDialog^  colorDialog1;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(frmPaint::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->archivoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cargarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->guardarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->menuStrip1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->archivoToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(503, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// archivoToolStripMenuItem
			// 
			this->archivoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->cargarToolStripMenuItem,
					this->guardarToolStripMenuItem
			});
			this->archivoToolStripMenuItem->Name = L"archivoToolStripMenuItem";
			this->archivoToolStripMenuItem->Size = System::Drawing::Size(60, 20);
			this->archivoToolStripMenuItem->Text = L"Archivo";
			// 
			// cargarToolStripMenuItem
			// 
			this->cargarToolStripMenuItem->Name = L"cargarToolStripMenuItem";
			this->cargarToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->cargarToolStripMenuItem->Text = L"Cargar";
			this->cargarToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPaint::cargarToolStripMenuItem_Click);
			// 
			// guardarToolStripMenuItem
			// 
			this->guardarToolStripMenuItem->Name = L"guardarToolStripMenuItem";
			this->guardarToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->guardarToolStripMenuItem->Text = L"Guardar";
			this->guardarToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPaint::guardarToolStripMenuItem_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::Window;
			this->panel1->Location = System::Drawing::Point(24, 40);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(369, 259);
			this->panel1->TabIndex = 1;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmPaint::DibujarPanel);
			this->panel1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &frmPaint::PresionarMouse);
			this->panel1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &frmPaint::LevantarMouse);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->button4);
			this->panel2->Controls->Add(this->button3);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Location = System::Drawing::Point(411, 42);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(79, 231);
			this->panel2->TabIndex = 2;
			// 
			// button4
			// 
			this->button4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.Image")));
			this->button4->Location = System::Drawing::Point(16, 174);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(46, 37);
			this->button4->TabIndex = 3;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &frmPaint::button4_Click);
			// 
			// button3
			// 
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->Location = System::Drawing::Point(16, 120);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(46, 37);
			this->button3->TabIndex = 2;
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->Location = System::Drawing::Point(16, 65);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(46, 37);
			this->button2->TabIndex = 1;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmPaint::button2_Click);
			// 
			// button1
			// 
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(16, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(46, 37);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmPaint::button1_Click);
			// 
			// frmPaint
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(503, 324);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"frmPaint";
			this->Text = L"frmPaint";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->figura = 1;
	}
private: System::Void PresionarMouse(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 this->x1 = e->X;
			 this->y1 = e->Y;
}
private: System::Void LevantarMouse(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 this->x2 = e->X;
			 this->y2 = e->Y;
			 //MessageBox::Show(x1 + " " + x2 + " " + y1 + " " + y2);
			 Figura^ objFigura = gcnew Figura(x1, y1, x2 - x1, y2 - y1, figura,this->objColor);
			 this->objGestorFiguras->AgregarFigura(objFigura);
			 this->panel1->Invalidate();
}
private: System::Void DibujarPanel(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
			 Graphics^ objGraphics = e->Graphics;
			 for (int i = 0; i < this->objGestorFiguras->ObtenerCantidadFiguras(); i++)
			 {
				 Figura^ objFigura = this->objGestorFiguras->ObtenerFigura(i);
				 Pen^ objPen = gcnew Pen(objFigura->objColor);
				 if (objFigura->tipo == 1)
				 {					 
					 objGraphics->DrawRectangle(objPen,objFigura->inicioX, objFigura->inicioY, objFigura->finX, objFigura->finY);
				 }
				 else
				 {
					 if (objFigura->tipo == 2)
					 {					
						 objGraphics->DrawEllipse(objPen, objFigura->inicioX, objFigura->inicioY, objFigura->finX, objFigura->finY);
					 }
				 }

			 }
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->figura = 2;
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (colorDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			 {
				 this->objColor = colorDialog1->Color;
			 }
}
private: System::Void cargarToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->objGestorFiguras->Deserializar();
			 this->panel1->Invalidate();
}
private: System::Void guardarToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->objGestorFiguras->Serializar();
}
};
}
