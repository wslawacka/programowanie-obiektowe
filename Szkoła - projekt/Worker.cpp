#include "Worker.h"

Worker::Worker( string name, int age, double salary, int yearsOfExperience ) : Person( name, age ) {
    m_Salary = salary;
    m_YearsOfExperience = yearsOfExperience;
}

double Worker::getSalary() const 
{
    return m_Salary;
}

int Worker::getYearsOfExperience() const
{
    return m_YearsOfExperience;
}

double Worker::calcTax( double wynagrodzenieBrutto, double kwotaWolna, double kosztyUzyskaniaPrzychodu, double wysokoscPodatku )
{
    double tax = ( wynagrodzenieBrutto - kosztyUzyskaniaPrzychodu ) * wysokoscPodatku - kwotaWolna;

    return ( tax > 0 )? tax : 0;
}

void Worker::printWorker()
{
    cout << getName() << endl << getPosition() << endl << "pensja brutto: " << getBrutto() << endl << "podatek: " << calcTax() << endl << "pensja netto: " << getBrutto() - calcTax() << endl << endl;
}