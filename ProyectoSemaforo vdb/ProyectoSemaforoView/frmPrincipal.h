#pragma once
#include "frmMantSemaforos.h"
#include "LiStALed.h"

namespace ProyectoSemaforoView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for frmPrincipal
	/// </summary>
	public ref class frmPrincipal : public System::Windows::Forms::Form
	{
	public:
		frmPrincipal(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~frmPrincipal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  mantenimientoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  semaforosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  lEDToolStripMenuItem;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(frmPrincipal::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->mantenimientoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->semaforosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->lEDToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->mantenimientoToolStripMenuItem,
					this->lEDToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(4, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(681, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// mantenimientoToolStripMenuItem
			// 
			this->mantenimientoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->semaforosToolStripMenuItem });
			this->mantenimientoToolStripMenuItem->Name = L"mantenimientoToolStripMenuItem";
			this->mantenimientoToolStripMenuItem->Size = System::Drawing::Size(101, 20);
			this->mantenimientoToolStripMenuItem->Text = L"Mantenimiento";
			// 
			// semaforosToolStripMenuItem
			// 
			this->semaforosToolStripMenuItem->Name = L"semaforosToolStripMenuItem";
			this->semaforosToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->semaforosToolStripMenuItem->Text = L"Semaforos";
			this->semaforosToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::semaforosToolStripMenuItem_Click);
			// 
			// lEDToolStripMenuItem
			// 
			this->lEDToolStripMenuItem->Name = L"lEDToolStripMenuItem";
			this->lEDToolStripMenuItem->Size = System::Drawing::Size(39, 20);
			this->lEDToolStripMenuItem->Text = L"LED";
			this->lEDToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::lEDToolStripMenuItem_Click);
			// 
			// frmPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Blue;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(681, 405);
			this->Controls->Add(this->menuStrip1);
			this->ForeColor = System::Drawing::Color::Black;
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"frmPrincipal";
			this->Text = L"frmPrincipal";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void semaforosToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		frmMantSemaforos^ ventanaSemaforos = gcnew frmMantSemaforos();
		ventanaSemaforos->MdiParent = this;
		ventanaSemaforos->Show();
	}
	private: System::Void lEDToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		LiStALed^ ventanaSemaforos = gcnew LiStALed();
		ventanaSemaforos->MdiParent = this;
		ventanaSemaforos->Show();
	}
};
}
