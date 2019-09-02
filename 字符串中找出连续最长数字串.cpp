//遍历字符串，使用cur去记录连续的数字串，如果遇到不是数字字符，则表示一个连续的数字串结束了，则将数字串跟之前的数字串比较，如果更长，则更新更长的数字串更新到res
#include<iostream> 
#include<string> 
using namespace std; 
int main() {    
	string str,res,cur;    
	cin>>str;    
	for(int i=0;i<=str.length();i++) {        
		// 数字+=到cur        
		if(str[i]>='0' && str[i]<='9') {            
			cur+=str[i];        }        
		else {            
			// 找出更长的字符串，则更新字符串            
			if(res.size() < cur.size())                
				res=cur;            
			else                
				cur.clear();        
		}    
	}    
	cout<<res;    
	return 0; 
} 