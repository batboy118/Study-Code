//2012.02.24 By Kiok Ahn.

// 2012-1�б� ��ް�ü������
// class 10 - 1 : �ǽ� �н� ��ǥ
//
//1. class ��ü�� ����, ����, ����� ����� Ȯ��.
//   class CFraction{};�����ݷ� ���� �� ������ Ȯ��.    
//   "Fraction.h", "Fraction.cpp"���� CFraction::CFraction()�� ���� �� CFraction frac;��� ���� Ȯ��.
//2. debuging�� ���Ͽ� ����->������->������->ȭ�����->�ı����� ���� ������ Ȯ��.
//3. ������ ���� ������ ���� ������ debuging�� ���Ͽ� Ȯ��.
//4. "void print( void ) const;"���� "const"�� �ǹ� Ȯ��.


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

