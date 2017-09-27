#pragma once
#include <string>

using namespace std;

class Dish
{
protected:
	int cookingTime;
	string name;

public:
	Dish(string);
	virtual string getName();
};

