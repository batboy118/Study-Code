#include <iostream>
#include "Fraction.h"
using namespace std;

void getData( int& nNumer, int& nDenom );


void store( int nNumer, int nDenom, CFraction &fr )
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
	int nGcd = fr.GreatestComDiv (abs(nNumer), abs(nDenom));
	fr.m_nNumerator   = nNumer/nGcd;
	fr.m_nDenominator = nDenom/nGcd;
	return;
}

void print( const CFraction& fr )
{
	cout<< fr.m_nNumerator << "/" << fr.m_nDenominator;
	return;

}


int main()
{
	cout << "This program creates a fraction."<<endl;

	int nNumer = 0;
	int nDenom = 0;

	getData( nNumer, nDenom );

	CFraction fr1;
	store( nNumer, nDenom, fr1 );
	cout << "fr1 contains : ";
	print( fr1 );

	cout << "\nThinks you for using fractions."<<endl;
	return 0;
}

void getData( int& nNumer, int& nDenom )
{
	cout << "Please enter the numeratot   : ";
	cin >> nNumer;

	cout << "Please enter the denumeratot : ";
	cin >> nDenom;
}
