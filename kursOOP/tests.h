#pragma once
#include <vector>
#include <functional>
#include <chrono>
#include <string>
#include <list>
#include <algorithm>
#include "rand_gen.h"


// newer tests:
#include "vector_iteration_test.h"
#include "list_iteration_test.h"

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


	class book
	{
	private:
		size_t id;
		std::vector<std::string> tags;
		std::vector<std::string> load;
		std::string description;
		std::string src_link;

	public:
		void set_defaults(size_t _size)
		{
			tags = { "war", "peace", "nove", "tolstoy", "example", "example" , "example" , "example" , "example" , "example" , "example" , "example" };
			description = "–оман-эпопе€, описывающий представителей высшего двор€нского сослови€, оказавшихс€ в плену любовного треугольника. ѕережива€ множество испытаний, каждый из героев переосмысливает свою жизнь и отношени€ с другими геро€ми на фоне войны 1812 года, изменившей все общество";

			for (size_t i = 0; i < _size; i++) load.push_back(description);

			src_link = "https://ilibrary.ru/text/11/index.html";
		}

		book() { set_defaults(1); }

		book(size_t _id, size_t _size = 4)
		{
			id = _id;
			set_defaults(_size);
		}
	};



	size_t fill_big_struct(bool cont_type, size_t amount, size_t pos, size_t load = 1, bool _reserve = false)
	{
		// cont_type = 1: vector
		// cont_type = 0: list
		size_t time;
		size_t aa = 2;


		if (cont_type && _reserve) 
		{
			//std::vector<book> cont(amount);
			std::vector<book> cont(amount);
			if (_reserve) cont.reserve(amount);

			auto begin = std::chrono::steady_clock::now();
			for (size_t i = 0; i < amount; i++)
			{
				book buk = book(i, load);
				cont.insert(cont.begin() + pos, buk);
			}
			auto end = std::chrono::steady_clock::now();
			time = std::chrono::duration_cast<std::chrono::milliseconds>(end - begin).count();
		}
		else if (cont_type && !_reserve)
		{
			std::vector<book> cont;

			auto begin = std::chrono::steady_clock::now();
			for (size_t i = 0; i < amount; i++)
			{
				book buk = book(i, load);
				cont.insert(cont.begin(), buk);
			}
			auto end = std::chrono::steady_clock::now();
			time = std::chrono::duration_cast<std::chrono::milliseconds>(end - begin).count();

		}
		else
		{
			std::list<book> cont(amount);

			std::list<book>::iterator it = cont.begin();
			std::advance(it, pos);
			auto begin = std::chrono::steady_clock::now();
			for (size_t i = 0; i < amount; i++)
			{
				book buk = book(i, load);
				cont.insert(it, buk);
			}
			auto end = std::chrono::steady_clock::now();
			time = std::chrono::duration_cast<std::chrono::milliseconds>(end - begin).count();
		}

		return time;
	}
	
	size_t iteration_test_big_struct(bool cont_type, size_t _amount, size_t _load, size_t _iterations_amount) 
	{
		// cont_type = 1: vector
		// cont_type = 0: list

		if (cont_type == 1) {
			vector_iteration_test object = vector_iteration_test(_amount, _load, _iterations_amount);
			object.run();
			return object.get_last_result();
		}
		else {
			list_iteration_test object = list_iteration_test(_amount, _load, _iterations_amount);
			object.run();
			return object.get_last_result();
		}
	}
}