#include <iostream>
using namespace std;
#include <cstdlib>

#include "SmartPhone.h"


CSmartPhone::CSmartPhone( void )
{
	initName();
	m_nMemorySize = 0;
}

CSmartPhone::CSmartPhone( char* pName, int nMemorySize )
{
	initName();
	CopyName( pName );
	m_nMemorySize = nMemorySize;
}

void CSmartPhone::changeMemSize( int nMemorySize )
{
	m_nMemorySize = nMemorySize;
}

void CSmartPhone::changeOSName( char* pName )
{
	CopyName( pName );
}

void CSmartPhone::print( void ) const
{
	cout<< m_strName << endl;
	cout<< m_nMemorySize <<"GByte"<<endl;
}
	
void CSmartPhone::initName( void )
{
	int nCount = 0;
	while( nCount < 20 )
	{
		m_strName[nCount] = 0;
		nCount++;
	}
}

void CSmartPhone::CopyName( char* pName )
{
	int nCount = 0;
	while( nCount < 20 &&
		   pName[nCount] )
	{
		m_strName[nCount] = pName[nCount];
		nCount++;
	}
}