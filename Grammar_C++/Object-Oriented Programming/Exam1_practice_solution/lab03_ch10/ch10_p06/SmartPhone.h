//2012.02.24 By Kiok Ahn.

// 2012-1학기 고급객체지향언어
// class 10 - 1 : 실습 학습 목표
//
//-	목표: 실 세계의 개체에 대한 클래스를 설계한다.
//-	스마트 폰을 나타내는 SmartPhone 클래스를 설계하라. 스마트 폰은 최대 20바이트 길이의 운영체제 이름과 메모리 크기를 나타내는 정수형 변수로 표현한다. 클래스는 운영체제 이름과 메모리 크기를 바꾸기 위한 change() 메소드와 현재 값을 출력하는 print() 메소드를 갖는다.
//-	main()에서 TomPhone을 “iOS5.1”, 32GB로, myPhone을 “IceCreamSandwich4.0”, 64GB로 생성하고 각 개체를 화면에 출력하는 문제로 골격 제시.


class CSmartPhone
{
public:
	char m_strName[20];
	int  m_nMemorySize;

private:
	void initName( void );
	void CopyName( char* pName );

public:
	CSmartPhone( void );
	CSmartPhone( char* pName, int nMemorySize );

public:
	void changeMemSize( int   nMemorySize );
	void changeOSName ( char* pName       );
	void print        ( void              ) const;
};