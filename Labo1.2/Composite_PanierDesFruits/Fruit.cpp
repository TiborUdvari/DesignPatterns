#include "Fruit.h"

using namespace std;

Fruit::Fruit()
{
	this->price = 0.0f;
}

Fruit::Fruit(std::string _name, bool _seeded) : name(_name), seeded(_seeded)
{

}

Fruit::~Fruit()
{

}

void Fruit::print()
{
	cout << name ;
}

bool Fruit::isSeeded()
{
	return seeded;
}
