#include <iostream>
#include "main.h"

void callable_functions::guessing_game() {
	// predefine variables.
	constexpr int secret_number = 7;
	int guess;
	int guess_count = 0;
	int guess_limit = 3;
	bool out_of_guesses = false;

	// main loop.
	while (secret_number != guess && !out_of_guesses) {
		if (guess_count < guess_limit) {
			std::cout << "enter guess: ";
			std::cin >> guess;
			guess_count++;

			// input validation.
			if (std::cin.fail()) {
				std::cin.clear(); // clear the error flag.
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // discard invalid input
				std::cout << "invalid input. please enter a number.\n";
				continue; // skip to the next iteration of the loop.
			}
		}
		else {
			out_of_guesses = true;
			break; // exit the loop if out of guesses.
		}

	}


	if (out_of_guesses) {
		std::cout << "you lose!\n";
	}
	else {
		// ggwp.
		std::cout << "you guessed the secret number!\n";
	}

}