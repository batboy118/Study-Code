class CFunny
{
private:
	int m_nNum;

public:	
	CFunny( void );//�߰�
	CFunny( const CFunny& fn );//�߰�
	CFunny( int nNum );
//	~Cfunny{void};
	~CFunny(void);//����

	void Print( void ) const;

	int* GetNum( void );//�߰�

//}//class CFunny
};//class CFunny //����

