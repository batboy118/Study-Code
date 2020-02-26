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


void CFraction::store( int nNumer, int nDenom )
{
	m_nNumerator   = nNumer;
	m_nDenominator = nDenom;
	return;
}//CFraction::store

void CFraction::print() const
{
//	함수 뒤 const의 의미 확인
//	m_nNumerator   = 0;
//	m_nDenominator = 1;

	cout<< m_nNumerator << "/" << m_nDenominator << endl;
	return;
}//CFraction::print

