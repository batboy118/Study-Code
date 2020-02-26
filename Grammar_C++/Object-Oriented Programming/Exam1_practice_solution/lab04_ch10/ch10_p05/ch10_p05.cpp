#include <iostream>
#include "Fraction.h"
using namespace std;

void getData( int& nNumer, int& nDenom );

int main()
{
	cout << "Fraction computer."<<endl;

	int nNumer = 0;
	int nDenom = 0;
	int nMenu  = 1;

	while( nMenu )
	{
		cout<<"Please choose a operator item"<<endl;
		cout<<"0. Exit"<<endl<<"1. Add"<<endl<<"2. Subtract"<<endl
			<<"3. Multiply"<<endl<<"4. Divide"<<endl;
		cout<<"Operator item : "; cin>>nMenu;
		cout<<endl;

		if( nMenu == 0 ) continue;

		if( nMenu<0 || 4<nMenu )
		{
			cout<<"Please choose the correct menu item!"<<endl;
			continue;
		}

		cout<<"Please enter the first fraction."<<endl;
		getData( nNumer, nDenom );
		CFraction fr1( nNumer, nDenom );
		CFraction fr3( nNumer, nDenom );

		cout<<"Please enter the second fraction."<<endl;
		getData( nNumer, nDenom );
		CFraction fr2( nNumer, nDenom );
		cout<<endl;

		fr1.print();
		switch( nMenu )
		{
			//사칙 연산과정과 연산을 수행 할 수있는 코드 추가
		case 1:
			fr3.add( fr2 );
			cout << " + ";
			break;
		case 2:
			fr3.subtract( fr2 );
			cout << " - ";
			break;
		case 3:
			fr3.multiply( fr2 );
			cout << " * ";
			break;
		case 4:
			fr3.divide( fr2 );
			cout << " / ";
			break;
		}
		fr2.print();
		cout << " = ";
		fr3.print();

		cout<<endl<<endl;
	}

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
