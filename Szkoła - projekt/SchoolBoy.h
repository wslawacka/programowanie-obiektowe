#pragma once
#include "Pupil.h"

class SchoolBoy :
    public Pupil
{
public:
    SchoolBoy( string name="", int age=0, string className="" );
    virtual ~SchoolBoy() {}

    virtual void printOutfit() final;
};

