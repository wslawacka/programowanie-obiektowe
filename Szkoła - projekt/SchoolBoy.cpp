#include "SchoolBoy.h"

SchoolBoy::SchoolBoy(string name, int age, string className) : Pupil(name, age, className)
{
	m_ID = "M_" + m_ID; //m_ID protected w Pupil
}
void SchoolBoy::printOutfit()
{
	cout << "biala/niebieska koszula z krawatem, szkolna marynarka, polbuty, granatowa/czarna spodnie\n\n";
}