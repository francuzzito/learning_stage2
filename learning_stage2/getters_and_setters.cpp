#include <iostream>
#include "main.h"

class c_movie {
private:
	std::string director;
	std::string rating;

public:
	// predefies.
	std::string title;
	int year;

	// setter.
	void set_director(std::string d) {
		director = d;
	}

	void set_rating(std::string r) {
		if (rating == "G" || rating == "PG" || rating == "PG-13") {
			rating = r;
		}
		else {
			std::cout << "invalid rating. setting to default not rated.\n";
			rating = "NR";
		}
	}

	// getter.
	std::string get_rating() {
		return rating;
	}

	// constructor.
	c_movie(std::string t, std::string d, std::string r, int y) {
		title = t;
		set_director(d);
		set_rating(r);
		year = y;
	}
};

void callable_functions::getters_and_setters() {
	c_movie jurrasic_park("jurrasic park", "me", "G", 1337);

	//jurrasic_park.set_director("steven spielberg");
	jurrasic_park.set_rating("PG-13");
	jurrasic_park.get_rating();

	std::cout << "title: " << jurrasic_park.title << "\n";
}