#pragma once
#include "Test.h"
#include "variable_size_struct.h"


class vector_big_structs_test : public Test
{
	size_t additional_load;
	std::string position;
	bool reserve;

public:
	void run();
	void set_position(std::string _position);
	void set_reserve(bool _is_on);
	vector_big_structs_test(size_t _amount, size_t _additional_load, std::string _position);
};



