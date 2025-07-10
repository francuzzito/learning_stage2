#include <iostream>
#include "main.h"

class c_book {
public:
	std::string title;
	std::string author;
	int pages;

	c_book() {
		title = "no title";
		author = "no author";
		pages = 0;
	}

	c_book(std::string _title, std::string _author, int _pages) {
		title = _title;
		author = _author;
		pages = _pages;
	}
};

void callable_functions::classes_and_objects() {
	c_book book1("lol book", "greatest author alive", 1337);

	std::cout << "book title: " << book1.title << "\n";
	std::cout << "book author: " << book1.author << "\n";
	std::cout << "book pages: " << book1.pages << "\n";
}