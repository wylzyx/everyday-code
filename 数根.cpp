//1. �����ַ����õ��������֣�����ÿλ��ͣ�Ϊ�˵õ������ֲ�����99��
//2. ѭ���Դ���9�����ֽ��ж�10ȡ����������������������������ӵõ�����
#include <iostream> 
#include <string>
int numRoot(int num) {   
	int nroot = 0;   
	while(num > 0) {     
		/*ÿ��ֻ��ȡ��λ����---��λ��+ʮλ��*/     
		nroot += num % 10;      
		num /= 10; 
	}    
	while (nroot > 9) {   
		nroot = numRoot(nroot); 
	}     
	return nroot; 
}
int main() {  
	std::string origin;  
	while(std::cin >> origin) {     
		int sum = 0;    
		//�Ƚ�ÿһλ������ӵõ��ܺͣ���ֹ���ֹ���    
		for (int i = 0; i < origin.length(); i++) {        
			sum += origin[i] - '0';      
		}       
		//���ܺ�������      
		std::cout << numRoot(sum) << std::endl;   
	}   
	return 0; 
}