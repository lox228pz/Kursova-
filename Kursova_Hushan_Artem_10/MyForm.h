#include <string.h>
#include <vector>
#include <cliext/vector>
#include <cliext/algorithm>
#include <vcclr.h>
#include <msclr/marshal.h>
#include <msclr/marshal_cppstd.h>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>
#include <vcclr.h>
#include"Header.h"
#using <PresentationFramework.dll>
#using <WindowsBase.dll>
std::vector<CBox> boxes;
using namespace System::IO;
using namespace System;
using namespace System::Collections::Generic;
#pragma once

namespace KursovaHushanArtem10 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}






	private: System::Windows::Forms::Label^ Komunal;
	private: System::Windows::Forms::Label^ Salary;
	private: System::Windows::Forms::Label^ Podatku;
	private: System::Windows::Forms::Label^ SummarySalary;
	private: System::Windows::Forms::Button^ CalculatePodatku;
	private: System::Windows::Forms::Button^ CalculateSalary;
	private: System::Windows::Forms::Button^ CalculateKomunal;
	private: System::Windows::Forms::Button^ BoxPicture;
	private: System::Windows::Forms::Button^ ReadANdShowBoxes;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ WriteInFail;

	private: System::Windows::Forms::Button^ SummaryMonthMoney;
	private: System::Windows::Forms::Label^ labelPodatku;
	private: System::Windows::Forms::Label^ labelSalary;
	private: System::Windows::Forms::Label^ labelKomunal;
	private: System::Windows::Forms::Label^ labebMonthS;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TableLayoutPanel^ CBoxTableLayoutPanel_1;
	private: System::Windows::Forms::Button^ ReadVector;
	private: System::Windows::Forms::TextBox^ Width;
	private: System::Windows::Forms::TextBox^ Height;
	private: System::Windows::Forms::TextBox^ length;


	private: System::Windows::Forms::TextBox^ Material;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ Add;
	private: System::Windows::Forms::Button^ Delete;
	private: System::Windows::Forms::TextBox^ Materials;
	private: System::Windows::Forms::TextBox^ HeightA;
	private: System::Windows::Forms::TextBox^ LengthA;



	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ WidthA;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ Price;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ Number;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel3;



	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;

	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ readToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ writeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ sortToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ summaryMoneyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ podatkiToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ salaryToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ komunalToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ showToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ addToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ deleteToolStripMenuItem;
private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem1;
private: System::Windows::Forms::ToolStripMenuItem^ readToolStripMenuItem1;
private: System::Windows::Forms::ToolStripMenuItem^ writeToolStripMenuItem1;
private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem1;
private: System::Windows::Forms::ToolStripMenuItem^ sortToolStripMenuItem1;
private: System::Windows::Forms::ToolStripMenuItem^ summaryMoneyToolStripMenuItem1;
private: System::Windows::Forms::ToolStripMenuItem^ podatkiToolStripMenuItem1;
private: System::Windows::Forms::ToolStripMenuItem^ salaryToolStripMenuItem1;
private: System::Windows::Forms::ToolStripMenuItem^ komunalToolStripMenuItem1;
private: System::Windows::Forms::ToolStripMenuItem^ showToolStripMenuItem1;
private: System::Windows::Forms::ToolStripMenuItem^ addToolStripMenuItem1;
private: System::Windows::Forms::ToolStripMenuItem^ deleteToolStripMenuItem1;
private: System::Windows::Forms::Button^ button2;
private: System::Windows::Forms::Button^ Undo;
private: System::ComponentModel::IContainer^ components;






























	protected:

	protected:


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->Komunal = (gcnew System::Windows::Forms::Label());
			this->Salary = (gcnew System::Windows::Forms::Label());
			this->Podatku = (gcnew System::Windows::Forms::Label());
			this->SummarySalary = (gcnew System::Windows::Forms::Label());
			this->CalculatePodatku = (gcnew System::Windows::Forms::Button());
			this->CalculateSalary = (gcnew System::Windows::Forms::Button());
			this->CalculateKomunal = (gcnew System::Windows::Forms::Button());
			this->BoxPicture = (gcnew System::Windows::Forms::Button());
			this->ReadANdShowBoxes = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->WriteInFail = (gcnew System::Windows::Forms::Button());
			this->SummaryMonthMoney = (gcnew System::Windows::Forms::Button());
			this->labelPodatku = (gcnew System::Windows::Forms::Label());
			this->labelSalary = (gcnew System::Windows::Forms::Label());
			this->labelKomunal = (gcnew System::Windows::Forms::Label());
			this->labebMonthS = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->CBoxTableLayoutPanel_1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->ReadVector = (gcnew System::Windows::Forms::Button());
			this->Width = (gcnew System::Windows::Forms::TextBox());
			this->Height = (gcnew System::Windows::Forms::TextBox());
			this->length = (gcnew System::Windows::Forms::TextBox());
			this->Material = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->Add = (gcnew System::Windows::Forms::Button());
			this->Delete = (gcnew System::Windows::Forms::Button());
			this->Materials = (gcnew System::Windows::Forms::TextBox());
			this->HeightA = (gcnew System::Windows::Forms::TextBox());
			this->LengthA = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->WidthA = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->Price = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->Number = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->readToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->writeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sortToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->summaryMoneyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->podatkiToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salaryToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->komunalToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->showToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->addToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->deleteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->fileToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->readToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->writeToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sortToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->summaryMoneyToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->podatkiToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salaryToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->komunalToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->showToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->addToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->deleteToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->Undo = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->contextMenuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// Komunal
			// 
			this->Komunal->AutoSize = true;
			this->Komunal->Location = System::Drawing::Point(759, 131);
			this->Komunal->Name = L"Komunal";
			this->Komunal->Size = System::Drawing::Size(217, 16);
			this->Komunal->TabIndex = 6;
			this->Komunal->Text = L"Витрати на комунальні послуги:";
			// 
			// Salary
			// 
			this->Salary->AutoSize = true;
			this->Salary->Location = System::Drawing::Point(759, 97);
			this->Salary->Name = L"Salary";
			this->Salary->Size = System::Drawing::Size(150, 16);
			this->Salary->TabIndex = 7;
			this->Salary->Text = L"Витрати на зарплату:";
			// 
			// Podatku
			// 
			this->Podatku->AutoSize = true;
			this->Podatku->Location = System::Drawing::Point(759, 68);
			this->Podatku->Name = L"Podatku";
			this->Podatku->Size = System::Drawing::Size(141, 16);
			this->Podatku->TabIndex = 8;
			this->Podatku->Text = L"Витрати на податки:";
			// 
			// SummarySalary
			// 
			this->SummarySalary->AutoSize = true;
			this->SummarySalary->Location = System::Drawing::Point(759, 171);
			this->SummarySalary->Name = L"SummarySalary";
			this->SummarySalary->Size = System::Drawing::Size(173, 16);
			this->SummarySalary->TabIndex = 9;
			this->SummarySalary->Text = L"Сумарний місячний дохід:";
			// 
			// CalculatePodatku
			// 
			this->CalculatePodatku->Location = System::Drawing::Point(989, 47);
			this->CalculatePodatku->Name = L"CalculatePodatku";
			this->CalculatePodatku->Size = System::Drawing::Size(240, 29);
			this->CalculatePodatku->TabIndex = 10;
			this->CalculatePodatku->Text = L"Вирахувати витрати на податки";
			this->CalculatePodatku->UseVisualStyleBackColor = true;
			this->CalculatePodatku->Click += gcnew System::EventHandler(this, &MyForm::CalculatePodatku_Click);
			// 
			// CalculateSalary
			// 
			this->CalculateSalary->Location = System::Drawing::Point(989, 82);
			this->CalculateSalary->Name = L"CalculateSalary";
			this->CalculateSalary->Size = System::Drawing::Size(240, 30);
			this->CalculateSalary->TabIndex = 11;
			this->CalculateSalary->Text = L"Вирахувати витрати на зарплату";
			this->CalculateSalary->UseVisualStyleBackColor = true;
			this->CalculateSalary->Click += gcnew System::EventHandler(this, &MyForm::CalculateSalary_Click);
			// 
			// CalculateKomunal
			// 
			this->CalculateKomunal->Location = System::Drawing::Point(989, 117);
			this->CalculateKomunal->Name = L"CalculateKomunal";
			this->CalculateKomunal->Size = System::Drawing::Size(240, 45);
			this->CalculateKomunal->TabIndex = 12;
			this->CalculateKomunal->Text = L"Вирахувати витрати на ком. послуги";
			this->CalculateKomunal->UseVisualStyleBackColor = true;
			this->CalculateKomunal->Click += gcnew System::EventHandler(this, &MyForm::CalculateKomunal_Click);
			// 
			// BoxPicture
			// 
			this->BoxPicture->Location = System::Drawing::Point(1316, 479);
			this->BoxPicture->Name = L"BoxPicture";
			this->BoxPicture->Size = System::Drawing::Size(240, 23);
			this->BoxPicture->TabIndex = 13;
			this->BoxPicture->Text = L"Вивести малюнок коробки";
			this->BoxPicture->UseVisualStyleBackColor = true;
			this->BoxPicture->Click += gcnew System::EventHandler(this, &MyForm::BoxPicture_Click);
			// 
			// ReadANdShowBoxes
			// 
			this->ReadANdShowBoxes->Location = System::Drawing::Point(190, 477);
			this->ReadANdShowBoxes->Name = L"ReadANdShowBoxes";
			this->ReadANdShowBoxes->Size = System::Drawing::Size(240, 34);
			this->ReadANdShowBoxes->TabIndex = 14;
			this->ReadANdShowBoxes->Text = L"Вивести дані по коробкам в табл.";
			this->ReadANdShowBoxes->UseVisualStyleBackColor = true;
			this->ReadANdShowBoxes->Click += gcnew System::EventHandler(this, &MyForm::ReadANdShowBoxes_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(989, 168);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(240, 36);
			this->button1->TabIndex = 15;
			this->button1->Text = L"Посортувати таблицю";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// WriteInFail
			// 
			this->WriteInFail->Location = System::Drawing::Point(989, 210);
			this->WriteInFail->Name = L"WriteInFail";
			this->WriteInFail->Size = System::Drawing::Size(240, 36);
			this->WriteInFail->TabIndex = 16;
			this->WriteInFail->Text = L"Записати дані з табл. у файл";
			this->WriteInFail->UseVisualStyleBackColor = true;
			this->WriteInFail->Click += gcnew System::EventHandler(this, &MyForm::WriteInFail_Click);
			// 
			// SummaryMonthMoney
			// 
			this->SummaryMonthMoney->Location = System::Drawing::Point(989, 325);
			this->SummaryMonthMoney->Name = L"SummaryMonthMoney";
			this->SummaryMonthMoney->Size = System::Drawing::Size(240, 51);
			this->SummaryMonthMoney->TabIndex = 18;
			this->SummaryMonthMoney->Text = L"Вирахувати сумарний місячний дохід";
			this->SummaryMonthMoney->UseVisualStyleBackColor = true;
			this->SummaryMonthMoney->Click += gcnew System::EventHandler(this, &MyForm::SummaryMonthMoney_Click_1);
			// 
			// labelPodatku
			// 
			this->labelPodatku->AutoSize = true;
			this->labelPodatku->Location = System::Drawing::Point(922, 65);
			this->labelPodatku->Name = L"labelPodatku";
			this->labelPodatku->Size = System::Drawing::Size(14, 16);
			this->labelPodatku->TabIndex = 19;
			this->labelPodatku->Text = L"0";
			// 
			// labelSalary
			// 
			this->labelSalary->AutoSize = true;
			this->labelSalary->Location = System::Drawing::Point(915, 97);
			this->labelSalary->Name = L"labelSalary";
			this->labelSalary->Size = System::Drawing::Size(14, 16);
			this->labelSalary->TabIndex = 20;
			this->labelSalary->Text = L"0";
			// 
			// labelKomunal
			// 
			this->labelKomunal->AutoSize = true;
			this->labelKomunal->Location = System::Drawing::Point(973, 131);
			this->labelKomunal->Name = L"labelKomunal";
			this->labelKomunal->Size = System::Drawing::Size(14, 16);
			this->labelKomunal->TabIndex = 21;
			this->labelKomunal->Text = L"0";
			// 
			// labebMonthS
			// 
			this->labebMonthS->AutoSize = true;
			this->labebMonthS->Location = System::Drawing::Point(947, 171);
			this->labebMonthS->Name = L"labebMonthS";
			this->labebMonthS->Size = System::Drawing::Size(14, 16);
			this->labebMonthS->TabIndex = 22;
			this->labebMonthS->Text = L"0";
			// 
			// panel1
			// 
			this->panel1->AutoScroll = true;
			this->panel1->Controls->Add(this->CBoxTableLayoutPanel_1);
			this->panel1->Location = System::Drawing::Point(38, 47);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(716, 424);
			this->panel1->TabIndex = 23;
			// 
			// CBoxTableLayoutPanel_1
			// 
			this->CBoxTableLayoutPanel_1->ColumnCount = 8;
			this->CBoxTableLayoutPanel_1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				19.64286F)));
			this->CBoxTableLayoutPanel_1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				80.35714F)));
			this->CBoxTableLayoutPanel_1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				93)));
			this->CBoxTableLayoutPanel_1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				181)));
			this->CBoxTableLayoutPanel_1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				171)));
			this->CBoxTableLayoutPanel_1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				34)));
			this->CBoxTableLayoutPanel_1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				35)));
			this->CBoxTableLayoutPanel_1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				27)));
			this->CBoxTableLayoutPanel_1->Location = System::Drawing::Point(3, 0);
			this->CBoxTableLayoutPanel_1->Name = L"CBoxTableLayoutPanel_1";
			this->CBoxTableLayoutPanel_1->RowCount = 1;
			this->CBoxTableLayoutPanel_1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->CBoxTableLayoutPanel_1->Size = System::Drawing::Size(710, 32);
			this->CBoxTableLayoutPanel_1->TabIndex = 0;
			// 
			// ReadVector
			// 
			this->ReadVector->Location = System::Drawing::Point(989, 249);
			this->ReadVector->Name = L"ReadVector";
			this->ReadVector->Size = System::Drawing::Size(240, 36);
			this->ReadVector->TabIndex = 24;
			this->ReadVector->Text = L"Зчитати дані з файлу ";
			this->ReadVector->UseVisualStyleBackColor = true;
			this->ReadVector->Click += gcnew System::EventHandler(this, &MyForm::ReadVector_Click);
			// 
			// Width
			// 
			this->Width->Location = System::Drawing::Point(1060, 482);
			this->Width->Name = L"Width";
			this->Width->Size = System::Drawing::Size(47, 22);
			this->Width->TabIndex = 25;
			// 
			// Height
			// 
			this->Height->Location = System::Drawing::Point(1060, 415);
			this->Height->Name = L"Height";
			this->Height->Size = System::Drawing::Size(47, 22);
			this->Height->TabIndex = 26;
			// 
			// length
			// 
			this->length->Location = System::Drawing::Point(1060, 448);
			this->length->Name = L"length";
			this->length->Size = System::Drawing::Size(47, 22);
			this->length->TabIndex = 27;
			// 
			// Material
			// 
			this->Material->Location = System::Drawing::Point(1060, 387);
			this->Material->Name = L"Material";
			this->Material->Size = System::Drawing::Size(102, 22);
			this->Material->TabIndex = 30;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(986, 387);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(68, 16);
			this->label1->TabIndex = 31;
			this->label1->Text = L"Матеріал";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(986, 415);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(52, 16);
			this->label2->TabIndex = 32;
			this->label2->Text = L"Розмір";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(986, 451);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 16);
			this->label3->TabIndex = 33;
			this->label3->Text = L"Ціна";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(986, 485);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(64, 16);
			this->label4->TabIndex = 34;
			this->label4->Text = L"Кількість";
			// 
			// Add
			// 
			this->Add->Location = System::Drawing::Point(54, 477);
			this->Add->Name = L"Add";
			this->Add->Size = System::Drawing::Size(69, 34);
			this->Add->TabIndex = 35;
			this->Add->Text = L"Додати";
			this->Add->UseVisualStyleBackColor = true;
			this->Add->Click += gcnew System::EventHandler(this, &MyForm::Add_Click);
			// 
			// Delete
			// 
			this->Delete->Location = System::Drawing::Point(478, 477);
			this->Delete->Name = L"Delete";
			this->Delete->Size = System::Drawing::Size(94, 34);
			this->Delete->TabIndex = 36;
			this->Delete->Text = L"Видалити";
			this->Delete->UseVisualStyleBackColor = true;
			this->Delete->Click += gcnew System::EventHandler(this, &MyForm::Delete_Click);
			// 
			// Materials
			// 
			this->Materials->Location = System::Drawing::Point(762, 224);
			this->Materials->Name = L"Materials";
			this->Materials->Size = System::Drawing::Size(102, 22);
			this->Materials->TabIndex = 37;
			// 
			// HeightA
			// 
			this->HeightA->Location = System::Drawing::Point(762, 278);
			this->HeightA->Name = L"HeightA";
			this->HeightA->Size = System::Drawing::Size(47, 22);
			this->HeightA->TabIndex = 38;
			// 
			// LengthA
			// 
			this->LengthA->Location = System::Drawing::Point(762, 323);
			this->LengthA->Name = L"LengthA";
			this->LengthA->Size = System::Drawing::Size(47, 22);
			this->LengthA->TabIndex = 39;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(757, 198);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(68, 16);
			this->label5->TabIndex = 40;
			this->label5->Text = L"Матеріал";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(759, 257);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(54, 16);
			this->label6->TabIndex = 41;
			this->label6->Text = L"Висота";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(757, 304);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(65, 16);
			this->label7->TabIndex = 42;
			this->label7->Text = L"Довжина";
			// 
			// WidthA
			// 
			this->WidthA->Location = System::Drawing::Point(760, 369);
			this->WidthA->Name = L"WidthA";
			this->WidthA->Size = System::Drawing::Size(47, 22);
			this->WidthA->TabIndex = 43;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(759, 350);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(58, 16);
			this->label8->TabIndex = 44;
			this->label8->Text = L"Ширина";
			// 
			// Price
			// 
			this->Price->Location = System::Drawing::Point(760, 414);
			this->Price->Name = L"Price";
			this->Price->Size = System::Drawing::Size(47, 22);
			this->Price->TabIndex = 45;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(759, 395);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(35, 16);
			this->label9->TabIndex = 46;
			this->label9->Text = L"Ціна";
			// 
			// Number
			// 
			this->Number->Location = System::Drawing::Point(800, 481);
			this->Number->Name = L"Number";
			this->Number->Size = System::Drawing::Size(47, 22);
			this->Number->TabIndex = 47;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(744, 484);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(50, 16);
			this->label10->TabIndex = 48;
			this->label10->Text = L"Номер";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->panel2->Controls->Add(this->panel8);
			this->panel2->Controls->Add(this->panel7);
			this->panel2->Controls->Add(this->panel6);
			this->panel2->Controls->Add(this->panel5);
			this->panel2->Controls->Add(this->panel4);
			this->panel2->Controls->Add(this->panel3);
			this->panel2->Location = System::Drawing::Point(1252, 54);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(375, 404);
			this->panel2->TabIndex = 49;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel2_Paint);
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(191)), static_cast<System::Int32>(static_cast<System::Byte>(156)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->panel8->Location = System::Drawing::Point(118, 318);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(76, 79);
			this->panel8->TabIndex = 3;
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(191)), static_cast<System::Int32>(static_cast<System::Byte>(156)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->panel7->Location = System::Drawing::Point(118, 25);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(76, 79);
			this->panel7->TabIndex = 2;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(181)),
				static_cast<System::Int32>(static_cast<System::Byte>(16)));
			this->panel6->Location = System::Drawing::Point(272, 102);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(76, 214);
			this->panel6->TabIndex = 1;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(166)), static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->panel5->Location = System::Drawing::Point(195, 102);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(76, 214);
			this->panel5->TabIndex = 1;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(166)), static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->panel4->Location = System::Drawing::Point(41, 104);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(76, 214);
			this->panel4->TabIndex = 1;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(112)), static_cast<System::Int32>(static_cast<System::Byte>(89)),
				static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->panel3->Location = System::Drawing::Point(118, 104);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(76, 214);
			this->panel3->TabIndex = 0;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->fileToolStripMenuItem,
					this->sortToolStripMenuItem, this->summaryMoneyToolStripMenuItem, this->podatkiToolStripMenuItem, this->salaryToolStripMenuItem,
					this->komunalToolStripMenuItem, this->showToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1648, 28);
			this->menuStrip1->TabIndex = 53;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->readToolStripMenuItem,
					this->writeToolStripMenuItem, this->exitToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(46, 24);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// readToolStripMenuItem
			// 
			this->readToolStripMenuItem->Name = L"readToolStripMenuItem";
			this->readToolStripMenuItem->Size = System::Drawing::Size(128, 26);
			this->readToolStripMenuItem->Text = L"Read";
			this->readToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::readToolStripMenuItem_Click);
			// 
			// writeToolStripMenuItem
			// 
			this->writeToolStripMenuItem->Name = L"writeToolStripMenuItem";
			this->writeToolStripMenuItem->Size = System::Drawing::Size(128, 26);
			this->writeToolStripMenuItem->Text = L"Write";
			this->writeToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::writeToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(128, 26);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::exitToolStripMenuItem_Click);
			// 
			// sortToolStripMenuItem
			// 
			this->sortToolStripMenuItem->Name = L"sortToolStripMenuItem";
			this->sortToolStripMenuItem->Size = System::Drawing::Size(50, 24);
			this->sortToolStripMenuItem->Text = L"Sort";
			this->sortToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::sortToolStripMenuItem_Click);
			// 
			// summaryMoneyToolStripMenuItem
			// 
			this->summaryMoneyToolStripMenuItem->Name = L"summaryMoneyToolStripMenuItem";
			this->summaryMoneyToolStripMenuItem->Size = System::Drawing::Size(130, 24);
			this->summaryMoneyToolStripMenuItem->Text = L"SummaryMoney";
			this->summaryMoneyToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::summaryMoneyToolStripMenuItem_Click);
			// 
			// podatkiToolStripMenuItem
			// 
			this->podatkiToolStripMenuItem->Name = L"podatkiToolStripMenuItem";
			this->podatkiToolStripMenuItem->Size = System::Drawing::Size(72, 24);
			this->podatkiToolStripMenuItem->Text = L"Podatki";
			this->podatkiToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::podatkiToolStripMenuItem_Click);
			// 
			// salaryToolStripMenuItem
			// 
			this->salaryToolStripMenuItem->Name = L"salaryToolStripMenuItem";
			this->salaryToolStripMenuItem->Size = System::Drawing::Size(63, 24);
			this->salaryToolStripMenuItem->Text = L"Salary";
			this->salaryToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::salaryToolStripMenuItem_Click);
			// 
			// komunalToolStripMenuItem
			// 
			this->komunalToolStripMenuItem->Name = L"komunalToolStripMenuItem";
			this->komunalToolStripMenuItem->Size = System::Drawing::Size(82, 24);
			this->komunalToolStripMenuItem->Text = L"Komunal";
			this->komunalToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::komunalToolStripMenuItem_Click);
			// 
			// showToolStripMenuItem
			// 
			this->showToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->addToolStripMenuItem,
					this->deleteToolStripMenuItem
			});
			this->showToolStripMenuItem->Name = L"showToolStripMenuItem";
			this->showToolStripMenuItem->Size = System::Drawing::Size(59, 24);
			this->showToolStripMenuItem->Text = L"Show";
			this->showToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::showToolStripMenuItem_Click);
			// 
			// addToolStripMenuItem
			// 
			this->addToolStripMenuItem->Name = L"addToolStripMenuItem";
			this->addToolStripMenuItem->Size = System::Drawing::Size(136, 26);
			this->addToolStripMenuItem->Text = L"Add";
			this->addToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::addToolStripMenuItem_Click);
			// 
			// deleteToolStripMenuItem
			// 
			this->deleteToolStripMenuItem->Name = L"deleteToolStripMenuItem";
			this->deleteToolStripMenuItem->Size = System::Drawing::Size(136, 26);
			this->deleteToolStripMenuItem->Text = L"Delete";
			this->deleteToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::deleteToolStripMenuItem_Click);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->fileToolStripMenuItem1,
					this->sortToolStripMenuItem1, this->summaryMoneyToolStripMenuItem1, this->podatkiToolStripMenuItem1, this->salaryToolStripMenuItem1,
					this->komunalToolStripMenuItem1, this->showToolStripMenuItem1
			});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(186, 172);
			// 
			// fileToolStripMenuItem1
			// 
			this->fileToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->readToolStripMenuItem1,
					this->writeToolStripMenuItem1, this->exitToolStripMenuItem1
			});
			this->fileToolStripMenuItem1->Name = L"fileToolStripMenuItem1";
			this->fileToolStripMenuItem1->Size = System::Drawing::Size(185, 24);
			this->fileToolStripMenuItem1->Text = L"File";
			// 
			// readToolStripMenuItem1
			// 
			this->readToolStripMenuItem1->Name = L"readToolStripMenuItem1";
			this->readToolStripMenuItem1->Size = System::Drawing::Size(128, 26);
			this->readToolStripMenuItem1->Text = L"Read";
			this->readToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::readToolStripMenuItem1_Click);
			// 
			// writeToolStripMenuItem1
			// 
			this->writeToolStripMenuItem1->Name = L"writeToolStripMenuItem1";
			this->writeToolStripMenuItem1->Size = System::Drawing::Size(128, 26);
			this->writeToolStripMenuItem1->Text = L"Write";
			this->writeToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::writeToolStripMenuItem1_Click);
			// 
			// exitToolStripMenuItem1
			// 
			this->exitToolStripMenuItem1->Name = L"exitToolStripMenuItem1";
			this->exitToolStripMenuItem1->Size = System::Drawing::Size(128, 26);
			this->exitToolStripMenuItem1->Text = L"Exit";
			// 
			// sortToolStripMenuItem1
			// 
			this->sortToolStripMenuItem1->Name = L"sortToolStripMenuItem1";
			this->sortToolStripMenuItem1->Size = System::Drawing::Size(185, 24);
			this->sortToolStripMenuItem1->Text = L"Sort";
			this->sortToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::sortToolStripMenuItem1_Click);
			// 
			// summaryMoneyToolStripMenuItem1
			// 
			this->summaryMoneyToolStripMenuItem1->Name = L"summaryMoneyToolStripMenuItem1";
			this->summaryMoneyToolStripMenuItem1->Size = System::Drawing::Size(185, 24);
			this->summaryMoneyToolStripMenuItem1->Text = L"SummaryMoney";
			this->summaryMoneyToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::summaryMoneyToolStripMenuItem1_Click);
			// 
			// podatkiToolStripMenuItem1
			// 
			this->podatkiToolStripMenuItem1->Name = L"podatkiToolStripMenuItem1";
			this->podatkiToolStripMenuItem1->Size = System::Drawing::Size(185, 24);
			this->podatkiToolStripMenuItem1->Text = L"Podatki";
			this->podatkiToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::podatkiToolStripMenuItem1_Click);
			// 
			// salaryToolStripMenuItem1
			// 
			this->salaryToolStripMenuItem1->Name = L"salaryToolStripMenuItem1";
			this->salaryToolStripMenuItem1->Size = System::Drawing::Size(185, 24);
			this->salaryToolStripMenuItem1->Text = L"Salary";
			this->salaryToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::salaryToolStripMenuItem1_Click);
			// 
			// komunalToolStripMenuItem1
			// 
			this->komunalToolStripMenuItem1->Name = L"komunalToolStripMenuItem1";
			this->komunalToolStripMenuItem1->Size = System::Drawing::Size(185, 24);
			this->komunalToolStripMenuItem1->Text = L"Komunal";
			this->komunalToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::komunalToolStripMenuItem1_Click);
			// 
			// showToolStripMenuItem1
			// 
			this->showToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->addToolStripMenuItem1,
					this->deleteToolStripMenuItem1
			});
			this->showToolStripMenuItem1->Name = L"showToolStripMenuItem1";
			this->showToolStripMenuItem1->Size = System::Drawing::Size(185, 24);
			this->showToolStripMenuItem1->Text = L"Show";
			this->showToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::showToolStripMenuItem1_Click);
			// 
			// addToolStripMenuItem1
			// 
			this->addToolStripMenuItem1->Name = L"addToolStripMenuItem1";
			this->addToolStripMenuItem1->Size = System::Drawing::Size(136, 26);
			this->addToolStripMenuItem1->Text = L"Add";
			this->addToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::addToolStripMenuItem1_Click);
			// 
			// deleteToolStripMenuItem1
			// 
			this->deleteToolStripMenuItem1->Name = L"deleteToolStripMenuItem1";
			this->deleteToolStripMenuItem1->Size = System::Drawing::Size(136, 26);
			this->deleteToolStripMenuItem1->Text = L"Delete";
			this->deleteToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::deleteToolStripMenuItem1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(989, 286);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(240, 36);
			this->button2->TabIndex = 54;
			this->button2->Text = L"Записати додаткові дані у файл";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// Undo
			// 
			this->Undo->Location = System::Drawing::Point(767, 31);
			this->Undo->Name = L"Undo";
			this->Undo->Size = System::Drawing::Size(58, 34);
			this->Undo->TabIndex = 55;
			this->Undo->Text = L"Undo";
			this->Undo->UseVisualStyleBackColor = true;
			this->Undo->Click += gcnew System::EventHandler(this, &MyForm::Undo_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1648, 543);
			this->ContextMenuStrip = this->contextMenuStrip1;
			this->Controls->Add(this->Undo);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->Number);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->Price);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->WidthA);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->LengthA);
			this->Controls->Add(this->HeightA);
			this->Controls->Add(this->Materials);
			this->Controls->Add(this->Delete);
			this->Controls->Add(this->Add);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Material);
			this->Controls->Add(this->length);
			this->Controls->Add(this->Height);
			this->Controls->Add(this->Width);
			this->Controls->Add(this->ReadVector);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->labebMonthS);
			this->Controls->Add(this->labelKomunal);
			this->Controls->Add(this->labelSalary);
			this->Controls->Add(this->labelPodatku);
			this->Controls->Add(this->SummaryMonthMoney);
			this->Controls->Add(this->WriteInFail);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->ReadANdShowBoxes);
			this->Controls->Add(this->BoxPicture);
			this->Controls->Add(this->CalculateKomunal);
			this->Controls->Add(this->CalculateSalary);
			this->Controls->Add(this->CalculatePodatku);
			this->Controls->Add(this->SummarySalary);
			this->Controls->Add(this->Podatku);
			this->Controls->Add(this->Salary);
			this->Controls->Add(this->Komunal);
			this->Controls->Add(this->menuStrip1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load_1);
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->contextMenuStrip1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//Функція для запису нашого вектору об'єктів у файл
		///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	private: void writeVectorToFile(const std::vector<CBox>& boxes, const std::string& filename) {
		try {
			std::ofstream outputFile(filename);

			if (!outputFile.is_open()) {
				MessageBox::Show("Неможливо відкрити файл");
			}

			for (const CBox& box : boxes) {
				outputFile << box; // Викликає оператор <<, який ви перевантажили
			}

			outputFile.close();
		}
		catch (const std::exception& e) {
			// Обробка помилок
			MessageBox::Show(gcnew String(e.what()), "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
 private: void writeValueToFile(double MonthMoney,double Salary,double Komunal,double Podatku, const std::string& filename) {
			   try {
				   std::ofstream outputFile(filename);

				   if (!outputFile.is_open()) {
					   MessageBox::Show("Неможливо відкрити файл");
				   }

				   outputFile << "Summary Month Money: " << MonthMoney << endl;
				   outputFile << "Salary: "<<Salary<<endl;
				   outputFile <<"Komunal: "<<Komunal<<endl;
				   outputFile <<"Podatki: "<<Podatku<<endl;

				   outputFile.close();
			   }
			   catch (const std::exception& e) {
				   // Обробка помилок
				   MessageBox::Show(gcnew String(e.what()), "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			   }
		   }
		   ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



		   //Функція для створення шапки нашої таблиці
		   ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	private: void HeadOfTable()
	{
		std::vector<std::string> stringVector = { "N", "Матеріал", "Ціна 1 кв. м.", "Собівартість матеріалів", "СОбівартість коробки","Width","Height","Lenght"};
		for (int i = 0; i < colsCount; ++i) {
			Label^ newLabel = gcnew Label();
			newLabel->Text = msclr::interop::marshal_as<String^>(stringVector[i].c_str());

			newLabel->TextAlign = ContentAlignment::MiddleLeft;

			newLabel->Dock = DockStyle::Fill;
			newLabel->Padding = System::Windows::Forms::Padding(1);

			CBoxTableLayoutPanel_1->Controls->Add(newLabel, i, 0);
		}
		CBoxTableLayoutPanel_1->CellBorderStyle = TableLayoutPanelCellBorderStyle::Single;
	}
		   ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



		   //Функція для сокртування нашого вектора об'єктів за значенням ціна за 1 кв.м.
		   ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	private: void sortVectorByPrice(std::vector<CBox>& boxes)

	{    
		if (boxes.empty())
		{
			MessageBox::Show("Масив не має елементів для сортування", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		int n = boxes.size();

		for (int i = 0; i < n - 1; ++i)
		{
			int minIndex = i;

			for (int j = i + 1; j < n; ++j)
			{
				// Порівнюємо за ціною за квадратний метр
				if (boxes[j].Get_dPriceForOneSquareMeter() < boxes[minIndex].Get_dPriceForOneSquareMeter())
				{
					minIndex = j;
				}
			}

			// Міняємо місцями елементи
			std::swap(boxes[i], boxes[minIndex]);
		}
	}
		   ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



		   //Функція для зчитування з файлу
		   ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	private: vector<CBox> boxArrInit() {
		try {
			openFileDialog1->InitialDirectory = "D:\\Polytech\\Coursache\\Coursache";
			openFileDialog1->Filter = "Text files (*.txt)|*.txt|All files (*.*)|*.*";
			if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				// Конвертуємо String^ у std::string
				msclr::interop::marshal_context context;
				std::string fileName = context.marshal_as<std::string>(openFileDialog1->FileName);

				std::ifstream inputFile(fileName);
	
				if (!inputFile.is_open()) {
					String^ errorMsg = gcnew String(L"Не вдалося відкрити файл boxes.txt");
					MessageBox::Show(errorMsg, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return boxes; // Повертаємо з функції, оскільки не вдалося відкрити файл
				}

				CBox box;
				while (inputFile >> box) {
					box.CalculatedMaterialPrice();
					box.CalculatedBoxPrice();
					boxes.push_back(box);
				}

				inputFile.close(); // Закриваємо файл після зчитування
			}
			return boxes;
		}
		catch (SystemException^ error) {
			MessageBox::Show(error->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

	}
		   ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

 private: vector<CBox> boxArrInitA() {
	 try {
		 // Задайте шлях до вашого файлу тут
		 std::string filePath = "Boxes.txt";

		 std::ifstream inputFile(filePath);
		 if (!inputFile.is_open()) {
			 String^ errorMsg = gcnew String(L"Не вдалося відкрити файл " + gcnew String(filePath.c_str()));
			 MessageBox::Show(errorMsg, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			 return boxes;
		 }

		 CBox box;
		 while (inputFile >> box) {
			 box.CalculatedMaterialPrice();
			 box.CalculatedBoxPrice();
			 boxes.push_back(box);
		 }

		 inputFile.close(); // Закриваємо файл після зчитування
		 return boxes;
	 }
	 catch (SystemException^ error) {
		 MessageBox::Show(error->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		 return boxes;
	 }

		   }

		   //Глобальні змінні
		   ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		   int size = 0;
		   double SMonthMoney = 0;
		   ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



		   //Функція для розрахунку  сумарного місячного доходу
		   ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	private: double CalculateSMonthMoney(string material, double size, double price, int number)
	{
		try {
			double sum = 0;
			for (int i = 0; i < number; i++)
			{
				sum += size * price;
			}
			return sum;
		}
		catch (SystemException^ error) {
			MessageBox::Show(error->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
		   ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



		   //Функція для розрахування витрат на комунальні послуги
		   ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	private: double CalculateKomunalV()
	{
		try {
			if (boxes.size() != 0) {
				return SMonthMoney * 0.02 * boxes.size();
			}
			else
			{
				return SMonthMoney * 0.8;
			}
		}
		catch (SystemException^ error) {
			MessageBox::Show(error->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
		   ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



		  //Функція для розрахування витрат на зарплату
		  ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	private: double CalculateSalaryV()
	{
		if (boxes.size() != 0) {
			return SMonthMoney * 0.05 * boxes.size();
		}
		else
		{
			return SMonthMoney * 0.10;
		}
	}



	private: double CalculatePodatkuV()
	{
		return SMonthMoney * 0.13;
	}
		   ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////	


		   //Функція для розрахування витрат на податки
		   ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		  private: double PodatkuV;
	private: System::Void CalculatePodatku_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			if (SMonthMoney != 0) {
				 PodatkuV = CalculatePodatkuV();
				String^ resultPodatkuV = "" + PodatkuV;
				labelPodatku->Text = resultPodatkuV;
			}
			else
			{
				MessageBox::Show("Будь ласка, розрахуйте сумарний місячний дохід  перед розрахунком податку.");
			}
		}
		catch (SystemException^ error) {
			MessageBox::Show(error->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
		   ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



		   //Кнопка для розрахування витрат на зарплату
		   ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		   private: double SalaryV;
	private: System::Void CalculateSalary_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			if (SMonthMoney != 0) {
				 SalaryV = CalculateSalaryV();
				String^ resultSalaryV = "" + SalaryV;
				labelSalary->Text = resultSalaryV;
			}
			else
			{
				MessageBox::Show("Будь ласка, розрахуйте сумарний місячний дохід  перед розрахунком зарплатні.");
			}
		}
		catch (SystemException^ error) {
			MessageBox::Show(error->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
		   ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



		  //Кнопка для розрахування витрат на комунальні послуги
		  ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		   private:double KomunalV;
	private: System::Void CalculateKomunal_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			if (SMonthMoney != 0) {
			    KomunalV = CalculateKomunalV();
				String^ resultKomunalV = "" + KomunalV;
				labelKomunal->Text = resultKomunalV;
			}
			else
			{
				MessageBox::Show("Будь ласка, розрахуйте сумарний місячний дохід  перед розрахунком комунальних послуг.");
			}
		}
		catch (SystemException^ error) {
			MessageBox::Show(error->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
		   ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



		   //Кнопка для розрахування сумарного місячного доходу
		   ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	private: System::Void SummaryMonthMoney_Click_1(System::Object^ sender, System::EventArgs^ e) {
		try {
			System::String^ textBoxSize = Height->Text;
			std::string stringValueA = msclr::interop::marshal_as<std::string>(textBoxSize);
			double size = std::stod(stringValueA);

			System::String^ textBoxPrice = length->Text;
			std::string stringValueD = msclr::interop::marshal_as<std::string>(textBoxPrice);
			double price = std::stod(stringValueD);

			System::String^ textBoxNumber = Width->Text;
			std::string stringValueE = msclr::interop::marshal_as<std::string>(textBoxNumber);
			double number = std::stoi(stringValueE);

			System::String^ textBoxValue = Material->Text;
			std::string material = msclr::interop::marshal_as<std::string>(textBoxValue);
			if (std::any_of(material.begin(), material.end(), ::isdigit)) {
				// Якщо рядок містить цифри, вивести повідомлення
				MessageBox::Show("Помилка: Назва не може містити цифри. Введіть коректну назву.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else
			{


				SMonthMoney = CalculateSMonthMoney(material, size, price, number);
				String^ resultMonthMoney = "" + SMonthMoney;
				labebMonthS->Text = resultMonthMoney;
			}
		}
		catch (SystemException^ error) {
			MessageBox::Show("Введіть коректне значення", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
		   ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


		   //Функція виводу елементів в таблицю, з урахуванням в якому стані таблиця
		   ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	private: void Show()
	{
		if (CBoxTableLayoutPanel_1->RowCount == 1) {
			addNewRow(boxes);
		}
		else if (CBoxTableLayoutPanel_1->RowCount == 0)
		{
			HeadOfTable();
			addNewRow(boxes);
		}
		else
		{
			CBoxTableLayoutPanel_1->Controls->Clear();
			CBoxTableLayoutPanel_1->RowCount = 1;
			HeadOfTable();
			addNewRow(boxes);
		}
	}
		   ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



		   //Кнопка для виводу даних у таблицю
		   ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	private: System::Void ReadANdShowBoxes_Click(System::Object^ sender, System::EventArgs^ e) {
		Show();
	}
		   ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


		   //Функція дял встановлення Label
		   ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	private: void setLabelElem(Label^ elem) {
		elem->TextAlign = ContentAlignment::MiddleLeft;
		elem->Dock = DockStyle::Fill;
		elem->Padding = System::Windows::Forms::Padding(2);
	}
		   ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


	private:  int colsCount = 8;

		   //Функція для виводу всіх даних у таблицю
		   ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	private: void addNewRow(vector<CBox> boxs) {
		try {
			for (const CBox& box : boxs) {
				std::setlocale(LC_ALL, "uk_UA.UTF-8");
				Label^ numberOfBox = gcnew Label();
				numberOfBox->Text = CBoxTableLayoutPanel_1->RowCount.ToString();
				setLabelElem(numberOfBox);

				Label^ boxMaterial = gcnew Label();
				boxMaterial->Text = msclr::interop::marshal_as<String^>(box.Get_sMaterial().c_str());
				setLabelElem(boxMaterial);

				Label^ boxPriceForOneSquareMeter = gcnew Label();
				boxPriceForOneSquareMeter->Text = box.Get_dPriceForOneSquareMeter().ToString();
				setLabelElem(boxPriceForOneSquareMeter);

				Label^ boxMaterialPrice = gcnew Label();
				boxMaterialPrice->Text = box.Get_dMaterialPrice().ToString();
				setLabelElem(boxMaterialPrice);

				Label^ boxBoxPrice = gcnew Label();
				boxBoxPrice->Text = box.Get_dBoxPrice().ToString();
				setLabelElem(boxBoxPrice);

				Label^ boxBoxWidth = gcnew Label();
				boxBoxWidth->Text = box.Get_dWidth().ToString();
				setLabelElem(boxBoxWidth);

				Label^ boxBoxHeight = gcnew Label();
				boxBoxHeight->Text = box.Get_dHeight().ToString();
				setLabelElem(boxBoxHeight);

				Label^ boxBoxLenght = gcnew Label();
				boxBoxLenght->Text = box.Get_dLength().ToString();
				setLabelElem(boxBoxLenght);

				CBoxTableLayoutPanel_1->RowStyles->Add(gcnew RowStyle(SizeType::Absolute, 30));
				CBoxTableLayoutPanel_1->Controls->Add(numberOfBox, 0, CBoxTableLayoutPanel_1->RowCount);
				CBoxTableLayoutPanel_1->Controls->Add(boxMaterial, 1, CBoxTableLayoutPanel_1->RowCount);
				CBoxTableLayoutPanel_1->Controls->Add(boxPriceForOneSquareMeter, 2, CBoxTableLayoutPanel_1->RowCount);
				CBoxTableLayoutPanel_1->Controls->Add(boxMaterialPrice, 3, CBoxTableLayoutPanel_1->RowCount);
				CBoxTableLayoutPanel_1->Controls->Add(boxBoxPrice, 4, CBoxTableLayoutPanel_1->RowCount);
				CBoxTableLayoutPanel_1->Controls->Add(boxBoxWidth, 5, CBoxTableLayoutPanel_1->RowCount);
				CBoxTableLayoutPanel_1->Controls->Add(boxBoxHeight, 6, CBoxTableLayoutPanel_1->RowCount);
				CBoxTableLayoutPanel_1->Controls->Add(boxBoxLenght, 7, CBoxTableLayoutPanel_1->RowCount);

				CBoxTableLayoutPanel_1->RowCount++;

				CBoxTableLayoutPanel_1->Height = 30 * CBoxTableLayoutPanel_1->RowCount;
			}
		}
		catch (SystemException^ error) {
			MessageBox::Show(error->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
		   ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


		   //Завантаження голови нашої таблиці
		   ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	private: System::Void MyForm_Load_1(System::Object^ sender, System::EventArgs^ e) {
		ShowBoxes(false);
		HeadOfTable();
		readToolStripMenuItem->ShortcutKeys = static_cast<Keys>(Keys::Control | Keys::R);
		writeToolStripMenuItem->ShortcutKeys = static_cast<Keys>(Keys::Control | Keys::W);
		exitToolStripMenuItem->ShortcutKeys = static_cast<Keys>(Keys::Alt | Keys::F4);
		sortToolStripMenuItem->ShortcutKeys = static_cast<Keys>( Keys::F6);
		summaryMoneyToolStripMenuItem->ShortcutKeys = static_cast<Keys>( Keys::F7);
		podatkiToolStripMenuItem->ShortcutKeys = static_cast<Keys>(Keys::Alt | Keys::F2);
		salaryToolStripMenuItem->ShortcutKeys = static_cast<Keys>( Keys::F8);
		komunalToolStripMenuItem->ShortcutKeys = static_cast<Keys>( Keys::F8);
		showToolStripMenuItem->ShortcutKeys = static_cast<Keys>( Keys::F9);
		addToolStripMenuItem->ShortcutKeys = static_cast<Keys>( Keys::F10);
		deleteToolStripMenuItem->ShortcutKeys = static_cast<Keys>( Keys::F11);
	}


		   //Кнопка запису у файл
		   ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	private: System::Void WriteInFail_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			string filepath = "Output.txt";
			writeVectorToFile(boxes, filepath);
		}
		catch (SystemException^ error) {
			MessageBox::Show(error->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		if (boxes.empty()) {
			MessageBox::Show("Немає даних для запису у файл");
		}
		else {
			MessageBox::Show("Дані успішно записані у файл");
		}
	}
		   ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



		   //Кнопка для сортування таблиці за параметром ціна за 1 кв. м.
		   ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		CBoxTableLayoutPanel_1->Controls->Clear();
		CBoxTableLayoutPanel_1->RowCount = 1;
		sortVectorByPrice(boxes);
		HeadOfTable();
		addNewRow(boxes);
	}
		   ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


		  //кнопка для зчитування даних з файлу і запису їх у вектор
		  ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	private: System::Void ReadVector_Click(System::Object^ sender, System::EventArgs^ e) {

		boxes = boxArrInit();
		if(boxes.empty()){
			MessageBox::Show("Виберіть коректний файл для зчитування");
		}
		else {
			MessageBox::Show("Дані успішно зчитані файлу");
		}

	}
		   ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


		   //Кнопка для додавання нового елементу у кінець списку
		   ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	private: System::Void Add_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			System::String^ textBoxHeight = HeightA->Text;
			std::string stringHeight = msclr::interop::marshal_as<std::string>(textBoxHeight);
			double height = std::stod(stringHeight);

			System::String^ textBoxLength = LengthA->Text;
			std::string stringLenght = msclr::interop::marshal_as<std::string>(textBoxLength);
			double length = std::stod(stringLenght);

			System::String^ textBoxWidth = WidthA->Text;
			std::string stringWidth = msclr::interop::marshal_as<std::string>(textBoxWidth);
			double width = std::stoi(stringWidth);

			System::String^ textBoxPrice = Price->Text;
			std::string stringPrice = msclr::interop::marshal_as<std::string>(textBoxPrice);
			double price = std::stoi(stringPrice);

			System::String^ textBoxMaterial = Materials->Text;
			std::string material = msclr::interop::marshal_as<std::string>(textBoxMaterial);
			if (std::any_of(material.begin(), material.end(), ::isdigit)) {
				// Якщо рядок містить цифри, вивести повідомлення
				MessageBox::Show("Помилка: Назва не може містити цифри. Введіть коректну назву.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else
			{
				CBox myBox = CBox(material, width, length, height, price);
				boxes.push_back(myBox);
				Show();
			}
		}
		catch (SystemException^ error) {
			MessageBox::Show("Write correct value", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
		   ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


		   //Кнопка для видалення елмента за його номером
		   ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	private: System::Void Delete_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			System::String^ textBoxNumber = Number->Text;
			std::string stringNumber = msclr::interop::marshal_as<std::string>(textBoxNumber);
			double number = std::stod(stringNumber);
			if (number <= boxes.size() && number > 0) {
				boxes.erase((boxes.begin() + number) - 1);
				Show();
			}
			else {
				MessageBox::Show("ВВедіть коректний індекс");
			}
		}
		catch (SystemException^ error) {
			MessageBox::Show(error->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
		   ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	private: void ShowBoxes(bool visiable) {
		panel4->Visible = visiable;
		panel3->Visible = visiable;
		panel5->Visible = visiable;
		panel6->Visible = visiable;
		panel7->Visible = visiable;
		panel8->Visible = visiable;


	}
	private: System::Void BoxPicture_Click(System::Object^ sender, System::EventArgs^ e) {
		ShowBoxes(true);
	}
private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void readToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	boxes = boxArrInit();
	MessageBox::Show("Дані успішно зчитані файлу");
}
private: System::Void writeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		string filepath = "Output.txt";
		writeVectorToFile(boxes, filepath);
	}
	catch (SystemException^ error) {
		MessageBox::Show(error->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	MessageBox::Show("Дані успішно записані у файл");
}
private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void sortToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	button1_Click(sender,e);
}
private: System::Void showToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	ReadANdShowBoxes_Click(sender, e);
}
private: System::Void summaryMoneyToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	SummaryMonthMoney_Click_1(sender, e);
}
private: System::Void podatkiToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	CalculatePodatku_Click(sender, e);
}
private: System::Void salaryToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	CalculateSalary_Click(sender, e);
}
private: System::Void komunalToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	CalculateKomunal_Click(sender, e);
}
private: System::Void addToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Add_Click(sender, e);
}
private: System::Void deleteToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Delete_Click(sender, e);
}
private: System::Void readToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	boxes = boxArrInit();
	MessageBox::Show("Дані успішно зчитані файлу");
}
private: System::Void writeToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		string filepath = "Output.txt";
		writeVectorToFile(boxes, filepath);
	}
	catch (SystemException^ error) {
		MessageBox::Show(error->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	MessageBox::Show("Дані успішно записані у файл");
}
private: System::Void sortToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	button1_Click(sender, e);
}
private: System::Void summaryMoneyToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	SummaryMonthMoney_Click_1(sender, e);
}
private: System::Void podatkiToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	CalculatePodatku_Click(sender, e);
}
private: System::Void salaryToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	CalculateSalary_Click(sender, e);
}
private: System::Void komunalToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	CalculateKomunal_Click(sender, e);
}
private: System::Void showToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	ReadANdShowBoxes_Click(sender, e);
};
private: System::Void addToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	Add_Click(sender, e);
};
private: System::Void deleteToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	Delete_Click(sender, e);
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		string filepath = "Output_Value.txt";
		if (SMonthMoney==0&& KomunalV==0&& PodatkuV==0&& SalaryV==0) {
			MessageBox::Show("Немає даних для запису у файл");
		}
		else {
			writeValueToFile(SMonthMoney, KomunalV, PodatkuV,SalaryV, filepath);
			MessageBox::Show("Дані успішно записані у файл");
		}
	}
	catch (SystemException^ error) {
		MessageBox::Show(error->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	
}
private: System::Void Undo_Click(System::Object^ sender, System::EventArgs^ e) {
	boxes.clear();
	boxes = boxArrInitA();
	Show();
}
};
}