//��������a���a���������м������������Ҫ�ҵ�
#include<vector> 
#include<iostream> 
#include<algorithm> 
using namespace std; 
int main() {    
	int n;    
	vector <int> vec;    
	while (cin >> n) {
		vec.push_back(n);
	}
	sort(vec.begin(), vec.end());        
	cout << vec[vec.size()/2-1] << endl;    
	return 0; 
}


//O(n)˼�룺��ΪҪ�ҹ����������һ������count��¼��ȡÿ�������仯�Ĵ�����һ������temp��¼���ܹ������
//����count = 1��Ȼ����temp = vec[0]��Ȼ���������һ�飬������temp��ͬ�����͸�count++���� ���count--
//�����count���0������temp = vec[i](vec������������еĵ�ǰֵ), ����count = 1
//��˱��� һ�飬��Ϊ��һ�������룬����temp���϶��洢���ǹ������
#include <vector> 
#include <iostream>
using namespace std; 
int main() {   
	int n;    
	vector <int> vec; 
	while(cin >> n)    
		vec.push_back(n);       
	int count = 1;   
	int temp = vec[0];  
	for(int i = 1; i < vec.size(); ++i) {      
		if(vec[i] == temp)       
			count++;   
		else       
			count--;        
		if (count == 0) {
			temp = vec[i];        
			count++;
		}		
	}      
	cout << temp << endl;   
	return 0; 
}