#include <iostream>
#include "main.h"

void callable_functions::for_loops() {
	// predefine variable.
	int nums[] = { 1, 2, 3, 4, 5 };
	
	// main loop.
	for (int i = 0; i < 4; i++) {
		std::cout << "index: " << nums[i] << "\n";
	}
}