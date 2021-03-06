#include "pch.h"
#include <iostream>
#include "Player.h"
#include "Question.h"

using namespace std;

bool validate(int input, Question q) {
	input--;
	int a = q.getAnswer();
	if (a == input ) {
		return true;
	}
	else {
		return false;
	}
}

int main() {
	int loop;
	//initializing	
	Question questionList[10] = 
	{ {"1. Which is the largest ocean in the world?", 3},
	{"2. Which is the deepest ocean in the world?", 3},
	{"3. Which ocean lies between Europe and North America?", 2},
	{"4. Which ocean is frozen for much of the year?", 1},
	{"5. Which ocean is Hawaii in?", 3},
	{"6. Which ocean lies between Australia and Africa?", 0},
	{"7. Which ocean does the river Amazon flow into?", 2},
	{"8. Which ocean asin is the most geologically active?", 3},
	{"9. Which ocean is the busiest ocean from the point of view from trade?", 2},
	{"10. Which of the following oceans has the most trenches or deeps?", 3} };
	/*Possible answers
	(1) Indian
	(2) Artic
	(3) Atlantic
	(4) Pacific*/

	do {
		//playing
		int length;
		cout << "Welcome to Ocean Trivia!\nEnter the number of players: ";
		cin >> length;
		vector <Player> users(length);
		int input;
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < length; j++) {
				int a = j + 1;
				cout << "\nPlayer " << a << endl;
				questionList[i].getQuestion();
				cout << endl << questionList[i].getPossibleAnswers() << "Enter your answer (1-4): ";
				cin >> input;
				Question *ptr = &questionList[i];
				if (validate(input, *ptr)) {
					users[j].addRight(ptr);
				}
				else {
					users[j].addWrong(ptr);
				}
			}
		}

		//playing again?
		int choice;
		cout << "Press (0) to quit, (1) to play again: ";
		cin >> choice;
		if (choice == 1) {
			for (int i = 5; i < 10; i++) {
				for (int j = 0; j < length; j++) {
					int a = j + 1;
					cout << "\nPlayer " << a << endl;
					questionList[i].getQuestion();
					cout << endl << questionList[i].getPossibleAnswers() << "Enter your answer: ";
					cin >> input;
					if (validate(input, questionList[i])) {
						users[j].addRight(&questionList[i]);
						users[j].addRightIndx(i);
					}
					else {
						users[j].addWrong(&questionList[i]);
					}
				}
			}
		}
		cout << "\nThanks for playing! Here are the results: \n";
		// player x got these questions right
		for (int i = 0; i < length; i++) {
			cout << "Player " << i + 1 << " got these questions right: \n";
			users[i].getCorrect();
		}
		cout << "Press (1) to quit, (2) to play again: ";
		cin >> loop;
		for (int i = 0; i < users.size(); i++) {
			users[i].clear();
		}
	} while (loop == 2);


	return 0;
}