#pragma once
#include "Worker.h"

typedef enum { MLODSZY_SPECJALISTA, SPECJALISTA, STARSZY_SPECJALISTA  } Stanowiska;

class Admin :
    public Worker
{
public:
    Admin( string name, int age, double salary, int yearsOfExperience, Stanowiska stanowisko );
    virtual ~Admin() {}

public:
    double calcTax() override;
    double getBrutto() override;
    string getPosition() override;

private:
    Stanowiska m_Stanowisko;
};

