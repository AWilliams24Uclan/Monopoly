#pragma once
#include "Token.h"

class Player
{
public:
	Player();
	Player(Token token);
	void setToken(Token token);
	void setBalance(int amount);
	int getBalance();
	void addBalance(int amount);
	void subtractBalance(int amount);
	~Player();

private:
	Token token;
	int balance;
};

