#include "Animal.h"


Animal::Animal(string name, Date birth, double weight) {
	this->name = name;
	this->birth = birth;
	this->weight = weight;
}

string Animal::ToString() const {
	return "Name: " + name + ", Birthdate: " + birth.ToString() + ", Weight: " + std::to_string(weight);
}
