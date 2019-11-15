#include <iostream>
using namespace std;
#include <cstdlib>

#include "Funny.h"

//CFunny:CFunny( int nNum )
CFunny::CFunny( int nNum )//변경
{
	m_nNum = nNum;
}

CFunny::CFunny( void )//추가
{
	m_nNum = 0;
}

CFunny::CFunny( const CFunny& fn )//추가
{
	m_nNum = fn.m_nNum;
}

//CFunny:~CFunny{ void }
CFunny::~CFunny( void )//변경
{
}

int* CFunny::GetNum( void )//추가
{
	return &m_nNum;
}

//void CFunny:Print( void ) const
void CFunny::Print( void ) const//변경
{
//	m_nNum = 1;삭제
	cout<<m_nNum<<endl;
}
