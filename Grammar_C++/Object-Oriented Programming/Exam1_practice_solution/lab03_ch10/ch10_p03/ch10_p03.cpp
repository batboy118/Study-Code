#include <iostream>
#include "Fraction.h"
using namespace std;

void getData( int& nNumer, int& nDenom );
void getData( int& nNumer );

int main()
{
	cout << "This program creates a fraction."<<endl;

	int nNumer = 0;
	int nDenom = 0;

	//기본 생성자에 의한 fr1선언
	CFraction fr1;
	getData( nNumer, nDenom );
	fr1.store( nNumer, nDenom );
	cout << "fr1 contains : ";
	fr1.print();

	getData( nNumer );
	//분자를 매개변수로 입력 받는 생성자에 의한 fr2선언
	CFraction fr2( nNumer );
	cout << "fr2 contains : ";
	fr2.print();

	getData( nNumer, nDenom );
	//분자, 분모를 매개변수로 입력 받는 생성자에 의한 fr3선언
	CFraction fr3( nNumer, nDenom );
	cout << "fr3 contains : ";
	fr3.print();

	//fr3를 복사하는 복사 생성자에 의한 fr4선언
	CFraction fr4( fr3 );
	cout << "fr4 contains : ";
	fr4.print();

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

void getData( int& nNumer )
{
	cout << "Please enter the numeratot   : ";
	cin >> nNumer;
}
