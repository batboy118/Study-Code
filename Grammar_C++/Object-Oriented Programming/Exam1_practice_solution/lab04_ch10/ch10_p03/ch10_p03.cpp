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

//	cout<<setw(20)<<"&fr1 = 0x"<</*fr1�� �ּҰ�*/<<endl;
	cout<<setw(20)<<"&fr1 = 0x"<<&fr1<<endl;
	//fr1�� printThisValue()�޼ҵ� ȣ��
	fr1.printThisValue();

	//f1�� �����ϴ� ��������ڸ� ���� fr2����
	CFraction fr2( fr1 );
	cout << "fr2 contains : ";
	fr2.print();

//	cout<<setw(20)<<"&fr2 = 0x"<</*fr2�� �ּ� ��*/<<endl;
	cout<<setw(20)<<"&fr2 = 0x"<<&fr2<<endl;
	//fr1�� printThisValue()�޼ҵ� ȣ��
	fr2.printThisValue();

	cout<<endl<<endl;
	CFraction fr3( fr1 );
	CFraction fr4( fr1 );

//	cout<<setw(20)<<"&fr3 = 0x"<</*fr3�� �ּ� ��*/<<endl;
	cout<<setw(20)<<"&fr3 = 0x"<<&fr3<<endl;
//	cout<<setw(20)<<"&fr4 = 0x"<</*fr4�� �ּ� ��*/<<endl;
	cout<<setw(20)<<"&fr4 = 0x"<<&fr4<<endl;
	//fr3�� printThisValueWithArgument()�޼ҵ� ȣ��
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
