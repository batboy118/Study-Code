//2012.02.24 By Kiok Ahn.

// 2012-1학기 고급객체지향언어
// class 10 - 1 : 실습 학습 목표
//
/*
클래스를  정의하고 , 선언하며 클래스 데이터를 초기화 한다. 
문제 : 분수를 나타낼 수 있는 클래스를 아래와 같이 정의하라.
	- 데이터(private) : 외부 접근이 불가능하도록 작성
		int  m_nNumerator ;// 분자
		int  m_nDenominator ;// 분모 
	- 생성자 :
		기본 생성자
	- 기타 구현 규칙 :
		정의는 “Fraction.h”,  구현은 “Fraction.cpp” 파일에 각각 구현
		main()함수는 “ch10_p01.cpp”에 구현하라.
*/

class CFraction
{
private:
	int m_nNumerator  ;
	int m_nDenominator;

public:
	//contractor
	CFraction();

};//class CFraction

