#include "Teacher.h"

Teacher::Teacher( string name , int age , double salary , int yearsOfExperience , Subjects subject, string className ) : Worker ( name, age, salary, yearsOfExperience )
{
	m_Subject = subject;
	m_ClassName = className;
}

string Teacher::getSubject()
{
	switch ( m_Subject ) {
	case POLSKI:
		return "jezyk polski";
	case MATEMATYKA:
		return "matematyka";
	case FIZYKA:
		return "fizyka";
	case CHEMIA:
		return "chemia";
	case INFORMATYKA:
		return "informatyka";
	case ANGIELSKI:
		return "jezyk angielski";
	case NIEMIECKI:
		return "jezyk niemiecki";
	}
}

bool Teacher::czyWychowawca()
{
	return m_ClassName != "";
}

double Teacher::calcTax()
{
	return Worker::calcTax( getBrutto(), KWOTA_WOLNA, getBrutto() * 0.8 * 0.5, 0.18 );
}

double Teacher::dodatekStazowy()
{
	int staz = getYearsOfExperience();

	if( staz < 5) return 0;
	else if( staz <= 20 ) return staz * getSalary() / 100;
	else return 20 * getSalary() / 100;
}

double Teacher::dodatekWychowawcy()
{
	return czyWychowawca()? 400 : 0;
}

double Teacher::getBrutto()
{
	return getSalary() + dodatekStazowy() + dodatekWychowawcy();
}

string Teacher::getPosition()
{
	return "nauczyciel przedmiotu: " + getSubject();
}