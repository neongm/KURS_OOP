#pragma once

void vector_test_1(int iter) {            // PUSH TEST VECTOR
	std::vector<int> vec;
	for (int i = 0; i < iter; i++) {
		vec.push_back(i);
	}
}
