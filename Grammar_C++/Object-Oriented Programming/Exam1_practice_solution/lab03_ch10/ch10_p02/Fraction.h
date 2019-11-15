//2012.02.24 By Kiok Ahn.

// 2012-1학기 고급객체지향언어
// class 10 - 1 : 실습 학습 목표
//
//목표 : 클래스의 메소드를 추가하여 구현 하고 이를 사용하는 방법을 익힌다. 
//문제 : 실습 1의 분수 클래스를 아래와 같이 데이터 저장 및 화면에 출력하는 맴버 메소드를 추가 하고, 컴파일 후 에러가 없음을 확인하라.
//    - 데이터 : 실습 1과 동일
//    - 생성자 (public) : 실습 1과 동일 
//    - 메소드(public) :
//void store( int nNumer, int nDenom );//입력 데이터를 맴버 변수에 저장
//void print( void ) const;   //분수를 화면에 출력
//                                          // 출력 형태 : “분자/분모”

class CFraction
{
private:
	int m_nNumerator  ;
	int m_nDenominator;

public:
	//contractor
	CFraction();


public:
	void store( int nNumer, int nDenom );
	void print( void ) const;

};//class CFraction

