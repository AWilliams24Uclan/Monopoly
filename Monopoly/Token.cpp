#include "pch.h"
#include "Token.h"

Token::Token()
{
	this->setType("");
}

Token::Token(string type)
{
	this->setType(type);
}

Token::~Token()
{
}

void Token::setType(string type) {
	this->type = type;
}

void Token::print() {
	cout << type;
}


