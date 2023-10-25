#include "Date.h"

Date::Date( int newDay, int newMonth, int newYear ) 
{
	setDate( newDay, newMonth, newYear );
}
Date::Date( const Date& d ){
	*this = d; //powinien byc uzyty operator podstawienia =
}

void Date::setDate( int newDay, int newMonth, int newYear )
{
	setDay( newDay );
	setMonth( newMonth );
	setYear( newYear );
}
ostream& operator<<( ostream& out, Date& d ){
	out << d.mDay << '/' << d.mMonth << '/' << d.mYear;
  return out;
}
istream& operator>>( istream& in, Date& d ){
	char c; 
  int x;
  in >> x >> c; d.setDay( x );
	in >> x >> c; d.setMonth( x );
	in >> x; d.setYear( x );
  return in;
}