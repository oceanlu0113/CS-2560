#include "pch.h"
#include "Question.h"
#include <iostream>
#pragma once

string questionn;
int answerr;

Question::Question() {
	questionn = "";
	answerr = -1;
}

Question::Question(string q, int a)
{
	questionn = q;
	answerr = a;
}

void Question::setQuestion(string q, int a) {
	questionn = q;
	answerr = a;
}

void Question::getQuestion() {
	cout << questionn;
}

string Question::getPossibleAnswers() {
	return "(1) Indian\n(2) Artic\n(3) Atlantic\n(4) Pacific\n";
}

int Question::getAnswer() {
	return answerr;
}

