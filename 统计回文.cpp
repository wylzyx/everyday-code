#include<iostream> 
#include<string> 
using namespace std;
// �ж��Ƿ��ǻ��� 
bool IsCircleText(const string& s) {    
	size_t begin = 0;    
	size_t end = s.size()-1;    
	while(begin < end) {        
		if(s[begin] != s[end])            
			return false;                
		++begin;        
		--end;    
	}        
	return true; 
}

int main() {
	std::string str1, str2;
	getline(cin, str1);
	getline(cin, str2);
	size_t count = 0;
	for (size_t i = 0; i <= str1.size(); ++i)    {
		// ���ַ���2���뵽�ַ���1��ÿ��λ�ã����ж��Ƿ��ǻ���        
		string str = str1;
		str.insert(i, str2);
		if (IsCircleText(str))
			++count;
	}
	cout << count << endl;
	return 0;
}