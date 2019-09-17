//通过（n >> i) & 1可以获取第i位的二进制值，每次n右移一位，可以获取一位的二进制值，右移32次，n变成0，循环终止
#include<iostream> 
using namespace std;
int main(){ 
	int n; 
	while (cin >> n) { 
		int count = 0; 
		while (n) { 
			if ((n & 1) == 1) 
				count += 1; 
			n >>= 1; 
		} 
		cout << count << endl; 
	} 
	return 0; 
}