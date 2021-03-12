#pragma once
#include "time.h"
#include <chrono>
#include <list>
#include "tests.h"
#include "converters.h"
#include "rand_gen.h"
#include <algorithm>

std::vector<int> GL_VECTOR;
std::list<int> GL_LIST;

bool GL_SHOW_FULL_ARRAYS;
size_t GL_SHOWN_LENGTH = 30;

size_t GL_RAND_MAX = 1000;
size_t GL_RAND_MIN = 0;

std::vector<size_t> GL_POINTS_LIST;
std::vector<size_t> GL_POINTS_VECTOR;
size_t GL_MAX_HEIGHT;

namespace kursOOP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
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
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ListBox^ listBox1;

	private: System::Windows::Forms::Panel^ panel1;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::ListBox^ list_listbox;


	private: System::Windows::Forms::ListBox^ vector_listbox;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::NumericUpDown^ array_size_numeric;
	private: System::Windows::Forms::TabControl^ graph;

	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Panel^ panel6;

	private: System::Windows::Forms::PictureBox^ picture_box_graph;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::CheckBox^ vec_reserve_checkbox;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Panel^ panel10;
	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::NumericUpDown^ sort_stop_value;


	private: System::Windows::Forms::NumericUpDown^ sort_start_value;

	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::NumericUpDown^ sort_test_amount;
	private: System::Windows::Forms::CheckBox^ sort_reverse_checkbox;
	private: System::Windows::Forms::Label^ label15;








	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->vec_reserve_checkbox = (gcnew System::Windows::Forms::CheckBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->list_listbox = (gcnew System::Windows::Forms::ListBox());
			this->vector_listbox = (gcnew System::Windows::Forms::ListBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->array_size_numeric = (gcnew System::Windows::Forms::NumericUpDown());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->graph = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->picture_box_graph = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->sort_reverse_checkbox = (gcnew System::Windows::Forms::CheckBox());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->sort_test_amount = (gcnew System::Windows::Forms::NumericUpDown());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->sort_stop_value = (gcnew System::Windows::Forms::NumericUpDown());
			this->sort_start_value = (gcnew System::Windows::Forms::NumericUpDown());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->panel2->SuspendLayout();
			this->panel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->array_size_numeric))->BeginInit();
			this->graph->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picture_box_graph))->BeginInit();
			this->tabPage2->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel10->SuspendLayout();
			this->panel9->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sort_test_amount))->BeginInit();
			this->panel8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sort_stop_value))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sort_start_value))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(6, 94);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(324, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"start";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::SystemColors::WindowText;
			this->listBox1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(3, 3);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(579, 433);
			this->listBox1->TabIndex = 1;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::Control;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Location = System::Drawing::Point(12, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(337, 126);
			this->panel1->TabIndex = 3;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(130, 1);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(67, 13);
			this->label4->TabIndex = 4;
			this->label4->Text = L"заполнение";
			// 
			// panel4
			// 
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel4->Controls->Add(this->numericUpDown2);
			this->panel4->Controls->Add(this->label3);
			this->panel4->Location = System::Drawing::Point(227, 17);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(103, 71);
			this->panel4->TabIndex = 10;
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(3, 26);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 20, 0, 0, 0 });
			this->numericUpDown2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(95, 20);
			this->numericUpDown2->TabIndex = 9;
			this->numericUpDown2->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(29, 49);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(41, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"тестов";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// panel3
			// 
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel3->Controls->Add(this->label8);
			this->panel3->Controls->Add(this->numericUpDown3);
			this->panel3->Controls->Add(this->label2);
			this->panel3->Controls->Add(this->numericUpDown1);
			this->panel3->Controls->Add(this->label1);
			this->panel3->Location = System::Drawing::Point(118, 17);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(103, 71);
			this->panel3->TabIndex = 7;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(16, 49);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(62, 13);
			this->label8->TabIndex = 7;
			this->label8->Text = L"элементов";
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Location = System::Drawing::Point(23, 26);
			this->numericUpDown3->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 99999999, 0, 0, 0 });
			this->numericUpDown3->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, 0 });
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(75, 20);
			this->numericUpDown3->TabIndex = 6;
			this->numericUpDown3->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000, 0, 0, 0 });
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(2, 28);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(19, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"до";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(23, 5);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 9999999, 0, 0, 0 });
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(75, 20);
			this->numericUpDown1->TabIndex = 3;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(3, 7);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(18, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"от";
			// 
			// panel2
			// 
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Controls->Add(this->label10);
			this->panel2->Controls->Add(this->vec_reserve_checkbox);
			this->panel2->Location = System::Drawing::Point(6, 17);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(106, 71);
			this->panel2->TabIndex = 6;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(7, 49);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(90, 13);
			this->label10->TabIndex = 1;
			this->label10->Text = L"дополнительное";
			// 
			// vec_reserve_checkbox
			// 
			this->vec_reserve_checkbox->AutoSize = true;
			this->vec_reserve_checkbox->Location = System::Drawing::Point(3, 2);
			this->vec_reserve_checkbox->Name = L"vec_reserve_checkbox";
			this->vec_reserve_checkbox->Size = System::Drawing::Size(94, 17);
			this->vec_reserve_checkbox->TabIndex = 0;
			this->vec_reserve_checkbox->Text = L"vector reserve";
			this->vec_reserve_checkbox->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(3, 442);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(109, 23);
			this->button2->TabIndex = 4;
			this->button2->Text = L"clear";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// list_listbox
			// 
			this->list_listbox->FormattingEnabled = true;
			this->list_listbox->Location = System::Drawing::Point(118, 16);
			this->list_listbox->Name = L"list_listbox";
			this->list_listbox->Size = System::Drawing::Size(96, 394);
			this->list_listbox->TabIndex = 6;
			// 
			// vector_listbox
			// 
			this->vector_listbox->FormattingEnabled = true;
			this->vector_listbox->Location = System::Drawing::Point(11, 16);
			this->vector_listbox->Name = L"vector_listbox";
			this->vector_listbox->Size = System::Drawing::Size(96, 394);
			this->vector_listbox->TabIndex = 7;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(8, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(38, 13);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Vector";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(115, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(23, 13);
			this->label6->TabIndex = 9;
			this->label6->Text = L"List";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(11, 482);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(133, 17);
			this->checkBox1->TabIndex = 10;
			this->checkBox1->Text = L"выводить полностью";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(11, 416);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(96, 23);
			this->button3->TabIndex = 11;
			this->button3->Text = L"generate";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// panel5
			// 
			this->panel5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel5->Controls->Add(this->label7);
			this->panel5->Controls->Add(this->array_size_numeric);
			this->panel5->Controls->Add(this->button4);
			this->panel5->Controls->Add(this->label5);
			this->panel5->Controls->Add(this->checkBox1);
			this->panel5->Controls->Add(this->button3);
			this->panel5->Controls->Add(this->vector_listbox);
			this->panel5->Controls->Add(this->label6);
			this->panel5->Controls->Add(this->list_listbox);
			this->panel5->Location = System::Drawing::Point(978, 6);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(228, 507);
			this->panel5->TabIndex = 12;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(9, 442);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(132, 13);
			this->label7->TabIndex = 14;
			this->label7->Text = L"колличество элементов:";
			// 
			// array_size_numeric
			// 
			this->array_size_numeric->Location = System::Drawing::Point(11, 458);
			this->array_size_numeric->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000000, 0, 0, 0 });
			this->array_size_numeric->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, 0 });
			this->array_size_numeric->Name = L"array_size_numeric";
			this->array_size_numeric->Size = System::Drawing::Size(203, 20);
			this->array_size_numeric->TabIndex = 13;
			this->array_size_numeric->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, 0 });
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(118, 416);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(96, 23);
			this->button4->TabIndex = 12;
			this->button4->Text = L"generate";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// graph
			// 
			this->graph->Controls->Add(this->tabPage1);
			this->graph->Controls->Add(this->tabPage2);
			this->graph->Location = System::Drawing::Point(3, 3);
			this->graph->Name = L"graph";
			this->graph->SelectedIndex = 0;
			this->graph->Size = System::Drawing::Size(595, 498);
			this->graph->TabIndex = 13;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->picture_box_graph);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(587, 472);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"график";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// picture_box_graph
			// 
			this->picture_box_graph->Location = System::Drawing::Point(3, 3);
			this->picture_box_graph->Name = L"picture_box_graph";
			this->picture_box_graph->Size = System::Drawing::Size(581, 466);
			this->picture_box_graph->TabIndex = 0;
			this->picture_box_graph->TabStop = false;
			this->picture_box_graph->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::picture_box_graph_Paint);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Controls->Add(this->listBox1);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(587, 472);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"отладка";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// panel6
			// 
			this->panel6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel6->Controls->Add(this->graph);
			this->panel6->Location = System::Drawing::Point(369, 7);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(603, 506);
			this->panel6->TabIndex = 14;
			// 
			// panel7
			// 
			this->panel7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel7->Controls->Add(this->panel10);
			this->panel7->Controls->Add(this->panel9);
			this->panel7->Controls->Add(this->panel8);
			this->panel7->Controls->Add(this->button5);
			this->panel7->Controls->Add(this->label9);
			this->panel7->Location = System::Drawing::Point(12, 144);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(337, 125);
			this->panel7->TabIndex = 15;
			// 
			// panel10
			// 
			this->panel10->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel10->Controls->Add(this->label15);
			this->panel10->Controls->Add(this->sort_reverse_checkbox);
			this->panel10->Location = System::Drawing::Point(6, 16);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(106, 70);
			this->panel10->TabIndex = 3;
			// 
			// sort_reverse_checkbox
			// 
			this->sort_reverse_checkbox->AutoSize = true;
			this->sort_reverse_checkbox->Location = System::Drawing::Point(3, 3);
			this->sort_reverse_checkbox->Name = L"sort_reverse_checkbox";
			this->sort_reverse_checkbox->Size = System::Drawing::Size(67, 17);
			this->sort_reverse_checkbox->TabIndex = 2;
			this->sort_reverse_checkbox->Text = L"reversed";
			this->sort_reverse_checkbox->UseVisualStyleBackColor = true;
			// 
			// panel9
			// 
			this->panel9->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel9->Controls->Add(this->label14);
			this->panel9->Controls->Add(this->sort_test_amount);
			this->panel9->Location = System::Drawing::Point(227, 16);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(103, 70);
			this->panel9->TabIndex = 3;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(29, 52);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(41, 13);
			this->label14->TabIndex = 11;
			this->label14->Text = L"тестов";
			// 
			// sort_test_amount
			// 
			this->sort_test_amount->Location = System::Drawing::Point(3, 29);
			this->sort_test_amount->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 20, 0, 0, 0 });
			this->sort_test_amount->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			this->sort_test_amount->Name = L"sort_test_amount";
			this->sort_test_amount->Size = System::Drawing::Size(95, 20);
			this->sort_test_amount->TabIndex = 10;
			this->sort_test_amount->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			// 
			// panel8
			// 
			this->panel8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel8->Controls->Add(this->sort_stop_value);
			this->panel8->Controls->Add(this->sort_start_value);
			this->panel8->Controls->Add(this->label13);
			this->panel8->Controls->Add(this->label12);
			this->panel8->Controls->Add(this->label11);
			this->panel8->Location = System::Drawing::Point(118, 16);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(103, 70);
			this->panel8->TabIndex = 2;
			// 
			// sort_stop_value
			// 
			this->sort_stop_value->Location = System::Drawing::Point(23, 29);
			this->sort_stop_value->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 99999999, 0, 0, 0 });
			this->sort_stop_value->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, 0 });
			this->sort_stop_value->Name = L"sort_stop_value";
			this->sort_stop_value->Size = System::Drawing::Size(75, 20);
			this->sort_stop_value->TabIndex = 10;
			this->sort_stop_value->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000, 0, 0, 0 });
			this->sort_stop_value->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown5_ValueChanged);
			// 
			// sort_start_value
			// 
			this->sort_start_value->Location = System::Drawing::Point(23, 7);
			this->sort_start_value->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 9999999, 0, 0, 0 });
			this->sort_start_value->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, 0 });
			this->sort_start_value->Name = L"sort_start_value";
			this->sort_start_value->Size = System::Drawing::Size(75, 20);
			this->sort_start_value->TabIndex = 9;
			this->sort_start_value->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(2, 31);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(19, 13);
			this->label13->TabIndex = 8;
			this->label13->Text = L"до";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(3, 9);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(18, 13);
			this->label12->TabIndex = 5;
			this->label12->Text = L"от";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(20, 52);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(62, 13);
			this->label11->TabIndex = 0;
			this->label11->Text = L"элементов";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(6, 92);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(324, 23);
			this->button5->TabIndex = 1;
			this->button5->Text = L"start";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(130, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(66, 13);
			this->label9->TabIndex = 0;
			this->label9->Text = L"сортировка";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(7, 52);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(90, 13);
			this->label15->TabIndex = 3;
			this->label15->Text = L"дополнительное";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(1218, 545);
			this->Controls->Add(this->panel7);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel1);
			this->Name = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->array_size_numeric))->EndInit();
			this->graph->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picture_box_graph))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->panel6->ResumeLayout(false);
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->panel10->ResumeLayout(false);
			this->panel10->PerformLayout();
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sort_test_amount))->EndInit();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sort_stop_value))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sort_start_value))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion


		void dh(std::string message) { listBox1->Items->Insert(listBox1->Items->Count, cs(message)); }
		void dh(String^ message) { listBox1->Items->Insert(listBox1->Items->Count, message); }
		void dh_clear() { listBox1->Items->Clear(); }


		void update_data() {
			vector_listbox->Items->Clear(); // clearing the elements
			list_listbox->Items->Clear();

			if (GL_SHOW_FULL_ARRAYS) // ensure if we want to see full version (takes longer to render)
			{
				if (GL_VECTOR.size() == 0) vector_listbox->Items->Insert(vector_listbox->Items->Count, "empty");       // for vector full
				else for (auto el : GL_VECTOR)  vector_listbox->Items->Insert(vector_listbox->Items->Count, cs(el));

				if (GL_LIST.size() == 0) list_listbox->Items->Insert(list_listbox->Items->Count, "empty");             // for list full
				else for (auto el : GL_LIST)  list_listbox->Items->Insert(list_listbox->Items->Count, cs(el));
			}
			else // if we using partial representation of arrays
			{
				if (GL_VECTOR.size() == 0) vector_listbox->Items->Insert(vector_listbox->Items->Count, "empty");             // for vector
				else {
					for (size_t i = 0; i < GL_SHOWN_LENGTH - 2; i++)
						vector_listbox->Items->Insert(vector_listbox->Items->Count, cs(s(i) + ": " + s(GL_VECTOR.at(i))));
					vector_listbox->Items->Insert(vector_listbox->Items->Count, "...");
					vector_listbox->Items->Insert(vector_listbox->Items->Count, cs(s(GL_VECTOR.size() - 1) + ": " + s(GL_VECTOR.back())));
				}

				if (GL_LIST.size() == 0) list_listbox->Items->Insert(list_listbox->Items->Count, "empty");             // for list
				else {
					auto it = GL_LIST.begin();
					for (size_t i = 0; i < GL_SHOWN_LENGTH - 2; i++)
						list_listbox->Items->Insert(list_listbox->Items->Count, cs(s(i) + ": " + s(*it++)));
					list_listbox->Items->Insert(list_listbox->Items->Count, "...");
					list_listbox->Items->Insert(list_listbox->Items->Count, cs(s(GL_LIST.size() - 1) + ": " + s(GL_LIST.back())));
				}
			}
			dh("data updated");
		}

		// DRAWING THING

		void set_max_height()
		{
			int option_1 = *std::max_element(GL_POINTS_VECTOR.begin(), GL_POINTS_VECTOR.end());
			int option_2 = *std::max_element(GL_POINTS_LIST.begin(), GL_POINTS_LIST.end());
			if (option_1 >= option_2) GL_MAX_HEIGHT = option_1;
			else GL_MAX_HEIGHT = option_2;
		}

		std::vector<int> get_vertical_coordinates(const std::vector<size_t>& points_array)  // vertical coordinates
		{
			set_max_height();
			std::vector<int> result_array;
			size_t pic_height = picture_box_graph->Height;  // test if convertion is neccessary
			dh(s(pic_height) + " - pic_height");
			float scale_factor = (float)pic_height / GL_MAX_HEIGHT; // get the maximum value to scale factor
			/*for (auto& el : result_array) el = el * scale_factor;*/
			for (size_t i = 0; i < points_array.size(); i++) result_array.push_back(pic_height - (points_array.at(i) * scale_factor));
			return result_array;
		}
		std::vector<int> get_horizontal_coordinates(const std::vector<size_t>& points_array)  // horizontal coordinates
		{
			std::vector<int> result_array;
			/*size_t pic_width = picture_box_graph->Width;*/
			for (size_t i = 0; i < points_array.size(); i++) result_array.push_back(picture_box_graph->Width / points_array.size() * i + 1);
			return result_array;
		}

		size_t adjust_coords(int coord, int max, int correction)
		{
			if (coord + correction >= max) return coord - correction;
			if (coord - correction <= 0) return coord + correction;
			return coord;
		}






		// FILL TEST
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int amount_min = DecToInt(numericUpDown1->Value);
		int amount_max = DecToInt(numericUpDown3->Value);
		int number_of_tests = DecToInt(numericUpDown2->Value);
		number_of_tests -= 1;
		// место дл€ проверок
		GL_POINTS_VECTOR.resize(0);

		for (size_t i = 0; i < number_of_tests + 1; i++)
		{
			GL_VECTOR.resize(0);
			int amount = amount_min + (amount_max - amount_min) / number_of_tests * i;
			if (vec_reserve_checkbox->Checked) GL_POINTS_VECTOR.reserve(amount);
			int res = timed_tests::fill(GL_VECTOR, (amount_max - amount_min) / number_of_tests * i);
			GL_POINTS_VECTOR.push_back(res);
		}
		GL_POINTS_LIST.resize(0);
		for (size_t i = 0; i < number_of_tests + 1; i++)
		{
			GL_LIST.resize(0);
			int amount = amount_min + (amount_max - amount_min) / number_of_tests * i;
			int res = timed_tests::fill(GL_LIST, (amount_max - amount_min) / number_of_tests * i);
			GL_POINTS_LIST.push_back(res);
		}

		graph_refresh();
		update_data();
	};


	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		dh_clear();
	}

	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		GL_SHOW_FULL_ARRAYS = checkBox1->Checked;
		dh("show full arrays = " + s(GL_SHOW_FULL_ARRAYS));
	}


	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {         // FILLING THE ARRAY
		GL_VECTOR.resize(DecToInt(array_size_numeric->Value));
		rnd::fill_random_integers(GL_VECTOR.begin(), GL_VECTOR.end(), GL_RAND_MIN, GL_RAND_MAX);
		update_data();
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		GL_LIST.resize(DecToInt(array_size_numeric->Value));
		rnd::fill_random_integers(GL_LIST.begin(), GL_LIST.end(), GL_RAND_MIN, GL_RAND_MAX);
		update_data();
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {               // ONLOAD
	}


	private: System::Void picture_box_graph_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e)
	{
		size_t pic_height = picture_box_graph->Height;
		size_t pic_width = picture_box_graph->Width;

		Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 8.25, FontStyle::Regular);
		if (GL_POINTS_VECTOR.size() != 0)
		{
			std::vector<int> vertical = get_vertical_coordinates(GL_POINTS_VECTOR);
			std::vector<int> horizontal = get_horizontal_coordinates(GL_POINTS_VECTOR);
			e->Graphics->TextRenderingHint = System::Drawing::Text::TextRenderingHint::AntiAlias;
			Brush^ brush = gcnew SolidBrush(Color::Black); // text
			Pen^ pen = gcnew Pen(Color::Black);
			pen->Width = 2;

			e->Graphics->DrawString(cs(s(GL_POINTS_VECTOR.at(0)) + "ms"), Font, brush, adjust_coords(horizontal.at(0) - 10, pic_width, 10), adjust_coords(vertical.at(0) + 10, pic_height, 30));
			for (size_t i = 0; i < GL_POINTS_VECTOR.size() - 1; i++)
			{
				e->Graphics->DrawLine(pen, horizontal.at(i), vertical.at(i), horizontal.at(i + 1), vertical.at(i + 1));
				e->Graphics->DrawString(cs(s(GL_POINTS_VECTOR.at(i + 1)) + "ms"), Font, brush, adjust_coords(horizontal.at(i + 1) - 10, pic_width, 10), adjust_coords(vertical.at(i + 1) + 10, pic_height, 10));
			}
			e->Graphics->DrawString(cs(s("VECTOR")), Font, brush, 0, 20);
		}

		if (GL_POINTS_LIST.size() != 0)
		{
			std::vector<int> vertical = get_vertical_coordinates(GL_POINTS_LIST);
			std::vector<int> horizontal = get_horizontal_coordinates(GL_POINTS_LIST);
			e->Graphics->TextRenderingHint = System::Drawing::Text::TextRenderingHint::AntiAlias;
			Brush^ brush = gcnew SolidBrush(Color::Red); // text
			Pen^ pen = gcnew Pen(Color::Red);
			pen->Width = 2;

			e->Graphics->DrawString(cs(s(GL_POINTS_LIST.at(0)) + "ms"), Font, brush, adjust_coords(horizontal.at(0) + 10, pic_width, 10), adjust_coords(vertical.at(0), pic_height, 20));
			for (size_t i = 0; i < GL_POINTS_LIST.size() - 1; i++)
			{
				e->Graphics->DrawLine(pen, horizontal.at(i), vertical.at(i), horizontal.at(i + 1), vertical.at(i + 1));
				e->Graphics->DrawString(cs(s(GL_POINTS_LIST.at(i + 1)) + "ms"), Font, brush, adjust_coords(horizontal.at(i + 1), pic_width, 10), adjust_coords(vertical.at(i + 1) + 10, pic_height, 5));
			}

			e->Graphics->DrawString(cs(s("LIST")), Font, brush, 0, 0);
		}
	}
	void graph_refresh()     // make live easier
	{
		picture_box_graph->Refresh();
	}

private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {  // hz zachem
}
private: System::Void numericUpDown5_ValueChanged(System::Object^ sender, System::EventArgs^ e) { // hz zachem
}


	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e)            // —ќ–“»–ќ¬ ј 
	{       
		int amount_min = DecToInt(sort_start_value->Value);
		int amount_max = DecToInt(sort_stop_value->Value);
		int number_of_tests = DecToInt(sort_test_amount->Value);
		number_of_tests -= 1;
		bool reverse = false;
		// место дл€ проверок
		GL_POINTS_VECTOR.resize(0);

		if (vec_reserve_checkbox->Checked) reverse = true;

		for (size_t i = 0; i < number_of_tests + 1; i++)
		{
			GL_VECTOR.resize(0);
			int amount = amount_min + (amount_max - amount_min) / number_of_tests * i;
			rnd::fill_random_integers(GL_VECTOR, amount);
			int res = timed_tests::sorting(GL_VECTOR, reverse);
			GL_POINTS_VECTOR.push_back(res);
		}
		GL_POINTS_LIST.resize(0);

		for (size_t i = 0; i < number_of_tests + 1; i++)
		{
			GL_LIST.resize(0);
			int amount = amount_min + (amount_max - amount_min) / number_of_tests * i;
			rnd::fill_random_integers(GL_VECTOR, amount);
			//int res = timed_tests::sorting(GL_LIST, reverse);
			GL_POINTS_LIST.push_back(0);
		}
		graph_refresh();
		update_data();
		}
};
};

template<typename T>
int TimeFunction(T f(int), int iters)
{
	auto begin = std::chrono::steady_clock::now();
	f(iters);
	auto end = std::chrono::steady_clock::now();
	auto elapsed_ms = std::chrono::duration_cast<std::chrono::milliseconds>(end - begin);
	return elapsed_ms.count();
}
