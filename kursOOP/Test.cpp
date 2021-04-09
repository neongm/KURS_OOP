#include "Test.h"

void Test::set_amount(uint32_t _amount)
{
	amount = _amount;
}

uint32_t Test::get_last_result()
{
	return (uint32_t)std::chrono::duration_cast<std::chrono::milliseconds>(time_end - time_start).count();
}


void Test::timer_begin()
{
	time_start = std::chrono::steady_clock::now();
}

void Test::timer_end()
{
	time_end = std::chrono::steady_clock::now();
}