#include <iostream>
#include "SmartPhone.h"
using namespace std;

void getPhone( char strName[], int& nMemSize );

int main()
{
	cout << "This program creates SmartPhons"<<endl;

	char strName[20] ={0};
	int  nMemorySize = 0 ;

	getPhone( strName, nMemorySize );
	//�Է� ���� ������ �̿��ϴ� �����ڸ� ���� TomPhone�� ����
	CSmartPhone TomPhone( strName, nMemorySize );
	TomPhone.print();

	//�⺻ �����ڸ� ���� MyPhone�� ����
	CSmartPhone MyPhone;
	MyPhone.print();
	//����Ʈ���� OS �̸��� �޸��� ũ�⸦ ȹ��
	getPhone( strName, nMemorySize );
	MyPhone.changeMemSize( nMemorySize );
	MyPhone.changeOSName( strName     );
	MyPhone.print();

	cout << "\nThinks you for using Smart Phones.\n";
	return 0;
}

void getPhone( char strName[], int& nMemSize )
{
	cout << "Please enter the Phone Name   : ";
	cin >> strName;

	cout << "Please enter the Memory Size  : ";
	cin >> nMemSize;
}