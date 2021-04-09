#pragma once
#include "Test.h"
#include "variable_size_struct.h"


class vector_iteration_test : public Test
{
	size_t iterations_amount;
	size_t additional_load;

public:
	void run();
	// iteration_amount stands for iterations through all the array
	vector_iteration_test(size_t _amount, size_t _additional_load, size_t _iterations_amount);
};



