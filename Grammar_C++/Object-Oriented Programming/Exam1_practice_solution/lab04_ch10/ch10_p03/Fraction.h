//2012.03.21 By Kiok Ahn.

// 2012-1학기 고급객체지향언어
// class 10 - 1 : 실습 학습 목표
/*
목표 : 클래스의 특성에 따라 데이터를 정규화하여 수정 한다.
문제 : 분자, 분모를 매개변수를 받는 생성자와 데이터를 저장하는 메소드에서 약분이 가능한 경우 분자, 분모의 최대 공약수를 구하여 각각 나누어 정규화 하라.
	CFraction class에 printThisValue()와 printThisValueWithArgument(const CFraction &dummyFr) 추가
	printThisValue()는 this 값만 출력
	printThisValueWithArgument(const CFraction &dummyFr)는 this와 dummyFr의 주소 값을 출력
	main()에서
	fr1 객체 생성하여 주소 출력, fr1.printThisValue()를 호출하여 주소 출력, 두 개의 값이 같다는 것을 확인
	fr2 객체 생성하여 주소 출력, fr2.printThisValue()를 호출하여 주소 출력, 두 개의 값이 같다는 것을 확인, fr1과는 다르다는 것을 확인
	fr3, fr4 객체 생성하여 주소 출력, fr3. printThisValueWithArgument(fr4)를 호출하여 주소 출력. This는 fr3(host object)의 주소 임을 확인
*/

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

private:
	int GreatestComDiv( int nNumer, int nDenom );

public:
	void store( int nNumer, int nDenom );
	void print( void ) const;

	void printThisValue            ( void );
	void printThisValueWithArgument( const CFraction &dummyFr );

};//class CFraction

