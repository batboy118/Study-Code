#include <iostream>
#include "Fraction.h"
using namespace std;

void getData( int& nNumer, int& nDenom );

int main()
{
	cout << "This program creates a fraction."<<endl;

	int nNumer = 0;
	int nDenom = 0;

	getData( nNumer, nDenom );
	//분자, 분모를 매개변수로 입력 받는 생성자에 의한 fr1선언
	//분모가 0일 경우 에러 메시지 출력 후 프로그램 종료
	CFraction fr1( nNumer, nDenom );
	cout << "fr1 contains : ";
	fr1.print();

	//기본 생성자에 의한 fr1선언
	CFraction fr2;
	getData( nNumer, nDenom );
	//분모가 0일 경우 에러 메시지 출력 후 프로그램 종료
	fr2.store( nNumer, nDenom );
	cout << "fr2 contains : ";
	fr2.print();

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
