//2012.03.21 By Kiok Ahn.

// 2012-1�б� ��ް�ü������
// class 10 - 1 : �ǽ� �н� ��ǥ
/*
��ǥ : Ŭ������ Ư���� ���� �����͸� ����ȭ�Ͽ� ���� �Ѵ�.
���� : ����, �и� �Ű������� �޴� �����ڿ� �����͸� �����ϴ� �޼ҵ忡�� ����� ������ ��� ����, �и��� �ִ� ������� ���Ͽ� ���� ������ ����ȭ �϶�.
    - ������ :
			CFraction( int nNumer, int nDenom ) ; 
				�ǽ� 1�� Ư¡�� ����
				����, �и� �ִ������� Ȱ���Ͽ� ����ȭ, �Ʒ��� �߰��� �޼ҵ带 ���.
			�̿��� �����ڴ� �ǽ� 1�� ����.
    - �޼ҵ�(private)
			int GreatestComDiv( int nNumer, int nDenom );
				�Է� ���� �� �Ű������� �ִ� ������� ����Ͽ� ����
    - �޼ҵ�(public)
			void store( int nNumer, int nDenom );
				�ǽ� 1�� Ư¡�� ����
				����, �и� �ִ������� Ȱ���Ͽ� ����ȭ, ���� �߰��� �޼ҵ带 ���.
			�ܴ̿� �ǽ� 1�� ����
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

