#pragma once

#include "Animal.h"
#include "Date.h"
#include <iostream>
#include <string>


class Shark : public Animal
{
private:
	string species;
public:
	string Species() const { return species; }

	virtual string ToString() const;

	Shark(string name = "Hai", Date birth = Date(1, 1, 1900), double weight = 1, string species = "HaiRotu");



};

