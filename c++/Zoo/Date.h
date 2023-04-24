#pragma once

#include <string>

using namespace std;


class Date
{
private:
	int y;
	int m;
	int d;

public:
	bool operator<(const Date& other) const {
		if (y < other.y) {
			return true;
		}
		else if (y > other.y) {
			return false;
		}
		else if (m < other.m) {
			return true;
		}
		else if (m > other.m) {
			return false;
		}
		else {
			return (d < other.d);
		}
	}


	int Y() const { return y; }
	int M() const { return m; }
	int D() const { return d; }

	Date(int d = 1, int m = 1, int y = 1900);

	virtual string ToString() const;

	bool setValues(int day, int month, int year);



};


