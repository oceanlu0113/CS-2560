#include "pch.h"
#include "Player.h"
#pragma once
#include <iostream>

vector<Question*> correct;
vector<Question*> wrong;
vector<int> correctIndx;

Player::Player()
{
}

void Player::addRight(Question *q) {
	correct.push_back(q);
}

void Player::addWrong(Question *q) {
	wrong.push_back(q);
}

void Player::addRightIndx(int i) {
	correctIndx;
}

void Player::getCorrect() {
	for (int i = 0; i < correct.size(); i++) {
		Question *temp = correct.at(i);
		temp->getQuestion();
		cout << endl;
	}
}

void Player::clear() {
	correct.clear();
	wrong.clear();
}
