//输入数组a后对a排序，数组中间的数就是我们要找的
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


//O(n)思想：因为要找过半的数，用一个变量count记录读取每个变量变化的次数，一个变量temp记录可能过半的数
//先让count = 1，然后让temp = vec[0]，然后往后遍历一遍，碰到和temp相同的数就给count++，否 则就count--
//如果，count变成0，就让temp = vec[i](vec数组遍历过程中的当前值), 并让count = 1
//如此遍历 一遍，因为有一个数过半，所以temp最后肯定存储的是过半的数
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