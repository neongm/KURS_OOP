#pragma once

#include <vector>
#include <list>
#include <chrono>
#include "../rand_gen.h"

class Test
{
public:
	uint32_t amount;
	std::chrono::steady_clock::time_point time_start;
	std::chrono::steady_clock::time_point time_end;

	virtual void run() {};
	void set_amount(uint32_t _amount);
	void set_rangable(size_t _rangable);
	uint32_t get_last_result();
	void timer_begin();
	void timer_end();
};

