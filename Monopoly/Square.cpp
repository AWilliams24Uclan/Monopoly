#include "pch.h"
#include "Square.h"

Square::Square()
{
}


Square::~Square()
{
}

void Square::setCode(int code)
{
	this->code = code;
}

int Square::getCode()
{
	return this->code;
}

void Square::setColour(int colour)
{
	this->colour = colour;
}

int Square::getColour()
{
	return this->colour;
}

void Square::print()
{
	switch (this->colour) {
	case 1: cout << "Brown";
		break;
	case 2: cout << "Light Green";
		break;
		// Complete colours
	default:
		cout << "Unknown Colour!";
		break;
	}
}
