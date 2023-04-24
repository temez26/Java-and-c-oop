#pragma once

#include "Animal.h"
#include "Date.h"
#include <iostream>
#include <string>


class Tiger : public Animal {
private:
	string species;
public:
	string Species() const { return species; }

	virtual string ToString() const;

	Tiger(string name = "Tiikeri", Date birth = Date(1, 1, 1900), double weight = 1, string species = "TiikeriRotu");



};

