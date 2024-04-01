#include "DiceGame.h"
#include <iostream>

DiceGame::DiceGame() {
	d1.roll();
	d2.roll();
}

DiceGame::~DiceGame() {}

void DiceGame::play() {
	bool firstRoll = true;
	bool gameOver = false;
	int score = d1.getFaceValue() + d2.getFaceValue();
	int pointToWin;

	do {
		std::cout << "D1: " << d1.getFaceValue() << "\nD2: " << d2.getFaceValue() << std::endl;

	
		if (firstRoll) {
			if (score == 2 || score == 3 || score == 12) {
				std::cout << score << " is your result, that means you Lose!" << std::endl;
				gameOver = true;
			}
			else if (score == 7 || score == 11) {
				std::cout << score << " is your result, that means you Win!" << std::endl;
				gameOver = true;
			}
			else {
				pointToWin = score;
				std::cout << "Point to win is " << pointToWin << " press any key to roll again..." << std::endl;
				system("pause");

				d1.roll();
				d2.roll();

				score = d1.getFaceValue() + d2.getFaceValue();

				firstRoll = false;
				gameOver = false;
			}
		}
		else {
			if (score != pointToWin && score != 7) {
				std::cout << "Point to win is " << pointToWin << " press any key to roll again..." << std::endl;
				system("pause");

				d1.roll();
				d2.roll();

				score = d1.getFaceValue() + d2.getFaceValue();

				gameOver = false;
			}
			else if (score == pointToWin) {
				std::cout << score << " is your result, that means you Win!" << std::endl;
				gameOver = true;
			}
			else if (score == 7) {
				std::cout << score << " is your result, that means you Lose!" << std::endl;
				gameOver = true;
			}
		}
	} while (!gameOver);
}
