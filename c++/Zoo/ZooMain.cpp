// ZooMain.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Teemu Kalmari,Eero Isola,Kristian Hirvonen

#include <iostream>
#include "Date.h"
#include "Animal.h"
#include "Shark.h"
#include "Tiger.h"
#include "Zoo.h"

using namespace std;


int main()
{
    cout << "--- Zoo ----" << endl;
    cout << " " << endl;
    Date newdate;
    Date newdate2(10,11,1927);
    bool dateIsCorrect = false;

    //Date class checks
    cout << "--- Date testing ---" << endl;
    cout << "Date should be 1/1/1900-> " + newdate.ToString() << endl;
    dateIsCorrect = newdate.setValues(8, 1, 2200);
    cout << "Incorrect date given, boolean false-> " + newdate.ToString() + " DateBoolean: " + to_string(dateIsCorrect) << endl;
    dateIsCorrect = newdate.setValues(11, 12, 2019);
    cout << "Should be 11/12/2019, boolean true-> " + newdate.ToString() + " DateBoolean: " + to_string(dateIsCorrect) << endl;
    cout << "Print the day-> " + to_string(newdate.D()) << endl;
    cout << "Print the month-> " + to_string(newdate.M()) << endl;
    cout << "Print the year-> " + to_string(newdate.Y()) << endl;
    cout << "Print the second date class with given values-> " + newdate2.ToString() << endl;

    cout << " " << endl; //Spacer

    //Add animals with different values
    cout << "--- Animal testing ---" << endl;
    Zoo animals;
    Shark* shark1 = new Shark("DasdHai", Date(1, 1, 1911), 2.0, "RandomHai");
    Shark* shark2 = new Shark();
    Shark* shark3 = new Shark("AsdHai", Date(12, 11, 1921));
    Tiger* tiger1 = new Tiger("Tiikeri", Date(1, 12, 1955), 5.0, "RandomTiikeri");
    animals.add(shark1);
    animals.add(shark2);
    animals.add(shark3);
    animals.add(tiger1);
    cout << " " << endl; //Spacer

    //Test print by name and age
    cout << "Sorted by name: " << endl;
    animals.printSortedByName();
    cout << " " << endl; //Spacer
    cout << "Sorted by age: " << endl;
    animals.printSortedByAge();
    cout << " " << endl; //Spacer

    //Test the remove funtion and print again
    animals.remove("AsdHaii"); //Give wrong name
    animals.remove("AsdHai");
    cout << "Sorted by name after remove: " << endl;
    animals.printSortedByName();
    cout << " " << endl; //Spacer

    //Print animals one by one
    cout << "Shark1.ToString(): " + shark1->ToString() << endl;
    cout << "Tiger1.ToString(): " + tiger1->ToString() << endl;
    cout << " " << endl; //Spacer

    
    
    







};

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
