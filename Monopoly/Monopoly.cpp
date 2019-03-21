// Monopoly.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

#include "Token.h"

int main()
{
    std::cout << "Put assignment details in here!\n";

	Token tokenOne = Token("Dog");
	Token tokenTwo = Token("Car");

	tokenOne.print();
	tokenTwo.print();

}