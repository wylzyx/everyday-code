//N��������ÿ������λ��ֵ�ֱ���X0*N ^ 0��X1*N ^ 1, X2*N^2.....��X0�� X1��X2������Щ����λ��ֵ��
//���Ǿ��ǽ���ȡģ�������ǵ�ǰ�ͽ��Ƶ�λ��ֵ�Ƕ��٣�ͨ��������������������һ������λ�ļ���
#include <iostream> 
#include<string> 
#include<algorithm> 
using namespace std; 
int main() {    
	string s, table="0123456789ABCDEF";    
	int m,n;    
	cin>>m>>n;    
	bool flag = false;        
	// ����Ǹ�������ת�������������һ��    
	if(m < 0) {        
		m = 0 - m;        
		flag = true;    
	}        
	// �����ƻ���ɶ�Ӧ���ַ���ӵ�s    
	while(m) {        
		s += table[m%n];        
		m /= n;    
	}        
	if (flag) {
		s += '-';
	}
	reverse(s.begin(), s.end());    
	cout << s << endl;   
	system("pause");
	return 0;
}