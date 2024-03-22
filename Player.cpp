#include "Player.h"

Player::Player(string firstName, string secondName)
{
	this->firstName = firstName;
	this->secondName = secondName;
}

void Player::setRating(float rating)
{
	this->rating = rating;
}

void Player::setPosition(string position)
{
	this->position = position;
}

void Player::setNumber(int number)
{
	this->number = number;
}

void Player::setClub(string club)
{
	this->club = club;
}

string Player::getString()
{
	string str = "";
	str+= to_string(id)+";";
	str+= firstName+";";
	str+= secondName+";";
	str+= to_string(rating)+";";
	str+= position+";";
	str+= to_string(number)+";";
	str+= club+";";
	return str;
}
