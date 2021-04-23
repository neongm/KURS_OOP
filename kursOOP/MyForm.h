#pragma once
//#include "time.h"
#include <chrono>
#include <list>
#include <algorithm>


// mu stuff
#include "src/converters.h"
#include "src/rand_gen.h"
#include "src/debug_handler.h"



debug_handler DH = debug_handler();

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
			//с TODO: добавьте код конструктора
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


	private: System::Windows::Forms::Panel^ panel5;



	private: System::Windows::Forms::TabControl^ graph;

	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Panel^ panel6;


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

	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown_load;

	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::CheckBox^ checkbox_vector2_reserve;
	private: System::Windows::Forms::Panel^ panel11;
	private: System::Windows::Forms::Panel^ panel12;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::NumericUpDown^ numeric_iter_weight;


	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Panel^ panel13;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::NumericUpDown^ numeric_test_amount;

	private: System::Windows::Forms::Panel^ panel14;
	private: System::Windows::Forms::NumericUpDown^ numeric_iters_to;


	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Button^ test_iteration_run;

	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::NumericUpDown^ numeric_iters_from;
private: System::Windows::Forms::CheckBox^ checkBox3;
private: System::Windows::Forms::CheckBox^ checkBox2;
private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
private: System::Windows::Forms::CheckBox^ checkbox_iter_randpos;








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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
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
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->graph = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->checkbox_vector2_reserve = (gcnew System::Windows::Forms::CheckBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown_load = (gcnew System::Windows::Forms::NumericUpDown());
			this->label15 = (gcnew System::Windows::Forms::Label());
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
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->numeric_iter_weight = (gcnew System::Windows::Forms::NumericUpDown());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->numeric_test_amount = (gcnew System::Windows::Forms::NumericUpDown());
			this->panel14 = (gcnew System::Windows::Forms::Panel());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->numeric_iters_from = (gcnew System::Windows::Forms::NumericUpDown());
			this->numeric_iters_to = (gcnew System::Windows::Forms::NumericUpDown());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->test_iteration_run = (gcnew System::Windows::Forms::Button());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->checkbox_iter_randpos = (gcnew System::Windows::Forms::CheckBox());
			this->panel1->SuspendLayout();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->panel2->SuspendLayout();
			this->panel5->SuspendLayout();
			this->graph->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->tabPage2->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel10->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_load))->BeginInit();
			this->panel9->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sort_test_amount))->BeginInit();
			this->panel8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sort_stop_value))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sort_start_value))->BeginInit();
			this->panel11->SuspendLayout();
			this->panel12->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_iter_weight))->BeginInit();
			this->panel13->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_test_amount))->BeginInit();
			this->panel14->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_iters_from))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_iters_to))->BeginInit();
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
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::btn_test_pushback);
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
			this->label4->Location = System::Drawing::Point(115, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(100, 13);
			this->label4->TabIndex = 4;
			this->label4->Text = L"заполнение (back)";
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
			this->numericUpDown2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 4, 0, 0, 0 });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(95, 20);
			this->numericUpDown2->TabIndex = 9;
			this->numericUpDown2->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(29, 49);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(41, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"тестов";
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
			this->numericUpDown3->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000000, 0, 0, 0 });
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
			this->list_listbox->Size = System::Drawing::Size(96, 472);
			this->list_listbox->TabIndex = 6;
			// 
			// vector_listbox
			// 
			this->vector_listbox->FormattingEnabled = true;
			this->vector_listbox->Location = System::Drawing::Point(11, 16);
			this->vector_listbox->Name = L"vector_listbox";
			this->vector_listbox->Size = System::Drawing::Size(96, 472);
			this->vector_listbox->TabIndex = 7;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(8, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(82, 13);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Vector time (ms)";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(115, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(67, 13);
			this->label6->TabIndex = 9;
			this->label6->Text = L"List time (ms)";
			// 
			// panel5
			// 
			this->panel5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel5->Controls->Add(this->label5);
			this->panel5->Controls->Add(this->vector_listbox);
			this->panel5->Controls->Add(this->label6);
			this->panel5->Controls->Add(this->list_listbox);
			this->panel5->Location = System::Drawing::Point(978, 6);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(228, 507);
			this->panel5->TabIndex = 12;
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
			this->tabPage1->Controls->Add(this->chart1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(587, 472);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"график";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(3, 6);
			this->chart1->Name = L"chart1";
			series1->BorderWidth = 4;
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series1->Legend = L"Legend1";
			series1->MarkerColor = System::Drawing::Color::Transparent;
			series1->Name = L"vector time";
			series2->BorderWidth = 4;
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series2->Legend = L"Legend1";
			series2->Name = L"list time";
			this->chart1->Series->Add(series1);
			this->chart1->Series->Add(series2);
			this->chart1->Size = System::Drawing::Size(578, 463);
			this->chart1->TabIndex = 1;
			this->chart1->Text = L"chart1";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->checkBox3);
			this->tabPage2->Controls->Add(this->checkBox2);
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
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Checked = true;
			this->checkBox3->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox3->Location = System::Drawing::Point(201, 446);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(62, 17);
			this->checkBox3->TabIndex = 6;
			this->checkBox3->Text = L"prefixes";
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox3_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Checked = true;
			this->checkBox2->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox2->Location = System::Drawing::Point(118, 446);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(76, 17);
			this->checkBox2->TabIndex = 5;
			this->checkBox2->Text = L"debug info";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox2_CheckedChanged);
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
			this->panel10->Controls->Add(this->checkbox_vector2_reserve);
			this->panel10->Controls->Add(this->label17);
			this->panel10->Controls->Add(this->label16);
			this->panel10->Controls->Add(this->numericUpDown_load);
			this->panel10->Controls->Add(this->label15);
			this->panel10->Location = System::Drawing::Point(6, 16);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(106, 70);
			this->panel10->TabIndex = 3;
			// 
			// checkbox_vector2_reserve
			// 
			this->checkbox_vector2_reserve->AutoSize = true;
			this->checkbox_vector2_reserve->Location = System::Drawing::Point(3, 3);
			this->checkbox_vector2_reserve->Name = L"checkbox_vector2_reserve";
			this->checkbox_vector2_reserve->Size = System::Drawing::Size(94, 17);
			this->checkbox_vector2_reserve->TabIndex = 2;
			this->checkbox_vector2_reserve->Text = L"vector reserve";
			this->checkbox_vector2_reserve->UseVisualStyleBackColor = true;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(7, 16);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(80, 13);
			this->label17->TabIndex = 18;
			this->label17->Text = L"вес элемента:";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(4, 4);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(0, 13);
			this->label16->TabIndex = 17;
			// 
			// numericUpDown_load
			// 
			this->numericUpDown_load->Location = System::Drawing::Point(7, 31);
			this->numericUpDown_load->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->numericUpDown_load->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown_load->Name = L"numericUpDown_load";
			this->numericUpDown_load->Size = System::Drawing::Size(77, 20);
			this->numericUpDown_load->TabIndex = 16;
			this->numericUpDown_load->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 500, 0, 0, 0 });
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
			this->sort_test_amount->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 4, 0, 0, 0 });
			this->sort_test_amount->Name = L"sort_test_amount";
			this->sort_test_amount->Size = System::Drawing::Size(95, 20);
			this->sort_test_amount->TabIndex = 10;
			this->sort_test_amount->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
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
			this->sort_stop_value->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 9999, 0, 0, 0 });
			this->sort_stop_value->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->sort_stop_value->Name = L"sort_stop_value";
			this->sort_stop_value->Size = System::Drawing::Size(75, 20);
			this->sort_stop_value->TabIndex = 10;
			this->sort_stop_value->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			// 
			// sort_start_value
			// 
			this->sort_start_value->Location = System::Drawing::Point(23, 7);
			this->sort_start_value->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->sort_start_value->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->sort_start_value->Name = L"sort_start_value";
			this->sort_start_value->Size = System::Drawing::Size(75, 20);
			this->sort_start_value->TabIndex = 9;
			this->sort_start_value->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, 0 });
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
			this->label9->Location = System::Drawing::Point(48, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(220, 13);
			this->label9->TabIndex = 0;
			this->label9->Text = L"заполнение объЄмными объектами (front)";
			// 
			// panel11
			// 
			this->panel11->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel11->Controls->Add(this->panel12);
			this->panel11->Controls->Add(this->panel13);
			this->panel11->Controls->Add(this->panel14);
			this->panel11->Controls->Add(this->test_iteration_run);
			this->panel11->Controls->Add(this->label25);
			this->panel11->Location = System::Drawing::Point(12, 275);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(337, 125);
			this->panel11->TabIndex = 16;
			// 
			// panel12
			// 
			this->panel12->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel12->Controls->Add(this->checkbox_iter_randpos);
			this->panel12->Controls->Add(this->label18);
			this->panel12->Controls->Add(this->label19);
			this->panel12->Controls->Add(this->numeric_iter_weight);
			this->panel12->Controls->Add(this->label20);
			this->panel12->Location = System::Drawing::Point(6, 16);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(106, 70);
			this->panel12->TabIndex = 3;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(4, 14);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(80, 13);
			this->label18->TabIndex = 18;
			this->label18->Text = L"вес элемента:";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(4, 4);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(0, 13);
			this->label19->TabIndex = 17;
			// 
			// numeric_iter_weight
			// 
			this->numeric_iter_weight->Location = System::Drawing::Point(7, 30);
			this->numeric_iter_weight->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->numeric_iter_weight->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numeric_iter_weight->Name = L"numeric_iter_weight";
			this->numeric_iter_weight->Size = System::Drawing::Size(77, 20);
			this->numeric_iter_weight->TabIndex = 16;
			this->numeric_iter_weight->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 500, 0, 0, 0 });
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(7, 52);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(90, 13);
			this->label20->TabIndex = 3;
			this->label20->Text = L"дополнительное";
			// 
			// panel13
			// 
			this->panel13->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel13->Controls->Add(this->label21);
			this->panel13->Controls->Add(this->numeric_test_amount);
			this->panel13->Location = System::Drawing::Point(227, 16);
			this->panel13->Name = L"panel13";
			this->panel13->Size = System::Drawing::Size(103, 70);
			this->panel13->TabIndex = 3;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(29, 52);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(41, 13);
			this->label21->TabIndex = 11;
			this->label21->Text = L"тестов";
			// 
			// numeric_test_amount
			// 
			this->numeric_test_amount->Location = System::Drawing::Point(3, 29);
			this->numeric_test_amount->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 20, 0, 0, 0 });
			this->numeric_test_amount->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 4, 0, 0, 0 });
			this->numeric_test_amount->Name = L"numeric_test_amount";
			this->numeric_test_amount->Size = System::Drawing::Size(95, 20);
			this->numeric_test_amount->TabIndex = 10;
			this->numeric_test_amount->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			// 
			// panel14
			// 
			this->panel14->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel14->Controls->Add(this->label23);
			this->panel14->Controls->Add(this->label22);
			this->panel14->Controls->Add(this->numeric_iters_from);
			this->panel14->Controls->Add(this->numeric_iters_to);
			this->panel14->Controls->Add(this->label24);
			this->panel14->Location = System::Drawing::Point(118, 16);
			this->panel14->Name = L"panel14";
			this->panel14->Size = System::Drawing::Size(103, 70);
			this->panel14->TabIndex = 2;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(2, 31);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(19, 13);
			this->label23->TabIndex = 11;
			this->label23->Text = L"до";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(2, 9);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(18, 13);
			this->label22->TabIndex = 11;
			this->label22->Text = L"от";
			// 
			// numeric_iters_from
			// 
			this->numeric_iters_from->Location = System::Drawing::Point(23, 7);
			this->numeric_iters_from->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 200, 0, 0, 0 });
			this->numeric_iters_from->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numeric_iters_from->Name = L"numeric_iters_from";
			this->numeric_iters_from->Size = System::Drawing::Size(75, 20);
			this->numeric_iters_from->TabIndex = 10;
			this->numeric_iters_from->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			// 
			// numeric_iters_to
			// 
			this->numeric_iters_to->Location = System::Drawing::Point(23, 29);
			this->numeric_iters_to->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->numeric_iters_to->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->numeric_iters_to->Name = L"numeric_iters_to";
			this->numeric_iters_to->Size = System::Drawing::Size(75, 20);
			this->numeric_iters_to->TabIndex = 9;
			this->numeric_iters_to->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 150, 0, 0, 0 });
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(20, 52);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(62, 13);
			this->label24->TabIndex = 0;
			this->label24->Text = L"элементов";
			// 
			// test_iteration_run
			// 
			this->test_iteration_run->Location = System::Drawing::Point(6, 92);
			this->test_iteration_run->Name = L"test_iteration_run";
			this->test_iteration_run->Size = System::Drawing::Size(324, 23);
			this->test_iteration_run->TabIndex = 1;
			this->test_iteration_run->Text = L"start";
			this->test_iteration_run->UseVisualStyleBackColor = true;
			this->test_iteration_run->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(139, 0);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(54, 13);
			this->label25->TabIndex = 0;
			this->label25->Text = L"итераци€";
			// 
			// checkbox_iter_randpos
			// 
			this->checkbox_iter_randpos->AutoSize = true;
			this->checkbox_iter_randpos->Location = System::Drawing::Point(3, 0);
			this->checkbox_iter_randpos->Name = L"checkbox_iter_randpos";
			this->checkbox_iter_randpos->Size = System::Drawing::Size(100, 17);
			this->checkbox_iter_randpos->TabIndex = 19;
			this->checkbox_iter_randpos->Text = L"random position";
			this->checkbox_iter_randpos->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(1218, 545);
			this->Controls->Add(this->panel11);
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
			this->graph->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->panel10->ResumeLayout(false);
			this->panel10->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_load))->EndInit();
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sort_test_amount))->EndInit();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sort_stop_value))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sort_start_value))->EndInit();
			this->panel11->ResumeLayout(false);
			this->panel11->PerformLayout();
			this->panel12->ResumeLayout(false);
			this->panel12->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_iter_weight))->EndInit();
			this->panel13->ResumeLayout(false);
			this->panel13->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_test_amount))->EndInit();
			this->panel14->ResumeLayout(false);
			this->panel14->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_iters_from))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_iters_to))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	void update_data() {
		vector_listbox->Items->Clear(); // clearing the elements
		list_listbox->Items->Clear();

		if (GL_POINTS_VECTOR.size() == 0) vector_listbox->Items->Insert(vector_listbox->Items->Count, "nothing to show"); 
		else for (auto el : GL_POINTS_VECTOR)  vector_listbox->Items->Insert(vector_listbox->Items->Count, cs(el));

		if (GL_POINTS_LIST.size() == 0) list_listbox->Items->Insert(list_listbox->Items->Count, "nothing to show");         
		else for (auto el : GL_POINTS_LIST)  list_listbox->Items->Insert(list_listbox->Items->Count, cs(el));

		DH.msg("#data updated");
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		DH.clear();
	}

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e); // ONLOAD

	private: System::Void btn_test_pushback(System::Object^ sender, System::EventArgs^ e); // back small structs

	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e); // front big structs

	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e); // iteration test



	void show_messagebox_on_input_error() 
	{
		MessageBox::Show("ошибка ввода", "некоторые данные введены некорректно", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
	private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		upd_console();
	}
	private: System::Void checkBox3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		upd_console();
	}

	void upd_console() {
		DH.debug(checkBox2->Checked);
		DH.prefixes(checkBox3->Checked);
	}
};
};
