/*����˼·�ǳ��򵥣������ϴμ���Ľ�� * 10���൱��10���ƽ�λ��Ȼ��ӵ�ǰλ��ֵ��
���磺��123��ת���Ľ���� sum = 0 sum * 10 + 1->1
sum * 10 + 2->12 sum * 10 + 3->123
����Ĺؼ���Ҫ�������ؼ��߽�������
1. ���ַ��� 
2. �����Ŵ��� 
3. ���ִ��д��ڷǷ��ַ�*/
class Solution {
public:    
	int StrToInt(string str) {
	if (str.empty())            
		return 0;            
	int symbol = 1;        
	if (str[0] == '-') 
		//������    
	{
		symbol = -1;            
		str[0] = '0'; 
	//�������ַ�'0',����0        
	}        
	else if(str[0] == '+') 
		//��������        
	{            
		symbol = 1;            
		str[0] = '0';        
	}            
	int sum = 0;        
	for(int i=0;i<str.size();++i) {            
		if(str[i] < '0' || str[i] > '9') {                
			sum = 0;                
			break;            
		}                          
		sum = sum *10 + str[i] - '0';                     
		}        
	return symbol * sum;    
	} 
};
