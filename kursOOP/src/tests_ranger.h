#pragma once
#include <vector>
#include "tests/Test.h"


// this class runs number_of_tests on a testing_target
// and writes results into the result_array, wich can
// be get via get_result_array_method

class tests_ranger
{
private:
	std::vector<size_t> result_array;
	
public:
	void clear();
	tests_ranger();
	std::vector<size_t> get_result_array();
	void run(Test& testing_target, size_t number_of_tests, size_t range_start, size_t range_end);
};
