#pragma once
#include "Person.h"

typedef enum { POLSKI, MATEMATYKA, FIZYKA, CHEMIA, INFORMATYKA, ANGIELSKI, NIEMIECKI } Subjects;

#define MAXSUBJECTS NIEMIECKI+1

class Pupil :
    public Person
{
public:
    explicit Pupil( string name="", int age=0, string className="" ) noexcept;
    virtual ~Pupil(){}

protected:
    string m_ID;

private:
    static int m_BaseID; //zdefiniowane i zainicjowane w pliku cpp
    string m_ClassName;
    double m_Notes[MAXSUBJECTS];
    double m_Ave;

public:
    void setClassName( string newClassName );
    string getClassName() const;
    string getID() const;
    void clearNotes(); //zeruje oceny
    void setNote( Subjects subject, double note );
    double calcAve(); //bez parametrow
    double getAve();
    virtual void printOutfit(){ cerr<<"error\n"; } //bez parametrow
    void printPupil();
};

inline void Pupil::setClassName( string newClassName )
{
    m_ClassName = newClassName;
}
inline string Pupil::getClassName() const
{
    return m_ClassName;
}
inline string Pupil::getID() const
{
   return m_ID;
}
inline double Pupil::getAve()
{
    return m_Ave;
}