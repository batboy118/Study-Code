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
	//����, �и� �Ű������� �Է� �޴� �����ڿ� ���� fr1����
	//�и� 0�� ��� ���� �޽��� ��� �� ���α׷� ����
	CFraction fr1( nNumer, nDenom );
	cout << "fr1 contains : ";
	fr1.print();

	//�⺻ �����ڿ� ���� fr1����
	CFraction fr2;
	getData( nNumer, nDenom );
	//�и� 0�� ��� ���� �޽��� ��� �� ���α׷� ����
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
