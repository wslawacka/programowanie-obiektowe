#pragma once
#include <iostream>
using namespace std;

class Time {   
private:
	int mHour;
	int mMin;
	int mSec;
public:
	//Time(); //konstruktor domyslny
	Time( int newHour=0, int newMin=0, int newSec=0 ); //nazwa konstruktora musi byc TAKA SAMA jak klasy, nie ma typu, moze byc wiele konstr rozniacych sie lista parametrow
	Time( const Time& t );

public:
	void setHour( int newHour );  
	void setMin( int newMin );
	void setSec( int newSec );

	void setTime( int newHour, int newMin, int newSec );

	int getHour();
	int getMin();
	int getSec();

	void printTime();
	void readTime();

	//friend - wprowadza metode w zasieg prywatnosci tej klasy
	friend ostream& operator<<( ostream& out, const Time& t );  //referencja-inna nazwa tego samego miejsca w pamieci
	friend istream& operator>>( istream& in, Time& t );
};
  


//private:  zdefiniuje metody prywatne


//==========INLINE FUNCTIONS====================
inline void Time::setHour( int newHour )  //operator zasiegu ::
{
	mHour = newHour;  //powinna byc walidacja parametrow - czy godziny 0-23
	//this->mHour=newHour
}
inline void Time::setMin( int newMin )
{
	mMin = newMin;
}
inline void Time::setSec( int newSec )
{
	mSec = newSec;
}

inline int Time::getHour() const
{
	return mHour;
}
inline int Time::getMin() const
{
	return mMin;
}
inline int Time::getSec() const
{
	return mSec;
}

//Time.inl
//pod klasa trzeba go zainkludowac: #include "Time.inl"