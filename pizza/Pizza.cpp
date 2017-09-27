#include "Pizza.h"
#include <iostream>

using namespace std;

//Pizza::Pizza(string name)//:name(name)
//{
	//Pizza::name = name;
	//this->name = name;
	// this - вказує на конкретний об'єкт, в класі якого ми знаходимось (вказівник)
//}

//string Pizza::getName()
//{	return name;}

//inline - для примітивних функцій; код працює швидше (!)

Pizza::Pizza(string name): Dish(name)
{
}

string Pizza::getName()
{
	return "Pizza \"" + name+"\"";
}
