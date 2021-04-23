#include "MyForm.h"
#include <Windows.h>


#include "src/tests/vector_big_structs_test.h"
#include "src/tests/list_big_structs_test.h"

#include "src/tests/vector_iteration_test.h"
#include "src/tests/list_iteration_test.h"

#include "src/tests_ranger.h"
#include "src/chart_manager.h"


using namespace kursOOP;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm);
	return 0;
}

chart_manager CM = chart_manager();

System::Void MyForm::MyForm_Load(System::Object^ sender, System::EventArgs^ e) 
{       
	DH.set_new_target_listbox(listBox1);
	CM.set_chart(chart1);
	upd_console();
}

System::Void MyForm::btn_test_pushback(System::Object^ sender, System::EventArgs^ e) {
	int amount_min = DecToInt(numericUpDown1->Value);
	int amount_max = DecToInt(numericUpDown3->Value);
	int number_of_tests = DecToInt(numericUpDown2->Value);
	bool reserve = vec_reserve_checkbox->Checked;

	DH.msg("");
	DH.msg("fill test initialized ( push_back() )");
	DH.msg("$amount_min = " + s(amount_min));
	DH.msg("$amount_max = " + s(amount_max));
	DH.msg("$number_of_tests = " + s(number_of_tests));

	if (amount_max < amount_min) show_messagebox_on_input_error();
	else {
		tests_ranger TR = tests_ranger();

		vector_big_structs_test vbst = vector_big_structs_test(100000, 0, "back");
		vbst.set_reserve(reserve);
		TR.run(vbst, number_of_tests, amount_min, amount_max);
		GL_POINTS_VECTOR = TR.get_result_array();
		CM.draw("vector time", TR.get_result_array());

		list_big_structs_test lbst = list_big_structs_test(100000, 0, "back");
		TR.run(lbst, number_of_tests, amount_min, amount_max);
		GL_POINTS_LIST = TR.get_result_array();
		CM.draw("list time", TR.get_result_array());
		update_data();
	}
};


System::Void MyForm::button5_Click(System::Object^ sender, System::EventArgs^ e) 
{
	int amount_min = DecToInt(sort_start_value->Value);
	int amount_max = DecToInt(sort_stop_value->Value);
	int number_of_tests = DecToInt(sort_test_amount->Value);
	int additional_load = DecToInt(numericUpDown_load->Value);
	bool reserve = checkbox_vector2_reserve->Checked;

	DH.msg("");
	DH.msg("big structs fill test initialized");
	DH.msg("$amount_min = " + s(amount_min));
	DH.msg("$amount_max = " + s(amount_max));
	DH.msg("$number_of_tests = " + s(number_of_tests));


	if (amount_max < amount_min) show_messagebox_on_input_error();
	else {
		tests_ranger TR = tests_ranger();
		
		vector_big_structs_test vbst = vector_big_structs_test(100000, additional_load, "front");
		vbst.set_reserve(reserve);
		TR.run(vbst, number_of_tests, amount_min, amount_max);
		GL_POINTS_VECTOR = TR.get_result_array();
		CM.draw("vector time", TR.get_result_array());

		list_big_structs_test lbst = list_big_structs_test(100000, additional_load, "front");
		TR.run(lbst, number_of_tests, amount_min, amount_max);
		GL_POINTS_LIST = TR.get_result_array();
		CM.draw("list time", TR.get_result_array());

		update_data();
	}
}


System::Void MyForm::button6_Click(System::Object^ sender, System::EventArgs^ e)
{
	int amount_min = DecToInt(numeric_iters_from->Value);
	int amount_max = DecToInt(numeric_iters_to->Value);
	int element_weight = DecToInt(numeric_iter_weight->Value);
	int number_of_tests = DecToInt(numeric_test_amount->Value);
	bool random_potision = checkbox_iter_randpos->Checked;
	//number_of_tests -= 1;

	DH.msg("#big structs iteration test initialized");
	DH.msg("$amount_min = " + s(amount_min));
	DH.msg("$amount_max = " + s(amount_max));
	DH.msg("$number_of_tests = " + s(number_of_tests));


	if (amount_max < amount_min) show_messagebox_on_input_error();
	else {

		tests_ranger TR = tests_ranger();

		vector_iteration_test vit = vector_iteration_test(1000, element_weight, 10);
		vit.set_randpos(random_potision);
		TR.run(vit, number_of_tests, amount_min, amount_max);
		GL_POINTS_VECTOR = TR.get_result_array();
		CM.draw("vector time", TR.get_result_array());

		list_iteration_test lit = list_iteration_test(1000, element_weight, 10);
		lit.set_randpos(random_potision);
		TR.run(lit, number_of_tests, amount_min, amount_max);
		GL_POINTS_LIST = TR.get_result_array();
		CM.draw("list time", TR.get_result_array());

		update_data();
	}
}