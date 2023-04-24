#pragma once

#include "Date.h"
#include <iostream>

using namespace std;


class Animal
{
private:
    string name;
    Date birth;
    double weight;

public:
    Animal(string name = "Noname", Date birth = Date(1, 1, 1900), double weight = 1.0);

    string get_name() const { return name; }
    void set_name(string name) { this->name = name; }

    Date get_birth() const { return birth; }
    void set_birth(Date birth) { this->birth = birth; }

    double get_weight() const { return weight; }
    void set_weight(double weight) { this->weight = weight; }

    void move() {
        cout << get_name() + " added" << endl;
    }
    void utter() {
        cout << get_name() + " removed" << endl;
    }

    virtual string ToString() const;
};