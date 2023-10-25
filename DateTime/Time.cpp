#include "Time.h"

Time::Time( int newHour, int newMin, int newSec )               //kwalifikacja nazwa klasy
{
	setTime( newHour, newMin, newSec );
}
Time::Time( const Time& t ){
	*this = t; 
}

void Time::setTime( int newHour, int newMin, int newSec )
{
	setHour( newHour );
	setMin( newMin );
	setSec( newSec );
}

void Time::printTime()
{
	cout << getHour() << ":" << getSec();
}
void Time::readTime()
{
	char c;
	int x;
	cin >> x >> c; setHour( x );
	cin >> x >> c; setMin( x );
	cin >> x; setSec( x );
}


ostream& operator<<(ostream& out, const Time& t)
{
	out << t.getHour() << ":" << t.getSec();
	return out;
 }
 istream& operator>>(istream& in, Time& t)
 {
	 char c;
	 int x;
	 cin >> x >> c; t.setHour(x);
	 cin >> x >> c; t.setMin(x);
	 cin >> x; t.setSec(x); //mam dostep do interfejsu prywatnego klasy
	 return in;
 }








//enkapsulacja

 //metoda stala - nie modyfikuje stanu obiektu dla ktorego jest wywolywana

 //int getHour() const; const w patrametrze, w naglowku lub na koncu

 //przeladowanie operatorow we/wy

