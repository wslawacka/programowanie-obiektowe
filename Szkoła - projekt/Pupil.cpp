#include "Pupil.h"
#include <memory.h>

int Pupil::m_BaseID = 10000;

Pupil::Pupil( string name, int age, string className ) noexcept : Person( name, age ) 
{
	clearNotes();
	m_ClassName = className;
	m_ID = to_string( m_BaseID++ );
}
void Pupil::clearNotes()
{
	memset( this->m_Notes, 0, sizeof( this->m_Notes ) );
}
double Pupil::calcAve()
{
	int noteNo = 0;
	double sum = 0;
	for ( int sub = POLSKI; sub <= MAXSUBJECTS; sub++ ) {
		if ( m_Notes[sub] > 1 ) {
			sum += m_Notes[sub];
			noteNo++;
		}
	}
	return m_Ave = ( noteNo )? sum/noteNo : 0;
}


void Pupil::setNote( Subjects subject, double note )
{
	if ( subject >= POLSKI && subject < MAXSUBJECTS && note >= 2 && note <= 5 )
	{
		m_Notes[subject] = note;
	}
}

void Pupil::printPupil(){
	cout << getID() << ' ' << getName() << " (" << getClassName() << ")" << endl << getAge() << " lat" << endl;
	cout << "average = " << calcAve() << endl;
	cout << '\t';
	printOutfit();
}