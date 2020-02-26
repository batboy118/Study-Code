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

private:
	int GreatestComDiv( int nNumer, int nDenom );

public:
	void store( int nNumer, int nDenom );
	void print( void ) const;

public:
	void addTo      ( const CFraction& fr );//this + fr
	void subtractTo ( const CFraction& fr );//this - fr
	void multiplyTo ( const CFraction& fr );//this * fr
	void divideTo   ( const CFraction& fr );//this / fr

public:
	friend CFraction add     ( const CFraction& fr1, const CFraction& fr2 );
	friend CFraction subtract( const CFraction& fr1, const CFraction& fr2 );
	friend CFraction multiply( const CFraction& fr1, const CFraction& fr2 );
	friend CFraction divide  ( const CFraction& fr1, const CFraction& fr2 );

};//class CFraction

CFraction add     ( const CFraction& fr1, const CFraction& fr2 );
CFraction subtract( const CFraction& fr1, const CFraction& fr2 );
CFraction multiply( const CFraction& fr1, const CFraction& fr2 );
CFraction divide  ( const CFraction& fr1, const CFraction& fr2 );

