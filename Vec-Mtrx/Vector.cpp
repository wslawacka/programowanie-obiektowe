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
	for (int i = 0; i < v.getDim(); i++)
		in >> v.m_pCoord[i];
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

const Vector operator + ( const Vector& v1, const Vector& v2 ) //v1+v2
{
	Vector res( v1 );
	return res += v2;
}
const Vector operator + ( const Vector& v, double x ) //v1+x
{
	Vector res( v );
	return res += x;
}
const Vector operator + ( double x, const Vector& v ) //x+v1
{
	return v + x;
}
Vector& Vector::operator += ( const Vector& v ) //v1+=v2
{
	if (this->getDim() != v.getDim())
	{
		cerr << "Incompatible vector sizes!\n";
		return *this;
	}
	for( int i=0; i<getDim(); i++ )
		m_pCoord[i] += v.m_pCoord[i];
	return *this;
}
Vector& Vector::operator += ( double x ) //v+=x
{
	for( int i=0; i<getDim(); i++ )
		m_pCoord[i] += x;
	return *this;
}



const Vector operator - ( const Vector& v1, const Vector& v2 ) //v1-v2
{
	Vector res( v1 );
	return res -= v2;
}
const Vector operator - ( const Vector& v, double x ) //v1-x
{
	Vector res( v );
	return res -= x;
}
Vector& Vector::operator -= ( const Vector& v ) //v1-=v2
{
	if ( this->getDim() != v.getDim() )
	{
		cerr << "Incompatible vector sizes!\n";
		return *this;
	}
	for ( int i = 0; i < getDim(); i++ )
		m_pCoord[i] -= v.m_pCoord[i];
	return *this;
}
Vector& Vector::operator -= ( double x ) //v-=x
{
	for ( int i = 0; i < getDim(); i++ )
		m_pCoord[i] -= x;
	return *this;
}

const Vector operator - ( const Vector& v ) //-v
{
	Vector res( v );
	return res*( -1 );
}

const Vector operator * ( const Vector& v, double x ) //v*x
{
	Vector res( v );
	return res *= x;
}
const Vector operator * ( double x, const Vector& v ) //x*v
{
	return v * x;
}
Vector& Vector::operator *= ( double x )
{
	for ( int i = 0; i < getDim(); i++ )
		m_pCoord[i] *= x;
	return *this;
}
double operator * ( const Vector& v1, const Vector& v2 )
{
	if ( v1.getDim() != v2.getDim() )
	{
		cerr << "Incompatible vector sizes!\n";
		return 0;
	}

	double res = 0;
	for ( int i = 0; i < v1.getDim(); i++ )
		res += ( v1.m_pCoord[i] * v2.m_pCoord[i] );
	return res;
}
double& Vector::operator[]( int ix ) //v[2]=3
{
	if ( ix < 0 || ix >= getDim() ) {
		cerr << "Index out of range!\n";
		return m_pCoord[0];
	}
	return m_pCoord[ix];
}
const double& Vector::operator[]( int ix ) const //double x=v[1]
{
	if ( ix < 0 || ix >= getDim() ) {
		cerr << "Index out of range!\n";
		return m_pCoord[0];
	}
	return m_pCoord[ix];
}
bool operator == ( const Vector& v1, const Vector& v2 ) //v1==v2?
{
	if( v1.getDim() != v2.getDim() )
		return false;
	for ( int i = 0; i < v1.getDim(); i++ ) {
		if( v1.m_pCoord[i] != v2.m_pCoord[i] )
			return false;
	}
	return true;
}
bool operator != ( const Vector& v1, const Vector& v2 ) //v1!=v2?
{
	return !( v1==v2 );
}
