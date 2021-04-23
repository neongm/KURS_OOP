#pragma once
#include "Test.h"
#include "variable_size_struct.h"
#include "../rand_gen.h"

class vector_iteration_test : public Test
{
private:
	size_t iterations_amount;
	size_t additional_load;
	bool randpos;

public:
	void run();
	// iteration_amount stands for iterations through all the array
	vector_iteration_test(size_t _amount, size_t _additional_load, size_t _iterations_amount);
	void set_rangable(size_t _rangable);
	void set_randpos(bool _is_on);
};



