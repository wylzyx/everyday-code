//将第二个字符串的字符都映射到一个hashtable数组中，用来判断一个字符在这个字符串
//判断一个字符在第二个字符串，不要使用删除，这样效率太低，因为每次删除都伴随数据挪动。这里可以考虑使用将不在字符添加到一个新字符串，最后返回新新字符串
#include<iostream>
#include<string>
using namespace std;
int main() {
	string str1, str2;
	getline(cin, str1);
	getline(cin, str2);
	int hashtable[256] = { 0 };
	for (size_t i = 0; i < str2.size(); ++i) {
		hashtable[str2[i]]++;
	}
	string ret;
	for (size_t i = 0; i < str1.size(); ++i) {
		if (hashtable[str1[i]] == 0) 
			ret += str1[i];
	}       
	cout << ret << endl;    
	return 0;
}
