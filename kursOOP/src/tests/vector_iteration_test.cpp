#include "vector_iteration_test.h"


vector_iteration_test::vector_iteration_test(size_t _amount, size_t _additional_load, size_t _iterations_amount)
{
	set_amount(_amount);
	additional_load = _additional_load;
	iterations_amount = _iterations_amount;
}

void vector_iteration_test::set_rangable(size_t _rangable)
{
	iterations_amount = _rangable;
}


void vector_iteration_test::run()
{
	std::vector<variable_size_struct> test_target;  // тестируемый вектор
	variable_size_struct test_struct = variable_size_struct(additional_load); // структура, которая будет добавляться в вектор

	for (int i = 0; i < amount; i++) test_target.push_back(test_struct);


	timer_begin();  // TEST START
	for (size_t i = 0; i < iterations_amount; i++)
	{
		for (auto element : test_target);
	}
	timer_end();    // TEST END
}
