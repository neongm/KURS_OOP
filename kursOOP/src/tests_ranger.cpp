#include "tests_ranger.h"


tests_ranger::tests_ranger(){}


void tests_ranger::run(Test& testing_target, size_t number_of_tests, size_t range_start, size_t range_end)
{
	clear();

	size_t range = range_end - range_start;
	size_t step = range / (number_of_tests - 1);
	size_t amount;

	for (size_t i = 0; i < number_of_tests; i++)
	{
		amount = range_start + step * i;
		testing_target.set_rangable(amount);
		testing_target.run();
		result_array.push_back(testing_target.get_last_result());
	}
}

void tests_ranger::clear() 
{
	if (result_array.size()!=0) result_array.resize(0);
}

std::vector<size_t> tests_ranger::get_result_array()
{
	return result_array;
}