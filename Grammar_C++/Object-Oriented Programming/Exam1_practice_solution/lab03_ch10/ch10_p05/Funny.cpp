#include <iostream>
using namespace std;
#include <cstdlib>

#include "Funny.h"

//CFunny:CFunny( int nNum )
CFunny::CFunny( int nNum )//����
{
	m_nNum = nNum;
}

CFunny::CFunny( void )//�߰�
{
	m_nNum = 0;
}

CFunny::CFunny( const CFunny& fn )//�߰�
{
	m_nNum = fn.m_nNum;
}

//CFunny:~CFunny{ void }
CFunny::~CFunny( void )//����
{
}

int* CFunny::GetNum( void )//�߰�
{
	return &m_nNum;
}

//void CFunny:Print( void ) const
void CFunny::Print( void ) const//����
{
//	m_nNum = 1;����
	cout<<m_nNum<<endl;
}
