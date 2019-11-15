#include <iostream>
#include "Fraction.h"
#include <iomanip>
using namespace std;

void getData( int& nNumer, int& nDenom );

int main()
{
//	cout << "This program creates a fraction."<<endl;

	int nNumer = 0;
	int nDenom = 0;

	getData( nNumer, nDenom );
	CFraction fr1( nNumer, nDenom );
	cout << "fr1 contains : ";
	fr1.print();

//	cout<<setw(20)<<"&fr1 = 0x"<</*fr1의 주소값*/<<endl;
	cout<<setw(20)<<"&fr1 = 0x"<<&fr1<<endl;
	//fr1의 printThisValue()메소드 호출
	fr1.printThisValue();

	//f1을 복사하는 복사생성자를 통한 fr2선언
	CFraction fr2( fr1 );
	cout << "fr2 contains : ";
	fr2.print();

//	cout<<setw(20)<<"&fr2 = 0x"<</*fr2의 주소 값*/<<endl;
	cout<<setw(20)<<"&fr2 = 0x"<<&fr2<<endl;
	//fr1의 printThisValue()메소드 호출
	fr2.printThisValue();

	cout<<endl<<endl;
	CFraction fr3( fr1 );
	CFraction fr4( fr1 );

//	cout<<setw(20)<<"&fr3 = 0x"<</*fr3의 주소 값*/<<endl;
	cout<<setw(20)<<"&fr3 = 0x"<<&fr3<<endl;
//	cout<<setw(20)<<"&fr4 = 0x"<</*fr4의 주소 값*/<<endl;
	cout<<setw(20)<<"&fr4 = 0x"<<&fr4<<endl;
	//fr3의 printThisValueWithArgument()메소드 호출
	fr3.printThisValueWithArgument( fr4 );

//	cout << "\nThinks you for using fractions."<<endl;
	return 0;
}

void getData( int& nNumer, int& nDenom )
{
	cout << "Please enter the numeratot   : ";
	cin >> nNumer;

	cout << "Please enter the denumeratot : ";
	cin >> nDenom;
}
