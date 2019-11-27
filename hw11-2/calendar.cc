
#include "calendar.h"
Date::Date() {}
Date::Date(int year, int month, int day) {
	year_ = year;
	month_ = month;
	day_ = day;
	
}


void Date::NextDay(int n)
{
	int _days = ComputeDaysFromYearStart(year_, month_, day_) + n ;

	while (_days < 0)
	{
		_days += GetDaysInYear(year_);
		year_--;
	}
	while (_days > GetDaysInYear(year_))
	{
		_days -= GetDaysInYear(year_);
		year_++;
		
	}

	month_ = 1;


	for (int i = 1; days[i] < _days; i++)
	{
		month_ = i + 1;
		_days -= days[i];
	}
	day_ = _days;

	SetDate(year_, month_, day_);
}
void Date::SetDate(int year, int month, int day) {

	if (GetDaysInYear(year) == 366) {

		days[2] = 29;
		if (days[month] < day) {
			
			cout << "Invalid date : " << year << "." << month << "." << day << endl;
		}

		else {
			year_ = year;
			month_ = month;
			day_ = day;
			cout << *this;
		}
	}
	else {
		days[2] = 28;
		if (days[month] < day) {
			
			cout << "Invalid date : " << year << "." << month << "." << day << endl;
		}

		else {
			year_ = year;
			month_ = month;
			day_ = day;

			cout << *this;
		}

	}

	
}


string Date::GetDate()const {
	
string s = to_string(year_) + "." + to_string(month_) + "." + to_string(day_);

return s;

}
int Date::GetDaysInYear(int year) {

	//4로 나누어떨어지지만 100으로 나눠떨어지지 않을 때 366
	//4와 100으로 나누어떨어지지만 400으로도 나누어떨어질 때 366
	if (year % 4 == 0 && year % 100 != 0) {
		return 366;
	}
	else if (year % 4 == 0 && year % 100 == 0) {
		if (year % 400 == 0)
			return 366;
	}
	else
		return 365;
	
}
int Date::ComputeDaysFromYearStart(int year, int month, int day) {
	if (GetDaysInYear(year) == 365) {
		if (month == 1)
			return day;
		else if (month == 2)
			return day + 31;
		else if (month == 3)
			return 31 + 28 + day;
		else if (month == 4)
			return 31 + 28 + 31 + day;
		else if (month == 5)
			return 31 + 28 + 31 + 30 + day;
		else if (month == 6)
			return 31 + 28 + 31 + 30 + 31 + day;
		else if (month == 7)
			return 31 + 28 + 31 + 30 + 31 + 30 + day;
		else if (month == 8)
			return 31 + 28 + 31 + 30 + 31 + 30 + 31 + day;
		else if (month == 9)
			return 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + day;
		else if (month == 10)
			return 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + day;
		else if (month == 11)
			return 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + day;
		else if (month == 12)
			return 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + day;

	}
	else if (GetDaysInYear(year) == 366) {
		if (month == 1)
			return day;
		else if (month == 2)
			return day + 31;
		else if (month == 3)
			return 31 + 29 + day;
		else if (month == 4)
			return 31 + 29 + 31 + day;
		else if (month == 5)
			return 31 + 29 + 31 + 30 + day;
		else if (month == 6)
			return 31 + 29 + 31 + 30 + 31 + day;
		else if (month == 7)
			return 31 + 29 + 31 + 30 + 31 + 30 + day;
		else if (month == 8)
			return 31 + 29 + 31 + 30 + 31 + 30 + 31 + day;
		else if (month == 9)
			return 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + day;
		else if (month == 10)
			return 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + day;
		else if (month == 11)
			return 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + day;
		else if (month == 12)
			return 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + day;



	}
}


ostream& operator<<(ostream& os, const Date& c) {

	return os << c.GetDate() << endl;
	
}

istream& operator>>(istream& is, Date& c) {
	string line;
	is >> line;
	int y, m, s;
	int n;
	n = line.find(".");
	y = atoi(line.substr(0, n).c_str());
	line = line.substr(n + 1);
	n = line.find(".");
	m = atoi(line.substr(0, n).c_str());
	line = line.substr(n + 1);
	s = atoi(line.c_str());
	c.SetDate(y, m, s);
	return is;
}
