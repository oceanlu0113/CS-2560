#pragma once
#include <vector>
#include "Question.h"

using namespace std;

class Player
{
private:
	vector<Question*> correct;
	vector<Question*> wrong;
	vector<int> correctIndx;
public:
	Player();
	void addRight(Question *q);
	void addWrong(Question *q);
	void getCorrect();
	void addRightIndx(int i);
	void clear();
};


