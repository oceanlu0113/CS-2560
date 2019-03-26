#pragma once
#include <string>
using namespace std;

class Question
{
private:
	string questionn;
	int answerr;
public:
	Question();
	Question(string q, int a);
	void setQuestion(string q, int a);
	void getQuestion();
	string getPossibleAnswers();
	int getAnswer();
};
