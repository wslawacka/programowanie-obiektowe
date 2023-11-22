#include "Vector.h"

Vector::Vector( int nSize, int nInitVal ) {
	createVec( nSize ); //alokuje pamiec tablicy
	for( int i=0; i<nSize; i++ )
		m_pCoord[i] = nInitVal;
}
Vector::Vector( const Vector& v ) {
	m_nDim = 0;
	m_pCoord = NULL;
	*this = v;
}
Vector::~Vector() {
	delete [] m_pCoord;
}

Vector& Vector::operator = ( const Vector& v ) //v1=v
{
	if (this->getDim() != v.getDim())
	{
		if( m_pCoord ) delete [] m_pCoord;
		createVec( v.getDim() );
	}
	copyVec( v );
	return *this;
}

istream& operator >> ( istream& in, Vector& v ) //cin>>v
{
	return in;
}
ostream& operator << ( ostream& out, const Vector& v ) //cout<<v
{
	out << '[';
	for( int i=0; i<v.getDim(); i++ )
		out << v.m_pCoord[i] << ( ( i<v.getDim()-1 ) ? "," : "");
	out << ']';
	return out;
}

const Vector operator + (const Vector& v1, const Vector& v2) //v1+v2
{
	Vector res( v1 );
	return res += v2;
}
const Vector operator + (const Vector& v, double x) //v1+x
{
	Vector res( v );
	return res += x;
}
const Vector operator + (double x, const Vector& v) //x+v1
{
	return v + x;
}
Vector& operator += (const Vector& v) //v1+=v2
{
	return *this;
}
Vector& operator += (double x) //v+=x
{
	return *this;
}
