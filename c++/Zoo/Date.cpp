#include "Date.h"


Date::Date(int d, int m, int y)
{
	setValues(d, m, y);
}

string Date::ToString() const
{
	return to_string(D()) + "/"  + to_string(M()) + "/" + to_string(Y());
}


bool Date::setValues(int day, int month, int year)
{
	//Variables
	bool leapYear = false;

	//Check year
	if (year < 1900 || year > 2030) {
		return false;
	}

	else if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
		leapYear = true;
	}

	//Check month
	switch (month) {
		//31 Days
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		if (day > 31) {
			return false;
		}

		else {
			this->d = day;
			this->m = month;
			this->y = year;
			return true;
		}

		//30 Days
	case 4:
	case 6:
	case 9:
	case 11:
		if (day > 30) {
			return false;
		}

		else {
			this->d = day;
			this->m = month;
			this->y = year;
			return true;
		}

		//Leap year
	case 2:
		if (leapYear)
			if (day > 29) {
				return false;
			}

			else {
				this->d = day;
				this->m = month;
				this->y = year;
				return true;
			}
		else //...if not leapYear
			if (day > 28) {
				return false;
			}

			else {
				this->d = day;
				this->m = month;
				this->y = year;
				return true;
			}

		//Month is not between 1 and 12
	default:
		return false;
	}
}



