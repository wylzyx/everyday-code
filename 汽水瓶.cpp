#include<iostream> 
#include<string>
using namespace std;
int calculateNum(int num) {    
	//�ܶһ���    
	int sum = 0;    
	while (num > 1) {        
		//ÿ��ƿ��һƿ        
		int result = num / 3;        
		//ʣ�಻����ƿ���ȱ���        
		int reminder = num % 3;        
		sum = sum + result;        
		//��һ�ο��Զһ��Ŀ�ƿ        
		num = result + reminder;
		if (num == 2) { 
			++sum;            
			break; 
		}
	}    
	return sum; 
}
int main(){
	int number;
	while (cin >> number) { 
		cout << calculateNum(number) << endl; 
	} 
	return 0;
}
