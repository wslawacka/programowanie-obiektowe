#include <iostream>
using namespace std;

#include "SchoolBoy.h"
#include "SchoolGirl.h"
#include "Worker.h"
#include "Teacher.h"
#include "Admin.h"

#define MAXPUPIL 9
#define MAXWORKER 9

void printPupils( Pupil** tab, int pupil );

void sortPupils( Pupil** tab, int pupil );

void printWorkers( Worker** tab, int size );

int main()
{
    Pupil* pupils[MAXPUPIL] = { nullptr };
    Pupil* v = NULL;

    pupils[0] = v = new SchoolGirl( "Jablko Anna", 12, "3A" );

    v->setNote( POLSKI, 4 );
    v->setNote( MATEMATYKA, 3 );
    v->setNote( FIZYKA, 3 );
    v->setNote( CHEMIA, 5 );
    v->setNote( INFORMATYKA, 5 );
    v->setNote( ANGIELSKI, 4 );

    sortPupils( pupils, 1 );
    printPupils( pupils, 1 );

    Worker* workers[MAXWORKER] = { nullptr };

    workers[0] = new Teacher( "Koper Adam", 45, 6000, 17, MATEMATYKA, "2a" );
    workers[1] = new Teacher( "Banan Karolina", 34, 4000, 6, NIEMIECKI );
    workers[2] = new Teacher( "Kowalski Karol", 29, 3000, 1, POLSKI );
    workers[3] = new Teacher( "Nowak Klaudia", 51, 9000, 23, ANGIELSKI, "3b" );
    workers[4] = new Teacher( "Wiadro Zbigniew", 60, 8000, 32, MATEMATYKA, "1c" );
    workers[5] = new Teacher( "Gruszka Anna", 35, 4000, 8, NIEMIECKI );
    workers[6] = new Admin( "Ogorek Halina", 61, 6000, 26, STARSZY_SPECJALISTA );
    workers[7] = new Admin( "Piotrowski Jan", 43, 4000, 15, SPECJALISTA );
    workers[8] = new Admin( "Wasowski Henryk", 35, 3000, 5, MLODSZY_SPECJALISTA );

    printWorkers( workers, MAXWORKER );

    return 0;
}

void printPupils( Pupil** tab, int size ) 
{
    for ( int i = 0; i < size; i++ ) {
        tab[i]->printPupil();
    }
}

void sortPupils( Pupil** tab, int size ) 
{
    for ( int i = 0; i < size; i++ ) {
        int j = i - 1;
        Pupil* v = tab[i];

        while ( j > 0 && tab[j]->getName() < v->getName() ) {
            tab[j + 1] = tab[j--];
        }

        tab[j + 1] = v;
    }
}

void printWorkers( Worker** tab, int size )
{
    for ( int i = 0; i < size; i++ ) {
        tab[i]->printWorker();
    }
}

