#include "Pizza.h"
#include <iostream>

using namespace std;

//Pizza::Pizza(string name)//:name(name)
//{
	//Pizza::name = name;
	//this->name = name;
	// this - ����� �� ���������� ��'���, � ���� ����� �� ����������� (��������)
//}

//string Pizza::getName()
//{	return name;}

//inline - ��� ���������� �������; ��� ������ ������ (!)

Pizza::Pizza(string name): Dish(name)
{
}

string Pizza::getName()
{
	return "Pizza \"" + name+"\"";
}
