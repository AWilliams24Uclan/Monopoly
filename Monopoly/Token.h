#pragma once
#include <string>
#include <iostream>

using namespace std;

class Token
{
public:
	Token();
	Token(string type);
	~Token();
	void setType(string type);
	void print();

private:
	string type;

};

