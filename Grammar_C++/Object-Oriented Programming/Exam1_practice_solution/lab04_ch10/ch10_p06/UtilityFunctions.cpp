#include "Fraction.h"

CFraction add( const CFraction& fr1, const CFraction& fr2 )
{
	int nNumerator    = fr1.m_nNumerator*fr2.m_nDenominator + 
		                fr2.m_nNumerator*fr1.m_nDenominator;
	int nDenominator  = fr1.m_nDenominator * fr2.m_nDenominator;

	return CFraction( nNumerator, nDenominator );
}

CFraction subtract ( const CFraction& fr1, const CFraction& fr2 )
{
	int nNumerator   = fr1.m_nNumerator*fr2.m_nDenominator - fr2.m_nNumerator*fr1.m_nDenominator;
	int nDenominator = fr1.m_nDenominator * fr2.m_nDenominator;

	return CFraction( nNumerator, nDenominator );
}

CFraction multiply ( const CFraction& fr1, const CFraction& fr2 )
{
	int nNumerator   = fr1.m_nNumerator  *fr2.m_nNumerator  ;
	int nDenominator = fr1.m_nDenominator*fr2.m_nDenominator;

	return CFraction( nNumerator, nDenominator );
}

CFraction divide   ( const CFraction& fr1, const CFraction& fr2 )
{
	int nNumerator   = fr1.m_nNumerator   * fr2.m_nDenominator;
	int nDenominator = fr1.m_nDenominator * fr2.m_nNumerator  ;

	return CFraction( nNumerator, nDenominator );
}
