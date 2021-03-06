/** 
	Lecture 9-1 Pointer Practice 1 

	실습 목표 : 포인터의 개념 이해와 활용

	1. 포인터의 선언과 초기화
	2. 매개변수 전달 방식에 따른 값의 변화와 포인터의 값 읽고 쓰기
		1) Call by Value
		2) Call by Reference
		3) Call by Address(Pointer)
	3. 포인터 반환 함수의 구현과 활용
	
**/

#include <iostream>
#include <iomanip>
using namespace std;

// function : 입력받은 정수형 포인터 3개 중 가장 큰 값을 가리키는 포인터 변수 반환 
// input : 정수형 성적 변수의 정수형 포인터 3개
// return : 가장 높은 성적을 가리키는 포인터
int* topGrade(int* px, int* py, int* pz);   

// function : 입력된 두개의 변수값을 서로 바꿈(Call by Value)
// input : 정수형 변수 2개
void swapValue (int x,int y);

// function : 입력된 두개의 변수값을 서로 바꿈(call by reference)
// input : 정수형 변수의 주소값 2개
void swapRef (int& x, int& y);

// function : 입력된 두개의 변수값 서로 바꿈(call by Address)
// input : 정수형 변수의 주소값 2개
void swapAddr (int* x, int* y);

// function : 입력된 두개의 변수를 가리키는 주소를 서로 바꿈
// input : 정수형 변수를 가리키는 주소값 2개
void swapDptr (int** x, int** y);

// function : 입력된 두개의 변수를 가리키는 주소를 서로 바꿈
// input : 정수형 변수를 가리키는 주소값 2개
void swapRefPtr (int*& x, int*& y);


int main()
{
	/*
	//-------------------------------------------------------------------------------------------------
	//												실습 1
	//	목표 : 포인터 변수 기본 사용법을 익히고 , 정수형 포인터 변수 값과 
	//	       정수형 변수가 저장된 메모리 주소값의 비교를 통해 포인터의 의미를 이해
	//-------------------------------------------------------------------------------------------------

	// 3개의 성적 변수 선언
	int grade1=0;
	int grade2=0;
	int grade3=0;
	
	
	// 3명의 학생에 대한 포인터 변수 선언
	int* pgrade1;
	int* pgrade2;
	int* pgrade3;

	// 각 포인터 변수 초기화
	pgrade1 = &grade1;
	pgrade2 = &grade2;
	pgrade3 = &grade3;
	
	cin >> grade1 >> grade2 >> grade3;
	
	// 각 변수의 값, 변수의 주소값, 포인터 변수 값, 포인터 변수의 주소값 출력 및 비교
	cout << "Value : grade1 = " << setw(8) << grade1 << "  *pgrade1 = " << setw(8) << *pgrade1 << "  *&grade1 = " << setw(8) << *&grade1 << endl;
	cout << "Addr  : &grade1 = " << &grade1 << "  pgrade1 = " << pgrade1 << "   &pgrad1 = " << &pgrade1 << endl;
	cout << "Value : grade2 = " << setw(8) << grade2 << "  *pgrade2 = " << setw(8) << *pgrade2 << "  *&grade2 = " << setw(8) << *&grade2 << endl;
	cout << "Addr  : &grade2 = " << &grade2 << "  pgrade2 = " << pgrade2 << "   &pgrad2 = " << &pgrade2 << endl;
	cout << "Value : grade3 = " << setw(8) << grade3 << "  *pgrade3 = " << setw(8) << *pgrade3 << "  *&grade3 = " << setw(8) << *&grade3 << endl;
	cout << "Addr  : &grade3 = " << &grade3 << "  pgrade3 = " << pgrade3 << "   &pgrad3 = " << &pgrade3 << endl;
	*/

	/*
	//-------------------------------------------------------------------------------------------------
	//												실습 2
	// 목표 : 포인터 사용법을 익히고, 세 가지 형식(변수명, 참조 변수, 잠조 주소 연산자) 간 덧셈을 통해 동작 방법을 이해한다.
	//		  아래 그림과 같이 정수형 변수 3개와 그것을 가리키는 포인터 변수 3개를 조작하는 Main() 프로그램을 작성하라.
	//-------------------------------------------------------------------------------------------------
	
	// 오른쪽 그림(initial)과 같이 정수형 변수 a, b, c와 정수형 포인터 변수 p, q, r인 선언되어 있다.
    // 각 변수는 아래와 같이 초기화 되어있다.
	int a;      int b = 3 ;       int c = 7 ;     int* p = &b ;       int* q ;        int* r ;

    // 오른쪽 그림(Step1~Step3)을 참조하여 포인터 변수를 조작하는 코드를 작성하라.
    // step1 code
	q = &b;		r = &b;

	// step2 code
	a = 5;		p = &a;		

	// step3 code ( p,q,r을 이용하여 변수 c에는 a,b,c의 합을 넣어라. )
	r = &c;		c = *p + *q + *r;

	cout << "a = " << *p << "(" << p << ")" << endl;
	cout << "b = " << *q << "(" << q << ")" << endl;
	cout << "c = " << *r << "(" << r << ")" << endl;
	*/

	/*
	//-------------------------------------------------------------------------------------------------
	//												실습 3
	// 목표 : 함수에서 하나 이상의 변수를 인자를 보낼 때, 매개변수의 형식에 따라 값이 변하는 동작 방식을 이해하라
	// 
	// 아래 그림과 같이 두 개의 정수형 변수를 입력 받아 그 값을 서로 바꾸는 함수(swap) 아래 요구사항에 맞춰 
	// 3가지 함수를 구현하고 아래 main( ) 내 테스트 코드를 통해 그 결과를 확인하라.
	//-------------------------------------------------------------------------------------------------
	
	int x = 5, y = 7;
    int *px = &x;
	int *py = &y;
	
    swapValue(x, y);
    cout << "swapValue()함수 호출 후 "<< setw(5) << x << setw(5) << y << endl;

    swapRef(x, y);
    cout << "swapRef()함수 호출 후   "<< setw(5) << x << setw(5) << y << endl;
       
	swapAddr(px, py);
    cout << "swapAddr()함수 호출 후  "<< setw(5) << x << setw(5) << y << endl;

	swapAddr(&x, &y);
    cout << "swapAddr()함수 호출 후  "<< setw(5) << x << setw(5) << y << endl;
	*/   
	
	/*
	//-------------------------------------------------------------------------------------------------
	//												실습 4
	// 목표 : 포인터를 반환하는 함수를 통해 포인터 활용법을 익힌다.
	// 
	// 실습 1번의 프로그램에 아래 요구사항에 맞는 topGrade( ) 함수를 구현하고 main( ) 내 테스트 코드를 통해 
	// 그 결과를 확인하라. 
	//-------------------------------------------------------------------------------------------------

	// 3개의 성적 변수 선언
	int grade1=0;
	int grade2=0;
	int grade3=0;
	
	
	// 3명의 학생에 대한 포인터 변수 선언
	int* pgrade1;
	int* pgrade2;
	int* pgrade3;

	// 각 포인터 변수 초기화
	pgrade1 = &grade1;
	pgrade2 = &grade2;
	pgrade3 = &grade3;
	
	cin >> grade1 >> grade2 >> grade3;
	
	// 각 변수의 값, 변수의 주소값, 포인터 변수 값, 포인터 변수의 주소값 출력 및 비교
	cout << "Value : grade1 = " << setw(8) << grade1 << "  *pgrade1 = " << setw(8) << *pgrade1 << "  *&grade1 = " << setw(8) << *&grade1 << endl;
	cout << "Addr  : &grade1 = " << &grade1 << "  pgrade1 = " << pgrade1 << "   &pgrad1 = " << &pgrade1 << endl;
	cout << "Value : grade2 = " << setw(8) << grade2 << "  *pgrade2 = " << setw(8) << *pgrade2 << "  *&grade2 = " << setw(8) << *&grade2 << endl;
	cout << "Addr  : &grade2 = " << &grade2 << "  pgrade2 = " << pgrade2 << "   &pgrad2 = " << &pgrade2 << endl;
	cout << "Value : grade3 = " << setw(8) << grade3 << "  *pgrade3 = " << setw(8) << *pgrade3 << "  *&grade3 = " << setw(8) << *&grade3 << endl;
	cout << "Addr  : &grade3 = " << &grade3 << "  pgrade3 = " << pgrade3 << "   &pgrad3 = " << &pgrade3 << endl;

	// 실습 4의 추가 코드 
	int* top;

	top = topGrade(&grade1, &grade2, &grade3); 

	cout << "Top = " << *top << "(addr : " << top << ")" <<endl; 
	*/

	/*
	//-------------------------------------------------------------------------------------------------
	//												실습 5
	// 목표 : 포인터의 포인터 사용방법을 이해한다.
	// 
	// 아래 그림과 같이 정수형 포인터 변수 p, q, r 이 정수형 변수 a를 가리키도록 main( ) 내 코드를 작성하고  
	// 그 출력값을 확인하라. 
	//-------------------------------------------------------------------------------------------------
	
	int a; int* p; int** q; int*** r;

	p = &a;   q = &p;   r = &q;

	cout << "Enter a number: ";
	cin >> a; 
	cout << "Your number is : " << a << endl;
	cout << "\nEnter a number: ";
	cin >> *p; 
	cout << "Your number is : " << a << endl;
	cout << "\nEnter a number: ";
	cin >> **q; 
	cout << "Your number is : " << a << endl;
	cout << "\nEnter a number: ";
	cin >> ***r; cout << "Your number is : " << a << endl;
	*/

	/*
	//-------------------------------------------------------------------------------------------------
	//												실습 6
	// 목표 : 포인터의 포인터 활용을 이해한다.
	// 
	// 정수형 변수를 가리키는 포인터 값를 변경하는 같은 기능의 두 함수 swapDptr , swapRefPtr 함수를 구현하고, 
	// main( ) 내 테스트 코드를 이용하여 그 결과를 확인하라.
	//-------------------------------------------------------------------------------------------------

	int x = 5, y = 7;
    int *px = &x;
	int *py = &y;

	cout << "swapDptr()함수 호출 전   "<< px << "    " << py << "     " << x << "    " << y << endl;
	swapDptr(&px, &py);
	cout << "swapDptr()함수 호출 후   "<< px << "    " << py << "     " << x << "    " << y << endl;

	swapRefPtr(px, py);
	cout << "swapRefPtr()함수 호출 후 "<< px << "    " << py << "     " << x << "    " << y << endl;
	*/

	/*
	//-------------------------------------------------------------------------------------------------
	//												실습 7
	// 목표 : 포인터의 종류를 살펴보고, 그 사용법을 이해하자
	// 
	// 아래 코드를 작성하여 그 컴파일 에러문을 확인하고, 올바로 수정하여라. 
	// 또한 출력 결과가 가지는 의미를 생각해 보자.
	//-------------------------------------------------------------------------------------------------

	// 포인터 타입별 선언 및 초기화
    int i = 0x12345678;       int* pi = &i ;
    char c = 'C';            char* pc = &c ;
    float f = 700.5f ;      float* pf = &c ;
    bool b = true;           bool* pb = &b ;
    short int s = 456 ; short int* ps = &i ;

	pc = (char*)&i; // char* 타입의 포인터로 정수형 변수 i 를 가리킨다

	cout << hex << "*pc = " << (int) *pc << endl; // 출력의 의미를 생각해 보자.
	*/

	return 0;
}

int* topGrade(int* px, int* py, int* pz)
{
	int bigger = 0;
	int* pbigger = &bigger;

	pbigger = (*px > *py)? px : py;

	pbigger = (*pbigger > *pz)? pbigger : pz;

	return pbigger;
}

void swapValue (int x,int y)
{
	int tmp =x;
	x=y;
	y=tmp;
}


void swapRef (int& x, int& y) {
	int tmp = x;
	x = y;
	y = tmp;
}

void swapAddr (int* x, int* y) {
	int tmp = *x;
	*x = *y;
	*y = tmp;
}

void swapDptr (int** x, int** y){
	int* tmp = *x;
	*x = *y;
	*y = tmp;
}

void swapRefPtr (int*& x, int*& y){
	int* tmp = *&x;
	*&x = *&y;
	*&y = tmp;
}