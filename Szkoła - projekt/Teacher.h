#pragma once
#include "Pupil.h"
#include "Worker.h"

class Teacher :
    public Worker
{
public:
    Teacher( string name = "", int age = 0, double salary = 0, int yearsOfExperience = 0, Subjects subject = POLSKI, string className = "" );
    virtual ~Teacher() {}

public:
    string getSubject();

public:
    bool czyWychowawca();
    double dodatekStazowy();
    double dodatekWychowawcy();
    double calcTax() override;
    double getBrutto() override;
    string getPosition() override;

private:
    Subjects m_Subject;
    string m_ClassName = "";
};

