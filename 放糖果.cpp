//ʹ��vector<vector<int>>����һ����ά���飬resize�� �ռ䲢��ʼ����ÿ��λ�ó�ʼ��Ϊ1����ʾ�����⣬a[i][j]λ�÷ŵ��⣬����Ա�Ǵ�a[i][j + 2]��a[i + 1][j]λ�� ���ܷŵ��⣬
//����һ���ά���飬��Ǵ����ܷŵ����λ�ã�ͳ��Ҳ��ͳ�Ƴ��˵������λ����
#include<iostream> 
#include<vector> 
using namespace std; 
int main() {    
	int w,h,res = 0;    
	cin >> w >> h;    
	vector<vector<int>> a;    
	a.resize(w);    
	for(auto& e : a)        
		e.resize(h, 1);        
	for(int i=0;i<w;i++) {        
		for(int j=0;j<h;j++) {            
			if(a[i][j]==1) {                
				res++;                
				// ��ǲ��ܷŵ����λ��                
				if((i+2)<w)                    
					a[i+2][j] = 0;                                
				if((j+2)<h)                    
					a[i][j+2] = 0;            
			}        
		}    
	}    
	cout << res;    
	return 0; 
}