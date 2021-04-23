#pragma once
#include "Test.h"
#include "variable_size_struct.h"
#include <algorithm>
#include <iterator>

class list_iteration_test : public Test
{
private:
	size_t iterations_amount;
	size_t additional_load;
	bool randpos;

	variable_size_struct get_value_at(const std::list<variable_size_struct>& target_struct, size_t pos);

public:
	void run();
	list_iteration_test(size_t _amount, size_t _additional_load, size_t _iterations_amount);
	void set_rangable(size_t _rangable);
	void set_randpos(bool _is_on);
	
};

