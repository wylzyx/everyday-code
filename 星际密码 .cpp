/*这个题目首先需要明确矩阵是固定的，其次是矩阵相乘的方法

矩阵相乘 | a1 a2 | *| c1 c2 | = | a1c1 + a2d1 a1c2 + a2d2 | | b1 b2 | | d1 d2 | | b1c1 + b2d1 b1d2 + b2d2 |
矩阵是
| 1 1 | ^ 2 = | 1 1 | *| 1 1 |= | 2 1 | | 1 0 | | 1 0 | | 1 0 | | 1 1 | n的取值：1 2 3 4 5 6 ....左上角值：1 2 3 5 8 13 ....是一 个变式的斐波那契*/
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