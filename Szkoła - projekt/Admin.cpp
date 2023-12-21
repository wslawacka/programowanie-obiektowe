#include "Admin.h"

Admin::Admin( string name, int age, double salary, int yearsOfExperience, Stanowiska stanowisko) : Worker( name, age, salary, yearsOfExperience ) 
{   
	m_Stanowisko = stanowisko;
}

double Admin::calcTax()
{
    return Worker::calcTax( getBrutto(), KWOTA_WOLNA, KOSZTY_UZYSKANIA_PRZYCHODU, 0.18 );
}

double Admin::getBrutto()
{
	return getSalary();
}

string Admin::getPosition()
{
	switch ( m_Stanowisko ) {
	case MLODSZY_SPECJALISTA:
		return "mlodszy specjalista";
	case SPECJALISTA:
		return "specjalista";
	case STARSZY_SPECJALISTA:
		return "starszy specjalista";
	}
}