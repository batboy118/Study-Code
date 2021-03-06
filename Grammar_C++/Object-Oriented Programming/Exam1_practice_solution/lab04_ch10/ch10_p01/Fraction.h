//2012.03.21 By Kiok Ahn.

/*
목표 : 클래스의 특성에 따라 부합 되지 않는 데이터의 경우에 에러를 출력 하고, 클래스의 특성에 따라 데이터를 수정 한다.
문제 : 분수를 나타낼 수 있는 클래스에서 분모가 0이 될 수 없다. 따라서 클래의 생성자 및 메소드에 분모가 0 일 경우 에러를 출력 하라. 

    - 데이터 : 실습 1 – 실습문제 3과 동일
    - 생성자 : 세 가지 생성자에 아래 사항을 적용
			CFraction( int nNumer, int nDenom ) ; 
				분모는 0이 될수 없음에 대한 예외처리를 적용
			이외의 생성자는 실습 1 – 실습문제 3과 동일.
    - 메소드(public)
			void store( int nNumer, int nDenom );
				입력 데이터를 멤버 변수에 저장 
				분모는 0이 될수 없음에 대한 예외처리를 적용
			이외는 실습 1 – 실습문제 3과 동일
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

public:
	void store( int nNumer, int nDenom );
	void print( void ) const;


};//class CFraction

