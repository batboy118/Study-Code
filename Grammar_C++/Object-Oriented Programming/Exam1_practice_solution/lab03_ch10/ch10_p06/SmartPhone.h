//2012.02.24 By Kiok Ahn.

// 2012-1�б� ��ް�ü������
// class 10 - 1 : �ǽ� �н� ��ǥ
//
//-	��ǥ: �� ������ ��ü�� ���� Ŭ������ �����Ѵ�.
//-	����Ʈ ���� ��Ÿ���� SmartPhone Ŭ������ �����϶�. ����Ʈ ���� �ִ� 20����Ʈ ������ �ü�� �̸��� �޸� ũ�⸦ ��Ÿ���� ������ ������ ǥ���Ѵ�. Ŭ������ �ü�� �̸��� �޸� ũ�⸦ �ٲٱ� ���� change() �޼ҵ�� ���� ���� ����ϴ� print() �޼ҵ带 ���´�.
//-	main()���� TomPhone�� ��iOS5.1��, 32GB��, myPhone�� ��IceCreamSandwich4.0��, 64GB�� �����ϰ� �� ��ü�� ȭ�鿡 ����ϴ� ������ ��� ����.


class CSmartPhone
{
public:
	char m_strName[20];
	int  m_nMemorySize;

private:
	void initName( void );
	void CopyName( char* pName );

public:
	CSmartPhone( void );
	CSmartPhone( char* pName, int nMemorySize );

public:
	void changeMemSize( int   nMemorySize );
	void changeOSName ( char* pName       );
	void print        ( void              ) const;
};