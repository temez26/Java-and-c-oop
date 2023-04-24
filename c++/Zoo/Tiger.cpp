#include "Tiger.h"

using namespace std;


Tiger::Tiger(string name, Date birth, double weight, string species)
{
	set_name(name);
	set_birth(birth);
	set_weight(weight);
	this->species = species;
}

string Tiger::ToString() const
{
	return get_name() + " / " + get_birth().ToString() + " / " + to_string(get_weight()) + " / " + species;
}