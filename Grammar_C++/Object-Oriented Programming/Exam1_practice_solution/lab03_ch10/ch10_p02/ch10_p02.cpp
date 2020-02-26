#include <iostream>
#include "Fraction.h"
using namespace std;

void getData( int* nNumer, int* nDenom );

int main()
{
	cout << "This program creates a fraction.\n\n";

	int nNumer = 0;
	int nDenom = 0;
	getData( &nNumer, &nDenom );

	CFraction fr;
	fr.store( nNumer, nDenom );
	cout << "\nYour fraction contains : ";
	fr.print();

	cout << "\nThinks you for using fractions.\n";
	return 0;
}

void getData( int* nNumer, int* nDenom )
{
	cout << "Please enter the numeratot   : ";
	cin >> *nNumer;

	cout << "Please enter the denumeratot : ";
	cin >> *nDenom;
}