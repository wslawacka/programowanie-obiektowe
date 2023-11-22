#include <iostream>
using namespace std;

#include "Vector.h"

int main()
{
    Vector v1( 2 );
    Vector v2( 4, 1 );
    Vector v3( 4, 2 );
    Vector v4( v2 );
    Vector v5 = v4;

    cout << "v1 = " << v1 << endl;
    cout << "Podaj dwie wspolrzedne wektora: ";
    cin >> v1;

    cout << "v1 = " << v1 << endl;
    cout << "v2 = " << v2 << endl;
    cout << "v3 = " << v3 << endl;
    cout << "v4 = " << v4 << endl;
    cout << "v5 = " << v5 << endl;

    cout << "v2+v3 = " << v2+v3 << endl;
    cout << "3+v3 = " << 3+v3 << endl;

    cout << "iloczyn sklarny v2*v3 = " << v2*v3 << endl;
    cout << "-2*v4 = " << -2*v4 << endl;

    double* p = ( double* )v3;
    cout << "\nrzutowanie v3 na p -- p[1] = " << *(p + 1) << "\n\n";   //p[1]

    Vector v = v2 + v3;
    cout << "v = v2 + v3 = " << v << endl;


    v3[0] += 3;
    cout << "v3[0] += 3; v3 = " << v3 << endl;

    v3[1]=4;
    cout << "v3[1] = 4; v3 = " << v3 << endl;

    v3[1] = v3[2] + v3[0];

    cout << "-v1 = " << -v1 << endl;
    cout << "v3 - 1 = " << v3-1 << endl;
    cout << "v3 - v2 = " << v3-v2 << endl;

    if ( v2 != v3 )
        cout << " v2 != v3 " << endl;
    else
        cout << " v2 == v3 " << endl;
    
    return 0;
}

