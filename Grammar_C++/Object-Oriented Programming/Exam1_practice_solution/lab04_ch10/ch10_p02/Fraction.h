//2012.03.21 By Kiok Ahn.

// 2012-1학기 고급객체지향언어
// class 10 - 1 : 실습 학습 목표
/*
목표 : 클래스의 특성에 따라 데이터를 정규화하여 수정 한다.
문제 : 분자, 분모를 매개변수를 받는 생성자와 데이터를 저장하는 메소드에서 약분이 가능한 경우 분자, 분모의 최대 공약수를 구하여 각각 나누어 정규화 하라.
    - 생성자 :
			CFraction( int nNumer, int nDenom ) ; 
				실습 1의 특징을 유지
				분자, 분모를 최대공약수를 활용하여 정규화, 아래의 추가된 메소드를 사용.
			이외의 생성자는 실습 1과 동일.
    - 메소드(private)
			int GreatestComDiv( int nNumer, int nDenom );
				입력 받은 두 매개변수의 최대 공약수를 계산하여 리턴
    - 메소드(public)
			void store( int nNumer, int nDenom );
				실습 1의 특징을 유지
				분자, 분모를 최대공약수를 활용하여 정규화, 위의 추가된 메소드를 사용.
			이외는 실습 1과 동일
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

};//class CFraction

