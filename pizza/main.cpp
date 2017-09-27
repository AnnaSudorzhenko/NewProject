#include <iostream>
#include <string>
#include "Soup.h"
#include "Pasta.h"
#include "Pizza.h"
#include "MrCat.h"

using namespace std;

void main() 
{
	MrCat cafe;
	cafe.showMenu();	

	Dish *dishes[] =
	{	new Pizza("QuattroFormagio"), 
		new Pizza("Margarita"), 
		new Pizza("Havayian"),
		new Soup("Miso"),
		new Soup("CreamCheese")
	};

	for (auto dish : dishes) {
		cout << dish->getName() << endl;
	}
	for (auto dish : dishes) {
		delete dish;
	}
	system("pause");
}

//denisov.univ@gmail.com
//github: sergvic
//skype: sireukr