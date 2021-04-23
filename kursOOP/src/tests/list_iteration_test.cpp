#include "list_iteration_test.h"


list_iteration_test::list_iteration_test(size_t _amount, size_t _additional_load, size_t _iterations_amount)
{
	set_amount(_amount);
	additional_load = _additional_load;
	iterations_amount = _iterations_amount;
}

void list_iteration_test::set_rangable(size_t _rangable)
{
	iterations_amount = _rangable;
}

void list_iteration_test::set_randpos(bool _is_on)
{
	randpos = _is_on;
}


variable_size_struct list_iteration_test::get_value_at(const std::list<variable_size_struct>& target_struct, size_t pos)
{
	//for(size_t i=0; i!=pos; i++)
	auto it = target_struct.begin();
	std::advance(it, pos);
	return *it;
}

void list_iteration_test::run()
{
	std::list<variable_size_struct> test_target;  // тестируемый лист
	variable_size_struct test_struct = variable_size_struct(additional_load); // структура, которая будет добавляться в вектор

	for (int i = 0; i < amount; i++) test_target.push_back(test_struct);



	if (randpos)
	{
		timer_begin();  // TEST START
		auto it = test_target.begin();
		for (size_t i = 0; i < iterations_amount; i++)
		{
			for (size_t i = 0; i < test_target.size(); i++)
			{
				auto it = test_target.begin();
				std::advance(it, rnd::random_integer(0, test_target.size()-1)); // latest change
				auto temp = *it;
			}
		}
		timer_end();    // TEST END
	}
	else
	{
		timer_begin();  // TEST START
		for (size_t i = 0; i < iterations_amount; i++)
		{
			for (auto element : test_target);
		}
		timer_end();    // TEST END
	}
}