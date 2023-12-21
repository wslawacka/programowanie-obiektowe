#pragma once
#include "Person.h"

#define KOSZTY_UZYSKANIA_PRZYCHODU 111.25
#define KWOTA_WOLNA 46.34

class Worker :
	public Person
{
public:
	Worker( string name = "", int age = 0, double salary = 0,  int yearsOfExperience = 0 );
	virtual ~Worker() {}

public:
	double getSalary() const;
	int getYearsOfExperience() const;

public:
	 static double calcTax( double wynagrodzenieBrutto, double kwotaWolna, double kosztyUzyskaniaPrzychodu, double wysokoscPodatku );
	virtual double getBrutto() = 0;
	virtual double calcTax() = 0;
	virtual string getPosition() = 0;
	void printWorker();

private:
	double m_Salary;
	int m_YearsOfExperience;
};

