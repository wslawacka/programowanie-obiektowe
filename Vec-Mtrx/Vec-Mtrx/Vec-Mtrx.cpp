#include <iostream>
using namespace std;

#include "Vector.h"

int main()
{
    Vector v1;
    Vector v2( 4, 1 );
    Vector v3( 4, 2 );
    Vector v4( v2 );
    Vector v5 = v4;

    cout << "v1 = " << v1 << endl;
    cout << "v2 = " << v2 << endl;
    cout << "v3 = " << v3 << endl;
    cout << "v4 = " << v4 << endl;
    cout << "v5 = " << v5 << endl;


    return 0;
}

