//i j m : 1024：100000000 00 n : 19 ： 10011 要把n的二进制值插入m的第j位到第i位，只需要把n先左移j位，然 后再进行或运算（ | ）即可。 
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
