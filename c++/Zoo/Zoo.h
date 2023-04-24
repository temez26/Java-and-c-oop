#pragma once

#include <map>
#include <string>
#include <iostream>
#include <algorithm>
#include <vector>
#include "Date.h"
#include "Animal.h"

using namespace std;


class Zoo {
private:
    map<string, Animal*> animals;

public:
    Animal* add(Animal* a);
    Animal* remove(string name);

    void printSortedByName();
    void printSortedByAge();



};

