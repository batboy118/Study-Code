#include <iostream>
using namespace std;
#include <cstdlib>

#include "Fraction.h"


CFraction::CFraction()
{
	m_nNumerator   = 0;
	m_nDenominator = 1;
}//CFraction::CFraction()


void CFraction::store( int nNumer, int nDenom )
{
	m_nNumerator   = nNumer;
	m_nDenominator = nDenom;
	return;
}//CFraction::store

void CFraction::print() const
{
	cout<< m_nNumerator << "/" << m_nDenominator << endl;
	return;
}//CFraction::print

