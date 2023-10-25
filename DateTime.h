#pragma once
#include "Date.h"
#include "Time.h"

class DateTime : public Date, public Time
{ //klasa łączna

public:
DateTime( int DD=1, int MM=1, int YYYY=1990, int hh=0, int mm=0, int ss=0 );
DateTime( const DateTime& dt );

DateTime& operator = ( const DateTime& dt );

void setDateTime( int DD, int MM, int YYYY, int hh, int mm, int ss );

friend istream& operator >> ( istream& in, DateTime& dt );
friend ostream& operator << ( ostream& out, const DateTime& dt )
}