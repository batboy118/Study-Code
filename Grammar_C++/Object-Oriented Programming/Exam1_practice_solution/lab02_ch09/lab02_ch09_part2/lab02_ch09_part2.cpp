/** 
Lecture 9-2 Pointer Practice 2 

실습 목표 : 포인터와 배열

1. 배열에 대한 이해를 바탕으로 배열과 포인터의 관계 이해
2. 매개 변수로의 배열의 활용
3. 포인터를 이용한 1,2차원 배열의 활용
4. 동적할당을 통한 포인터 배열의 활용
**/

#include <iostream>
#include <iomanip>
using namespace std;

// function : 입력받은 배열의 각 원소에 2를 곱하는 함수 
// input : 배열의 주소 (포인터 사용)
void multiplyPtr(int* pAry, int size);

// function : 입력받은 배열의 사이즈를 출력하는 함수 
// input : 배열의 주소
void checkSize(int* pAry, int Ary[]);

// function : 2차원 배열에 대한 행과 열의 개수에 대한 정보를 입력 받아 포인터의 배열을 동적할당하여 포인터의 배열을 반환하는 함수
// input : 행의 개수, 각 행의 열 개수가 저장된 배열, 배열의 길이
// return : 불규칙한 열을 가진 2차원 포인터 배열
int** buildTable(int rowNum, int columnSizeAry[], int arySize);

// function : 포인터의 배열을 입력받아 각 행의 원소를 채우는 함수
// input : 포인터의 배열
void fillTable(int** table);

//function : 포인터의 배열을 입력 받아 출력하는 함수(포인터 오프셋 연산 사용)
// input : 포인터의 배열
void printTable(int ** table);

int main()
{
	/*
	//----------------------------------------------------------
	//							실습 1
	//	목표 : 배열의 주소 이해 - 배열의 원소값 및 주소값 출력
	//	       
	//----------------------------------------------------------
	int Ary[5] = {10, 20, 30, 40, 50};	

	cout << setw(20) << "Print Element";
	for( int i=0; i<5; i++ )
	cout << setw(10) << Ary[i];
	cout << endl;

	cout <<  setw(20) << "Address of Element";
	for( int i=0; i<5; i++ )
	cout << setw(10) << &Ary[i];

	cout <<  setw(30) << "Size of Memory";
	for( int i=0; i<5; i++ )
	cout << setw(10) << sizeof(&Ary[i]);
	cout << endl;

	char *answer = "배열 원소의 주소 공간의 크기 및 주소 간 간격에 대한 의미를 여기에 설명";
	cout << answer << endl;
	*/

	/*
	//----------------------------------------------------------
	//							실습 2
	//	목표 : 배열명과 포인터 – 배열 이름의 역참조와 포인터로서의 
	//	배열의 이름 이해
	//----------------------------------------------------------
	int Ary[5] = {10, 20, 30, 40, 50};	

	cout << setw(20) << "Print Element";
	for( int i=0; i<5; i++ )
	cout << setw(10) << Ary[i];
	cout << endl;

	cout <<  setw(20) << "Address of Element";
	for( int i=0; i<5; i++ )
	cout << setw(10) << &Ary[i];
	cout << endl;

	cout << setw(10) << "Ary = " << Ary << endl;			// '배열명'의 출력
	cout << setw(10) << "&Ary[0] = " << &Ary[0] << endl;	// '첫 번째 원소'의 주소 출력

	int* pAry = Ary;										// 포인터를 배열의 이름으로 초기화 - 그 의미를 생각해 볼 것
	cout << setw(10) << "pAry = " << pAry << endl;			// 포인터로서의 배열 이름 출력
	cout << setw(10) << "*pAry = " << *pAry << endl;		// 간접 연산자(*)를 통해 배열의 첫 번째 요소 접근
	cout << setw(10) << "*Ary = " << *Ary << endl;			// 배열명에 간접 연산자(*)을 통한 역참조
	cout << setw(10) << "pAry[0] = " << pAry[0] << endl;	// 포인터를 이용한 배열 첨자 연사자([])
	*/


	/*
	//----------------------------------------------------------
	//							실습 3
	//	목표 : 포인터 산술 연산과 배열 - 오프셋 연산을 통한 배열 접근
	//----------------------------------------------------------
	int Ary[5] = {10, 20, 30, 40, 50};	
	int* pAry = Ary;

	cout << setw(23) << "포인터 산술연산";
	for( int k=0; k<5; k++ )
	cout << setw(9) << "pAry+" << k;                   // 포인터 산술 연산 표현
	cout << endl;

	cout <<  setw(23) << "포인터 산술연산 결과";
	for( int k=0; k<5; k++ )
	cout << setw(10) << pAry+k;                         // 포인터 산술연산 결과
	cout << endl;

	cout <<  setw(23) << "배열 포인터 역참조";
	for( int k=0; k<5; k++ )
	cout << setw(10) << *(pAry+k);                      // 배열 포인터 역참조를 통한 배열 원소 접근
	cout << endl;

	cout <<  setw(23) << "포인터에 배열 첨자 연산";
	for( int k=0; k<5; k++ )
	cout << setw(10) << pAry[k];						// 포인터를 이용한 배열 첨자 연산
	cout << endl;
	*/

	/*
	//----------------------------------------------------------
	//							쉬어가는 코너
	//				타입에 따른 오프셋 연산 결과의 차이
	//----------------------------------------------------------
	int a[3];						int* pa = a;
	short int b[3];					short int* pb = b;
	char c[3];						char* pc = &c[1];  // 원소[1]의 주소로 초기화
	float d[3];						float* pd = d;
	*/



	//----------------------------------------------------------
	//							실습 4
	//	목표 : 함수 매개 변수로서의 배열 – 매개 변수로서 배열의 
	//	전달 방법과 매개변수로서 배열 표기법의 실제 의미를 이해한다.
	//----------------------------------------------------------
	/*
	int Ary[ ] = { 10, 20, 30, 40, 50};

	int* pAry = Ary;

	int arySize = sizeof(Ary)/sizeof(Ary[0]);
	multiplyPtr(Ary, arySize);				// 배열의 각 원소에 2를 곱하는 함수

	// (코드 작성)포인터를 이용한 배열의 출력코드
	int* pLast = Ary + arySize -1;
	for(int* pWalk = Ary; pWalk <= pLast; pWalk++)
	cout << setw(4) << *pWalk;
	cout << endl;

	// 배열의 매개변수 형식에 따른 매개변수 크기의 차이 여부 확인 
	checkSize(pAry, Ary);
	cout << setw(35) << "main() : sizeof(배열명 Ary) = " << sizeof(Ary) << endl;		// 출력된 Ary 사이즈의 의미 파악할 것
	char* answer = "Answer : 크기 차이 여부를 확인하고 그 이유를 여기에 작성";
	cout << answer << endl;
	*/


	/*
	//----------------------------------------------------------
	//							실습 5
	//	목표 : 메모리 할당 함수 – 동적 메모리 할당 방법에 대하여 
	//	이해하고 활용하자.
	//----------------------------------------------------------

	int Dsize;
	cout << "Enter a size of the array : ";
	cin >> Dsize;
	int* Dary = new int [Dsize];     // (코드 작성) 동적 배열 할당

	// (코드 작성) 배열 채우기(포인터 간접 연산자 활용)
	int* pLast = Dary + Dsize -1;
	cout << "Enter a Number of each Element : " ;
	for(int* pWalk = Dary; pWalk <= pLast; pWalk++)
	cin >> *pWalk;

	// (코드 작성) 배열 출력하기(포인터에 배열 첨자 연산자 활용)
	for(int i=0; i<Dsize; i++)
	cout << setw(4) << Dary[i];
	cout << endl;

	delete [] Dary;					// (코드 작성) 동적 배열 메모리 해제
	*/


	
	//----------------------------------------------------------
	//							실습 6
	//	목표 : 포인터를 이용한 2차원 동적 배열의 할당 방법과 
	//	그 활용법을 익힌다. 
	//----------------------------------------------------------

	int nRows = 3;
	int columnSizeAry[] = {2, 5, 1};			// 배열 초기화
	int arySize = sizeof(columnSizeAry)/sizeof(columnSizeAry[0]);

	int** table = buildTable(nRows, columnSizeAry, arySize);	//buildTable() 구현
	fillTable(table);											//fillTable() 구현	
	printTable(table);
	

	return 0;	
}

// function : 입력받은 배열의 각 원소에 2를 곱하는 함수 
// input : 배열의 주소 (포인터 사용), 배열 길이
void multiplyPtr(int* pAry, int size)
{
	int* pLast = pAry + size - 1;
	for(int* pWalk = pAry; pWalk <= pLast; pWalk++)
		*pWalk = *pWalk * 2;
}

// function : 배열을 입력 받아 sizeof()함수를 이용한 배열명, 포인터의 사이즈 출력
// input : 배열의 주소 (배열 표기법 사용)
void checkSize(int* pAry, int Ary[])
{
	cout <<  "checkSize() : sizeof(포인터 pAry) = " << sizeof(pAry) << endl;		// 사이즈가 갖는 의미 파악
	cout <<  "checkSize() : sizeof(배열명 Ary) = " << sizeof(Ary) << endl;		// 사이즈가 갖는 의미 파악
}

/* 포인터의 배열을 통한 2차원 불규칙한(각 행의 원소의 개수가 다른) 동적 할당 테이블 만들기
pre		-
post	테이블에 대한 포인팅 포인터
return	테이블에 대한 포인팅 포인터
*/
int** buildTable(int rowNum, int columnSizeAry[], int arySize)
{
	int** table;
	table = new int* [rowNum+1];            // (행의 개수+1)만큼 배열 할당

	int row, col;

	for(row = 0, col=0; row < rowNum, col<arySize; row++, col++)
	{
		int tmpColSize = columnSizeAry[col];
		cout << "Size of column in row " << row+1 << ": " << tmpColSize << endl;

		table[row] = new int [tmpColSize];			// (열의 개수+1)만큼 배열 할당
		table[row][0] = tmpColSize;					// 각 행의 첫 원소에 열의 개수 저장
	}
	table[row] = NULL;								// NULL 로 초기화(마지막 행 구분)

	return table;
}

/* 테이블 채우기
pre		포인터의 배열
post	채워진 테이블
*/

void fillTable(int** table)
{
	cout << "For each row enter a eumber";

	int row=0;
	while(table[row] != NULL)
	{
		cout <<"\n row " << row+1
			<<" (" << table[row][0] << " integers) ========>";

		for(int column=1; column<=table[row][0]; column++)
			cin >> table[row][column];
		row++;
	}
	return;
}

/* 테이블 출력하기
pre		포인터의 배열
post	배열 출력
*/

void printTable(int ** table)
{
	int row = 0;

	cout << "\n Print Array => " << endl;
	while( *(table+row) != NULL ){
		for( int col=1; col <= **(table+row); col++ )
			cout << setw(10) << *(*(table+row)+col) ;
		cout << endl;
		row++;
	}	
}
