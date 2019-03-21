#pragma once
#include <iostream>

using namespace std;

class Square
{
public:
	Square();
	~Square();
	void setCode(int code);
	int getCode();
	void setColour(int colour);
	int getColour();
	void print();

private:
	int code;
	int colour;
};

