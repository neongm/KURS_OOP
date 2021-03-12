#pragma once
#include <vector>
#include <functional>
#include <chrono>
#include <string>
#include <list>
#include <algorithm>
#include "rand_gen.h"

namespace timed_tests {

	template<typename T>
	int element_access(const std::vector<T>& vec, int iter, int tests_amount = 1, std::string type = "front") {             // ELEMENT ACCESS

		size_t mid = (int)vec.size() / 2;
		int overall_time = 0;
		for (int i = 0; i < tests_amount; i++) {
			auto begin = std::chrono::steady_clock::now();

			if (type == "mid")
				for (int i = 0; i < iter; i++) auto temp = vec.at(mid);
			else if (type == "front")
				for (int i = 0; i < iter; i++) auto temp = vec.front();
			else if (type == "back")
				for (int i = 0; i < iter; i++) auto temp = vec.back();

			auto end = std::chrono::steady_clock::now();
			auto elapsed_ms = std::chrono::duration_cast<std::chrono::milliseconds>(end - begin);
			overall_time += elapsed_ms.count();
		}
		return (int)overall_time / tests_amount;
	}

	template<typename T>
	int element_access(const std::list<T>& li, int iter, int tests_amount = 1, std::string type = "front") {             // ELEMENT ACCESS
		int overall_time = 0;
		for (int i = 0; i < tests_amount; i++) {

			auto begin = std::chrono::steady_clock::now();
			if (type == "front")
				for (int i = 0; i < iter; i++) auto temp = li.front();
			else if (type == "back")
				for (int i = 0; i < iter; i++) auto temp = li.back();

			auto end = std::chrono::steady_clock::now();
			auto elapsed_ms = std::chrono::duration_cast<std::chrono::milliseconds>(end - begin);
			overall_time += elapsed_ms.count();
		}
		return (int)overall_time / tests_amount;
	}

	template<typename T>
	int fill(T& arr, size_t amount)
	{
		auto begin = std::chrono::steady_clock::now();
		for (; amount > 0; amount--)
		{
			arr.push_back(amount);
		}
		auto end = std::chrono::steady_clock::now();
		auto elapsed_ms = std::chrono::duration_cast<std::chrono::milliseconds>(end - begin);
		return elapsed_ms.count();

	}

	template<typename T>
	int sorting(T& arr, bool reverse)
	{
		auto begin = std::chrono::steady_clock::now();

		if (reverse) std::sort(arr.begin(), arr.end(), std::greater<int>());
		else std::sort(arr.begin(), arr.end(), std::less<int>());

		auto end = std::chrono::steady_clock::now();
		auto elapsed_ms = std::chrono::duration_cast<std::chrono::milliseconds>(end - begin);
		return elapsed_ms.count();
	}

	template<typename T>
	int negate(T& arr)
	{
		auto begin = std::chrono::steady_clock::now();

		std::for_each(arr.begin(), arr.end(), std::negate<int>());
		
		auto end = std::chrono::steady_clock::now();
		auto elapsed_ms = std::chrono::duration_cast<std::chrono::milliseconds>(end - begin);
		return elapsed_ms.count();
	}

}