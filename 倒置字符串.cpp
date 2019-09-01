//先将整个字符串逆置过来，再遍历字符串，找出每个单词，对单词逆置。这里我们使用了stl算法中的 reverse，所以这里使用迭代器遍历string
#include <iostream> 
#include <string> 
#include <algorithm> 
using namespace std;
int main() {
	string s;    
	// 注意这里要使用getline，cin>>s遇到空格就接收结束了    
	getline(cin, s);        
	// 翻转整个句子    
	reverse(s.begin(), s.end());    
	// 翻转单词    
	auto start = s.begin();    
	while (start != s.end()) {        
		auto end = start;        
		while (end != s.end() && *end != ' ')  {
			end++;
		}
		reverse(start, end);
		if (end != s.end()) {
			start = end + 1;
		}
		else  {
			start = end;
		}
	}
	cout << s << endl;
	system("pause");
	return 0;
}
