#include <iostream>
#include "main.h"

class c_student {
public:
	// predefine the class with public members.
	std::string name;
	std::string major;
	double gpa;

	// constructor to initialize the class members
	c_student(std::string n, std::string m, double g) {
		name = n;
		major = m;
		gpa = g;
	}

	bool has_honors() {
		if (gpa >= 3.5) {
			return true; // student has honors.
		}

		return false; // student does not have honors.
	}
};

void callable_functions::object_functions() {
	c_student student1("alice", "computer science", 3.8);
	c_student student2("bob", "mathematics", 3.5);

	std::cout << "student 1: " << student1.name << ", major: " << student1.major << ", gpa: " << student1.gpa << "\n";
	std::cout << "student 2: " << student2.name << ", major: " << student2.major << ", gpa: " << student2.gpa << "\n";
	std::cout << "student 1 has honors: " << (student1.has_honors() ? "yes" : "no") << "\n";
	std::cout << "student 2 has honors: " << (student2.has_honors() ? "yes" : "no") << "\n";
}