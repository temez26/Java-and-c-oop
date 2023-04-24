#include "Zoo.h"


Animal* Zoo::add(Animal* a) {
    animals[a->get_name()] = a;
    a->move(); // Call the move() method of the added animal
    return a;
}

Animal* Zoo::remove(string name) {
    auto it = animals.find(name);
    if (it == animals.end()) {
        return nullptr;
    }
    Animal* removed = it->second;
    animals.erase(it);
    removed->utter(); // Call the utter() method of the removed animal
    return removed;
}

void Zoo::printSortedByName() {
    vector<Animal*> sorted_animals;
    sorted_animals.reserve(animals.size());
    for (const auto& pair : animals) {
        sorted_animals.push_back(pair.second);
    }
    sort(sorted_animals.begin(), sorted_animals.end(),
        [](const Animal* a1, const Animal* a2) {
            return a1->get_name() < a2->get_name();
        });
    for (Animal* a : sorted_animals) {
        cout << a->ToString() << endl;
    }
}

void Zoo::printSortedByAge() {
    vector<Animal*> sorted_animals;
    sorted_animals.reserve(animals.size());
    for (const auto& pair : animals) {
        sorted_animals.push_back(pair.second);
    }
    sort(sorted_animals.begin(), sorted_animals.end(),
        [](const Animal* a1, const Animal* a2) {
            return a1->get_birth() < a2->get_birth();
        });
    for (Animal* a : sorted_animals) {
        cout << a->ToString() << endl;
    }
}





