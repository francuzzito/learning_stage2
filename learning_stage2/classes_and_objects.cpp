#include <iostream>
#include "main.h"

class c_book {
public:
	std::string tittle;
	std::string author;
	int pages;
};

void callable_functions::classes_and_objects() {
	c_book book1;
	book1.tittle = "lol guide book";
	book1.author = "greatest author alive";
	book1.pages = 1337;

	std::cout << "book title: " << book1.tittle << "\n";
	std::cout << "book author: " << book1.author << "\n";
	std::cout << "book pages: " << book1.pages << "\n";
}