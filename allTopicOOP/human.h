#pragma once
#include <iostream>
//#define DEBUG
class human {
public:
	human(); //default constructor
	human(std::string name); //constr. who have arguments
	human(const human& hum); //copy constructor
	void setName(std::string name); //setter
	std::string getName(); //geter
	void printParam(); //print object characteristic.
	~human(); //destructor
private:
	std::string name;
	double health;
	int lvl;
	int* weapons;
	int sizeIcWpns;
};
