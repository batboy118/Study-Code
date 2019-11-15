class CFunny
{
private:
	int m_nNum;

public:	
	CFunny( void );//추가
	CFunny( const CFunny& fn );//추가
	CFunny( int nNum );
//	~Cfunny{void};
	~CFunny(void);//수정

	void Print( void ) const;

	int* GetNum( void );//추가

//}//class CFunny
};//class CFunny //수정

