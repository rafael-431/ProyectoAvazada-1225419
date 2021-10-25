#pragma once
#include<iostream>
#include <stdlib.h>
#include<fstream>
#include <infstr.h>
#include "Cola.h"
#include "Pila.h"
#include<string.h> // fijo


namespace Proyecto11225419 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		int i = 0;
		Cola^ cola1;
		Pila^ pila1;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::Button^ buttonDelcancion;
	private: System::Windows::Forms::TextBox^ txtdeletesong;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ buttonexport;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ buttonDesartista;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ button1;


	public:

		   Nodo^ nodoaux;
		MyForm(void)
		{
			InitializeComponent();
			cola1 = gcnew Cola();
			pila1 = gcnew Pila();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ inputartista;
	private: System::Windows::Forms::TextBox^ inputcancion;



	private: System::Windows::Forms::Button^ buintroducir;
	private: System::Windows::Forms::TextBox^ txtlistaespera;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txtplaylist;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ butplaylist;
	private: System::Windows::Forms::Button^ butreproduccion;
	private: System::Windows::Forms::Button^ butarchivo;


	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txtreproduccion;

	private: System::Windows::Forms::Label^ label7;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->inputartista = (gcnew System::Windows::Forms::TextBox());
			this->inputcancion = (gcnew System::Windows::Forms::TextBox());
			this->buintroducir = (gcnew System::Windows::Forms::Button());
			this->txtlistaespera = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtplaylist = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->butplaylist = (gcnew System::Windows::Forms::Button());
			this->butreproduccion = (gcnew System::Windows::Forms::Button());
			this->butarchivo = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtreproduccion = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->buttonDelcancion = (gcnew System::Windows::Forms::Button());
			this->txtdeletesong = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->buttonexport = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->buttonDesartista = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(613, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(284, 29);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Reproductor de música";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(92, 114);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(149, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Ingrese artista";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(76, 320);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(165, 25);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Ingrese canción";
			// 
			// inputartista
			// 
			this->inputartista->Location = System::Drawing::Point(70, 167);
			this->inputartista->Name = L"inputartista";
			this->inputartista->Size = System::Drawing::Size(190, 22);
			this->inputartista->TabIndex = 3;
			// 
			// inputcancion
			// 
			this->inputcancion->Location = System::Drawing::Point(70, 368);
			this->inputcancion->Name = L"inputcancion";
			this->inputcancion->Size = System::Drawing::Size(190, 22);
			this->inputcancion->TabIndex = 4;
			// 
			// buintroducir
			// 
			this->buintroducir->BackColor = System::Drawing::Color::OrangeRed;
			this->buintroducir->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buintroducir->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buintroducir->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->buintroducir->Location = System::Drawing::Point(325, 232);
			this->buintroducir->Name = L"buintroducir";
			this->buintroducir->Size = System::Drawing::Size(116, 54);
			this->buintroducir->TabIndex = 5;
			this->buintroducir->Text = L"Introducir";
			this->buintroducir->UseVisualStyleBackColor = false;
			this->buintroducir->Click += gcnew System::EventHandler(this, &MyForm::buintroducir_Click);
			// 
			// txtlistaespera
			// 
			this->txtlistaespera->Location = System::Drawing::Point(480, 114);
			this->txtlistaespera->Multiline = true;
			this->txtlistaespera->Name = L"txtlistaespera";
			this->txtlistaespera->Size = System::Drawing::Size(249, 362);
			this->txtlistaespera->TabIndex = 6;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(507, 76);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(222, 25);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Lista de espera (cola)";
			// 
			// txtplaylist
			// 
			this->txtplaylist->Location = System::Drawing::Point(986, 122);
			this->txtplaylist->Multiline = true;
			this->txtplaylist->Name = L"txtplaylist";
			this->txtplaylist->Size = System::Drawing::Size(249, 354);
			this->txtplaylist->TabIndex = 8;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(-88, -52);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(137, 25);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Playlist (pila)";
			// 
			// butplaylist
			// 
			this->butplaylist->BackColor = System::Drawing::Color::OrangeRed;
			this->butplaylist->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->butplaylist->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->butplaylist->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->butplaylist->Location = System::Drawing::Point(792, 167);
			this->butplaylist->Name = L"butplaylist";
			this->butplaylist->Size = System::Drawing::Size(116, 54);
			this->butplaylist->TabIndex = 10;
			this->butplaylist->Text = L"Pasar a Playlist";
			this->butplaylist->UseVisualStyleBackColor = false;
			this->butplaylist->Click += gcnew System::EventHandler(this, &MyForm::butplaylist_Click);
			// 
			// butreproduccion
			// 
			this->butreproduccion->BackColor = System::Drawing::Color::OrangeRed;
			this->butreproduccion->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"butreproduccion.BackgroundImage")));
			this->butreproduccion->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->butreproduccion->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->butreproduccion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->butreproduccion->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->butreproduccion->Location = System::Drawing::Point(806, 598);
			this->butreproduccion->Name = L"butreproduccion";
			this->butreproduccion->Size = System::Drawing::Size(114, 73);
			this->butreproduccion->TabIndex = 11;
			this->butreproduccion->UseVisualStyleBackColor = false;
			this->butreproduccion->Click += gcnew System::EventHandler(this, &MyForm::butreproduccion_Click);
			// 
			// butarchivo
			// 
			this->butarchivo->BackColor = System::Drawing::Color::OrangeRed;
			this->butarchivo->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->butarchivo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->butarchivo->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->butarchivo->Location = System::Drawing::Point(792, 311);
			this->butarchivo->Name = L"butarchivo";
			this->butarchivo->Size = System::Drawing::Size(116, 88);
			this->butarchivo->TabIndex = 12;
			this->butarchivo->Text = L"Playlist por archivo ";
			this->butarchivo->UseVisualStyleBackColor = false;
			this->butarchivo->Click += gcnew System::EventHandler(this, &MyForm::butarchivo_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(770, 556);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(190, 25);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Reproducir musica";
			// 
			// txtreproduccion
			// 
			this->txtreproduccion->Location = System::Drawing::Point(680, 723);
			this->txtreproduccion->Name = L"txtreproduccion";
			this->txtreproduccion->Size = System::Drawing::Size(355, 22);
			this->txtreproduccion->TabIndex = 14;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(687, 685);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(348, 25);
			this->label7->TabIndex = 15;
			this->label7->Text = L"Canción y artista Reproduciendose";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// buttonDelcancion
			// 
			this->buttonDelcancion->BackColor = System::Drawing::Color::OrangeRed;
			this->buttonDelcancion->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonDelcancion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonDelcancion->ForeColor = System::Drawing::Color::Black;
			this->buttonDelcancion->Location = System::Drawing::Point(323, 556);
			this->buttonDelcancion->Name = L"buttonDelcancion";
			this->buttonDelcancion->Size = System::Drawing::Size(118, 55);
			this->buttonDelcancion->TabIndex = 16;
			this->buttonDelcancion->Text = L"Borrar cancion";
			this->buttonDelcancion->UseVisualStyleBackColor = false;
			this->buttonDelcancion->Click += gcnew System::EventHandler(this, &MyForm::buttonDelcancion_Click);
			// 
			// txtdeletesong
			// 
			this->txtdeletesong->Location = System::Drawing::Point(70, 598);
			this->txtdeletesong->Name = L"txtdeletesong";
			this->txtdeletesong->Size = System::Drawing::Size(190, 22);
			this->txtdeletesong->TabIndex = 17;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(24, 538);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(264, 25);
			this->label8->TabIndex = 18;
			this->label8->Text = L"Ingrese canción a eliminar";
			// 
			// buttonexport
			// 
			this->buttonexport->BackColor = System::Drawing::Color::OrangeRed;
			this->buttonexport->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonexport->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonexport->Location = System::Drawing::Point(1277, 122);
			this->buttonexport->Name = L"buttonexport";
			this->buttonexport->Size = System::Drawing::Size(105, 78);
			this->buttonexport->TabIndex = 19;
			this->buttonexport->Text = L"Exportar playlist";
			this->buttonexport->UseVisualStyleBackColor = false;
			this->buttonexport->Click += gcnew System::EventHandler(this, &MyForm::buttonexport_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::OrangeRed;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(1277, 232);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(139, 82);
			this->button2->TabIndex = 21;
			this->button2->Text = L"Descendentes cancion";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// buttonDesartista
			// 
			this->buttonDesartista->BackColor = System::Drawing::Color::OrangeRed;
			this->buttonDesartista->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonDesartista->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonDesartista->Location = System::Drawing::Point(1286, 343);
			this->buttonDesartista->Name = L"buttonDesartista";
			this->buttonDesartista->Size = System::Drawing::Size(130, 70);
			this->buttonDesartista->TabIndex = 22;
			this->buttonDesartista->Text = L"Descendentes artista";
			this->buttonDesartista->UseVisualStyleBackColor = false;
			this->buttonDesartista->Click += gcnew System::EventHandler(this, &MyForm::buttonDesartista_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(1051, 76);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(137, 25);
			this->label9->TabIndex = 23;
			this->label9->Text = L"Playlist (pila)";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::OrangeRed;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(1275, 538);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(107, 64);
			this->button1->TabIndex = 24;
			this->button1->Text = L"Salir";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1463, 850);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->buttonDesartista);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->buttonexport);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->txtdeletesong);
			this->Controls->Add(this->buttonDelcancion);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->txtreproduccion);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->butarchivo);
			this->Controls->Add(this->butreproduccion);
			this->Controls->Add(this->butplaylist);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txtplaylist);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txtlistaespera);
			this->Controls->Add(this->buintroducir);
			this->Controls->Add(this->inputcancion);
			this->Controls->Add(this->inputartista);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
		void imprimirpila(){ // metodo para imprimir
		
			Nodo^ auxi = gcnew Nodo;
			auxi = pila1->cabeza;
			/*while (auxi->siguiente!=nullptr)
			{
			txtplaylist->Text += auxi->artista + " - " + auxi->cancion + Environment::NewLine;
			auxi = auxi->siguiente;
			}*/

			int tamaño = pila1->tamaño;
			while (tamaño!=0)
			{
				txtplaylist->Text += auxi->artista + " - " + auxi->cancion + Environment::NewLine;
				auxi = auxi->siguiente;
				tamaño--;
			}

		}

	private: System::Void buintroducir_Click(System::Object^ sender, System::EventArgs^ e) {
		
		String^ Artista;
		String^ cancion;
		Artista = inputartista->Text;
		cancion = inputcancion->Text;
		if (inputartista->Text == "")
		{
			Artista = "desconocido";
			cola1->encolar(Artista, cancion);
		}
		else
		{
			cola1->encolar(Artista, cancion);
		}
	
		txtlistaespera->AppendText(Artista + "-" + cancion + Environment::NewLine);
		inputartista->Clear();
		inputcancion->Clear();

}

private: System::Void butplaylist_Click(System::Object^ sender, System::EventArgs^ e) {

	nodoaux = cola1->cabeza;

	txtlistaespera->Clear();
	while (nodoaux!=nullptr)
	{
		pila1->insetar(cola1->desencolar());
		txtplaylist->Text+= nodoaux->artista + " - " + nodoaux->cancion + Environment::NewLine;
		nodoaux = nodoaux->siguiente;

	}



}
private: System::Void butreproduccion_Click(System::Object^ sender, System::EventArgs^ e) {
	Nodo^ auxi;


	// Condiciones para reproduccion actual
	if (pila1->cabeza==nullptr)
	{
		if (cola1->cabeza==nullptr)
		{
			MessageBox::Show("Cola vacia" + "",
				"Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else
		{
			pila1->insetar(cola1->desencolar());
			txtreproduccion->Text=(pila1->cabeza->artista + " - " + pila1->cabeza->cancion);
		}
		
	}
	else
	{
		txtreproduccion->Text=(pila1->cabeza->artista + " - " + pila1->cabeza->cancion);
	}

	txtplaylist->Clear();
	pila1->quitar();
	auxi = pila1->cabeza;

	while (auxi != nullptr) // Condiciòn para limpiar lista de repoducciòn
	{
		txtplaylist->AppendText(auxi->artista + "-" + auxi->cancion + Environment::NewLine);

		auxi = auxi->siguiente;		
	}
}
private: System::Void buttonDelcancion_Click(System::Object^ sender, System::EventArgs^ e) {
	Nodo^ guardar;
	Nodo^ auxiliar;
	Nodo^ anterior;

	guardar = cola1->cabeza;
	if (cola1->cabeza->cancion!=txtdeletesong->Text)
	{
		while (cola1->cabeza->cancion != txtdeletesong->Text)
		{
			anterior = cola1->desencolar();
			cola1->encolar(anterior->artista,anterior->cancion);
		}
		cola1->desencolar();
	}
	else
	{
		cola1->desencolar();
		guardar = cola1->cabeza;
	}

	if (cola1->cabeza!=nullptr) // Terminar la cola 
	{
		while (cola1->cabeza->cancion != guardar->cancion)
		{
			anterior = cola1->desencolar();
			cola1->encolar(anterior->artista, anterior->cancion);
		}
	}
	txtdeletesong->Clear();
	txtlistaespera->Clear();//limpieza
	auxiliar = cola1->cabeza;

	while (auxiliar!=nullptr)// Imprimir cola
	{
		txtlistaespera->AppendText(auxiliar->artista + " - " + auxiliar->cancion+ Environment::NewLine);
		auxiliar = auxiliar->siguiente;
	}

}
void validacionvacio(String^ &artista) { // funcion para eliminar
		   if (artista=="")
		   {
			   artista = "desconocido";
		   }
		} 
private: System::Void butarchivo_Click(System::Object^ sender, System::EventArgs^ e) {
	Nodo^ auxiliarpila=gcnew Nodo;
	String^ artista;
	String^ cancion;

	openFileDialog1->Filter = "archivos (csv)| *.csv";
	openFileDialog1->FileName = "";
	if (openFileDialog1->ShowDialog()==System::Windows::Forms::DialogResult::OK) // No vacio
	{
		array<String^>^ archivolineas = File::ReadAllLines(openFileDialog1->FileName); // Leer lineas
		if (archivolineas->Length>0)
		{
			
			for (int i = 0; i < archivolineas->Length; i++)// Separae en lineas
			{
				array<String^>^ archivoparejas = archivolineas[i]->Split(',');// Separar las parejas artista cancion
				for (int j= 0; j < archivoparejas->Length; j++)
				{
					array<String^>^ archivocancionartista = archivoparejas[j]->Split('-');//
					/*for (int k = 0; k < archivocancionartista->Length; k++)
					{
						nodoaux = archivocancionartista[k];
					}*/
					artista = archivocancionartista[0];
					cancion = archivocancionartista[1];
					validacionvacio(artista);
					auxiliarpila->artista = artista;
					auxiliarpila->cancion = cancion;
					pila1->insetar(auxiliarpila);
					/*MessageBox::Show(archivocancionartista[0]);*/
					/*auxiliarpila->artista = archivocancionartista[0];
					auxiliarpila->cancion = archivocancionartista[1];*/
					
				}
			}
		}
		imprimirpila();
	}
}
private: System::Void buttonexport_Click(System::Object^ sender, System::EventArgs^ e) {
	Nodo^ auxiliar;
	auxiliar = pila1->cabeza;

	Stream^ fs = gcnew FileStream("./playlist.txt", FileMode::Create, FileAccess::Write); // crear stream
	
	StreamWriter^ sr = gcnew StreamWriter(fs);// Poder escribir en el stream 
	int tamaño = pila1->tamaño;
	while (tamaño!=0)
	{
		sr->WriteLine(auxiliar->artista+"-"+auxiliar->cancion);
		auxiliar = auxiliar->siguiente;
		pila1->tamaño;
		tamaño--;
	}

	sr->Close();
	fs->Close();

	MessageBox::Show("La playlist se exporto con exito" + ",archivo guardado en directorio del ejecutable de proyecto",
		"Archivo exportado", MessageBoxButtons::OK, MessageBoxIcon::Information);
	
}
	   
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	
	pila1->ordenarascendentecan(pila1->cabeza);
	txtplaylist->Clear();
	imprimirpila();

}
private: System::Void buttonDesartista_Click(System::Object^ sender, System::EventArgs^ e) {
	pila1->ordenarascendenteart(pila1->cabeza);
	txtplaylist->Clear();
	imprimirpila();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};

}
