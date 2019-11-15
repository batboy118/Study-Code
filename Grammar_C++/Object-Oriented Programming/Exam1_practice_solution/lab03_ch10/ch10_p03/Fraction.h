//2012.02.24 By Kiok Ahn.

// 2012-1학기 고급객체지향언어
// class 10 - 1 : 실습 학습 목표
//
//1. class 객체를 구현, 선언, 사용의 방법을 확인.
//   class CFraction{};세미콜론 제거 후 컴파일 확인.    
//   "Fraction.h", "Fraction.cpp"에서 CFraction::CFraction()를 제거 후 CFraction frac;사용 오류 확인.
//2. debuging을 통하여 선언->생성자->값저장->화면출력->파괴자의 진행 과정을 확인.
//3. 종류에 따른 생성자 수행 과정을 debuging을 통하여 확인.
//4. "void print( void ) const;"에서 "const"의 의미 확인.


class CFraction
{
private:
	int m_nNumerator  ;
	int m_nDenominator;

public:
	//contractor
	CFraction();
	CFraction( int nNumer );
	CFraction( int nNumer, int nDenom );
	CFraction( const CFraction& fr );


public:
	void store( int nNumer, int nDenom );
	void print( void ) const;

};//class CFraction

