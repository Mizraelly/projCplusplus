#include "human.h"

human::human()
{
#ifdef DEBUG
	std::cout << "Load default constructor...\n";
#endif
	this->sizeIcWpns = 9;
	this->weapons = new int[sizeIcWpns];
	for (int i = 0; i < sizeIcWpns; i++)
	{
		weapons[i] = 0;
	}
	this->health = 100;
	this->lvl = 1;
	std::cout << "enter nickname:";
	std::cin >> name;
	std::cout << "Object " << this << " is created." << std::endl;
}

human::human(std::string name)
{
#ifdef DEBUG
	std::cout << "Load constructor who have arguments...\n";
#endif
	this->sizeIcWpns = 9;
	this->weapons = new int[sizeIcWpns];
	for (int i = 0; i < this->sizeIcWpns; i++)
	{
		weapons[i] = i;
	}
	this->health = 100;
	this->lvl = 1;
	this->name = name;
	std::cout << "Object " << this << " is created.\n";
}

human::human(const human& hum)
{
#ifdef DEBUG
	std::cout << "load copy constructor...\n";
#endif // DEBUG
	this->health = hum.health;
	this->lvl = hum.lvl;
	this->name = hum.name;
	std::cout << "Object " << this << " is created.\n";
}

void human::printParam()
{
#ifdef DEBUG
	std::cout << "Load func printParam...\n";
#endif
	std::cout << "Name:" + this->name + '\n' << "lvl:" << this->lvl << '\n' << "health:" << this->health << '\n';
}

void human::setName(std::string name)
{
#ifdef DEBUG
	std::cout << "Load setter...\n";
#endif
	this->name = name;
}

std::string human::getName()
{
#ifdef DEBUG
	std::cout << "Load getter...\n";
#endif
	return this->name;
}

human::~human()
{
#ifdef DEBUG
	std::cout << "Load destructor...\n";
#endif
	delete[]this->weapons;
	this->weapons = nullptr;

	std::cout << "Object " << this << " deleted." << std::endl;
}
