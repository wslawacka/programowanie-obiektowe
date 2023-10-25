#pragma once
#include <iostream>
using namespace std;

class Date
{
private:
	int mDay;  //m-member
	int mMonth;
	int mYear;

public:
	Date( int newDay=1, int newMonth=1, int newYear=1990 ); //moze byc bez nazwy, np int=1990
	Date( const Date& d ); //konstruktor kopiujacy

public:
	void setDay( int newDay );
	void setMonth( int newMonth );
	void setYear( int newYear );

	void setDate( int newDay, int newMonth, int newYear );

	int getDay();
	int getMonth();
	int getYear();

	friend ostream& operator<<( ostream& out, const Date& d );  
	friend istream& operator>>( istream& in, Date& d );
};


inline void Date::setDay( int newDay )
{
	mDay = newDay;   
}
inline void Date::setMonth( int newMonth )
{
	mMonth = newMonth;
}
inline void Date::setYear( int newYear )
{
	mYear = newYear;
}
inline int Date::getDay(){
	return mDay;
}
inline int Date::getMonth(){
	return mMonth;
}
inline int Date::getYear(){
	return mYear;
}
