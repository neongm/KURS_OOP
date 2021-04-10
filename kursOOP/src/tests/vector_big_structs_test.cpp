#include "vector_big_structs_test.h"


vector_big_structs_test::vector_big_structs_test(size_t _amount, size_t _additional_load, std::string _position = "back")
{
	set_amount(_amount);
	additional_load = _additional_load;
	position = _position;
}

void vector_big_structs_test::set_position(std::string _position) 
{
	position = _position;
}

void vector_big_structs_test::set_reserve(bool _is_on)
{
	reserve = _is_on;
}

void vector_big_structs_test::run()
{
	std::vector<variable_size_struct> test_target_container;  // тестируемый вектор
	variable_size_struct test_struct = variable_size_struct(additional_load); // структура, которая будет добавляться в вектор
	
	if (reserve) test_target_container.reserve(amount + 10);

	if (position == "back" || position != "front")
	{
		timer_begin();  // TEST START
		for (int i = 0; i < amount; i++) test_target_container.push_back(test_struct);
		timer_end();    // TEST END
	}
	else if (position == "front")
	{
		timer_begin();  // TEST START
		for (int i = 0; i < amount; i++) test_target_container.insert(test_target_container.begin(),test_struct);
		timer_end();    // TEST END
	}
}
