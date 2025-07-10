#include <iostream>
#include "main.h"

void callable_functions::pointers() {
	// pointers to basic data types.
	int age = 21;
	int* age_ptr = &age;

	double gpa = 3.8;
	double* gpa_ptr = &gpa;

	std::string name = "john doe";
	std::string* name_ptr = &name;

	// dereferencing pointers to access the values they point to using the * operator.
	std::cout << "age pointer: " << *age_ptr << "\n";
	std::cout << "gpa pointer: " << *gpa_ptr << "\n";
	std::cout << "name pointer: " << *name_ptr << "\n";
}