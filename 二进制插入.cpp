//i j m : 1024��100000000 00 n : 19 �� 10011 Ҫ��n�Ķ�����ֵ����m�ĵ�jλ����iλ��ֻ��Ҫ��n������jλ��Ȼ ���ٽ��л����㣨 | �����ɡ� 
//m : 10000000000
//n : 00001001100
//	 10001001100

class BinInsert { 
public: 
	int binInsert(int n, int m, int j, int i) { 
		m <<= j;     
		return n | m; 
	} 
};
