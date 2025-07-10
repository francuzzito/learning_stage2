#include <iostream>
#include "main.h"

void callable_functions::twod_arrays_and_nested_loops() {
	int number_grid[3][3] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};

	for (int i = 0; i <3; i++) {
		for (int j =0; j < 3; j++) {
			std::cout << number_grid[i][j] << " ";
		}
		std::cout << "\n";
	}
}
