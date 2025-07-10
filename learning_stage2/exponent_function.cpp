#include <iostream>
#include "main.h"

static int power(const int base_num, const int pow_num) {
	int result = 1;

	for (int i = 0; i < pow_num; i++) {
		result = result * base_num;
	}

	return result;
}

void callable_functions::exponent_function() {
	std::cout << power(2, 3) << "\n"; // 8
}