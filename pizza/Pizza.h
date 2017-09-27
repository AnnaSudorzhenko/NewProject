#pragma once //включает один раз файл даже если прописано несколько раз
#include <string>
#include "Dish.h"

using namespace std;

class Pizza:public Dish
{
private:
	//int cookingTime;
	//string name;

public:
	Pizza(string name);
	string getName() override;
	//Pizza(string);
	//string getName();
};