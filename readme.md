# 🦁 Zoo 🦈

This is a C++ program that simulates a Zoo. The program consists of several classes - Date, Animal, Shark, Tiger, and Zoo. The main() function is in the ZooMain.cpp file.

# Usage 🚀

To run the program, simply compile and run the ZooMain.cpp file. The program will output various information about the animals in the zoo.

# Classes 📚
## Date 🗓️
The Date class represents a date with day, month, and year fields. It has the following member functions:

- setValues(int d, int m, int y): Sets the day, month, and year fields of the date. Returns true if the values are valid and false otherwise.
- D(): Returns the day of the date.
- M(): Returns the month of the date.
- Y(): Returns the year of the date.
- ToString(): Returns a string representation of the date in the format "DD/MM/YYYY".

## Animal 🐾
The Animal class is an abstract base class that represents an animal in the zoo. It has the following member functions:

- GetName(): Returns the name of the animal.
- GetBirthDate(): Returns the birth date of the animal.
- GetWeight(): Returns the weight of the animal.
- GetSpecies(): Returns the species of the animal.
- ToString(): Returns a string representation of the animal.

## Shark 🦈
The Shark class is a subclass of Animal that represents a shark in the zoo. It has an additional field for the type of shark. It has the following member functions:

- Shark(string name, Date birthDate, double weight, string species, string type): Constructor for the Shark class. Initializes the name, birth date, weight, species, and type fields.
- Shark(): Default constructor for the Shark class. Initializes the name, birth date, weight, species, and type fields to default values.
- GetType(): Returns the type of the shark.

## Tiger 🐅
The Tiger class is a subclass of Animal that represents a tiger in the zoo. It has an additional field for the type of tiger. It has the following member functions:

- Tiger(string name, Date birthDate, double weight, string species, string type): Constructor for the Tiger class. Initializes the name, birth date, weight, species, and type fields.
- Tiger(): Default constructor for the Tiger class. Initializes the name, birth date, weight, species, and type fields to default values.
- GetType(): Returns the type of the tiger.

## Zoo 🏞️
The Zoo class represents a collection of animals in the zoo. It has the following member functions:

- add(Animal* animal): Adds an animal to the zoo.
- remove(string name): Removes an animal from the zoo by name.
- printSortedByName(): Prints the animals in the zoo sorted by name.
- printSortedByAge(): Prints the animals in the zoo sorted by age.
