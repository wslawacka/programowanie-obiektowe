#include <iostream>
using namespace std;

#include "Time.h"
#include "Date.h"

int main()
{
	/*
	Time t1; 
	t1.setTime( 10, 21, 34 );
	cout << "t1= "; t1.printTime(); cout << endl;
	operator<<(cout, t1); // = cout<<t1<<
	t1.setHour( 14 );
	t1.setMin( 40 );

	Time t2 ( 13, 15, 10 ); 
	cout << "Podaj czas w formacie hh:mm:ss :  ";
	t2.readTime();
	cout << "t2= "; t2.printTime(); cout << endl;

	Time t3( t1 );
	cout << "t3 = "<< t3 << endl;
	
	Date d1;
	d1.setDate( 11, 10, 2023 );
	cout << "d1: " << d1 << endl;
	Date d3 = d1; //wywola sie konstruktor kopiujacy, nie operator podstawienia
	Date d2( 11, 10, 2023 );
	cout << "Podaj date dd/mm/yyyy";  
	cin>>d2;
	*/

	DateTime dt;
	cout << "dt = "<<dt<<endl;
	cout<<"Podaj date i czas DD/MM/YYYY hh:mm:ss";
	cin>>dt;
	cout<<"dt = "<<dt<<endl;
	DateTime dt1(DateTime( 23, 10, 2023, 14, 58, 10 ));
	cout<<"dt1= "<<dt1<<endl;
	dt1=dt;
	cout<<"dt1 = "<<dt1<<endl;

	return 0;
}

