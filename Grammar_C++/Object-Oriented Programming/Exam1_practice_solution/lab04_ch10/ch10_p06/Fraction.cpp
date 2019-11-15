#include <iostream>
using namespace std;
#include <cstdlib>

#include "Fraction.h"


CFraction::CFraction()
{
	m_nNumerator   = 0;
	m_nDenominator = 1;
}//CFraction::CFraction()

CFraction::CFraction( int nNumer )
{
	m_nNumerator   = nNumer;
	m_nDenominator = 1     ;
}//CFraction::CFraction(int nNumer)

CFraction::CFraction( int nNumer, int nDenom )
{
	store(nNumer, nDenom);

}//CFraction::CFraction(int nNumer, int nDenom)


CFraction::CFraction( const CFraction& fr )
{
	m_nNumerator   = fr.m_nNumerator  ;
	m_nDenominator = fr.m_nDenominator;
}

int CFraction::GreatestComDiv( int nN1, int nN2 )
{
	if (nN2 == 0)
		return nN1;
	else
		return GreatestComDiv( nN2, nN1 % nN2 );
} 

void CFraction::store( int nNumer, int nDenom )
{
	if(nDenom == 0)
	{
		cout << "Can not divide by 0!" << endl;
		exit(100);
	}
	if(nDenom < 0)
	{
		nDenom = -nDenom;
		nNumer = -nNumer;
	}
	int nGcd = GreatestComDiv (abs(nNumer), abs(nDenom));
	this->m_nNumerator   = nNumer/nGcd;
	this->m_nDenominator = nDenom/nGcd;
	return;
}//CFraction::store

void CFraction::print() const
{
//	함수 뒤 const의 의미 확인
//	m_nNumerator   = 0;
//	m_nDenominator = 1;

	cout<< m_nNumerator << "/" << m_nDenominator;
	return;
}//CFraction::print


void CFraction::addTo( const CFraction& fr )
{
	this->m_nNumerator = this->m_nNumerator*fr.m_nDenominator + fr.m_nNumerator*this->m_nDenominator;
	this->m_nDenominator *= fr.m_nDenominator;

	*this = CFraction( m_nNumerator, m_nDenominator );
	return;
}

void CFraction::subtractTo( const CFraction& fr )
{
	this->m_nNumerator = this->m_nNumerator*fr.m_nDenominator - fr.m_nNumerator*this->m_nDenominator;
	this->m_nDenominator *= fr.m_nDenominator;

	*this = CFraction( m_nNumerator, m_nDenominator );
	return;
}

void CFraction::multiplyTo( const CFraction& fr )
{
	this->m_nNumerator   *= fr.m_nNumerator  ;
	this->m_nDenominator *= fr.m_nDenominator;

	*this = CFraction( m_nNumerator, m_nDenominator );
	return;
}

void CFraction::divideTo( const CFraction& fr )
{
	this->m_nNumerator   = this->m_nNumerator  *fr.m_nDenominator;
	this->m_nDenominator = this->m_nDenominator*fr.m_nNumerator  ;

	*this = CFraction( m_nNumerator, m_nDenominator );
	return;
}