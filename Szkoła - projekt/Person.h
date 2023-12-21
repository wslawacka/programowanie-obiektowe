#pragma once
#include <iostream>
using namespace std;
#include <string>


class Person
{
public:
	Person( string name="", int age=0 );
	virtual ~Person(){} 
	Person& operator = ( const Person& p ) = default;

private:
	string m_Name;
	int m_Age;

public:
	void setPerson( string newName, int newAge );
	void setName( string newName );
	void setAge( int newAge );
	string getName() const;
	int getAge() const;
};

inline void Person::setPerson( string newName, int newAge ) {
	setName( newName );
	setAge( newAge );
}
inline void Person::setName( string newName ) {
	m_Name = newName;
}
inline void Person::setAge( int newAge ) {
	m_Age = newAge;
}
inline string Person::getName() const {
	return m_Name;
}
inline int Person::getAge() const {
	return m_Age;
}
