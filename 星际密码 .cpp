/*�����Ŀ������Ҫ��ȷ�����ǹ̶��ģ�����Ǿ�����˵ķ���

������� | a1 a2 | *| c1 c2 | = | a1c1 + a2d1 a1c2 + a2d2 | | b1 b2 | | d1 d2 | | b1c1 + b2d1 b1d2 + b2d2 |
������
| 1 1 | ^ 2 = | 1 1 | *| 1 1 |= | 2 1 | | 1 0 | | 1 0 | | 1 0 | | 1 1 | n��ȡֵ��1 2 3 4 5 6 ....���Ͻ�ֵ��1 2 3 5 8 13 ....��һ ����ʽ��쳲�����*/
#include <iostream> 
#include <vector> 
std::vector<int> a = {1,1}; 
void data_init() {   
	int i;    
	for(i=2;i<10005;i++){  
		a.push_back((a[i-1]+a[i-2]) % 10000);   
	}
} 
int main() {  
	int n,t; 
	data_init();   
	while(std::cin >> n){     
		while(n--){       
			std::cin >> t;     
			printf("%04d",a[t]);   
		}      
		printf("\n");   
	}  
	return 0;
}