#include "pch.h"
#include "Player.h"

Player::Player()
{
}

Player::Player(Token token)
{
	this->setToken(token);
}

Player::~Player()
{
}

void Player::setToken(Token token)
{
	this->token = token;
}

void Player::setBalance(int amount)
{
	this->balance = amount;
}

int Player::getBalance()
{
	return this->balance;
}

void Player::addBalance(int amount)
{
	this->balance = this->balance+amount;
}

void Player::subtractBalance(int amount)
{
	this->balance = this->balance - amount;
}