//2012.02.24 By Kiok Ahn.

// 2012-1�б� ��ް�ü������
// class 10 - 1 : �ǽ� �н� ��ǥ
//
//��ǥ : Ŭ������ �޼ҵ带 �߰��Ͽ� ���� �ϰ� �̸� ����ϴ� ����� ������. 
//���� : �ǽ� 1�� �м� Ŭ������ �Ʒ��� ���� ������ ���� �� ȭ�鿡 ����ϴ� �ɹ� �޼ҵ带 �߰� �ϰ�, ������ �� ������ ������ Ȯ���϶�.
//    - ������ : �ǽ� 1�� ����
//    - ������ (public) : �ǽ� 1�� ���� 
//    - �޼ҵ�(public) :
//void store( int nNumer, int nDenom );//�Է� �����͸� �ɹ� ������ ����
//void print( void ) const;   //�м��� ȭ�鿡 ���
//                                          // ��� ���� : ������/�и�

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

