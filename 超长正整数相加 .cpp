#include<string> 
#include<iostream> 
#include<algorithm> 
using namespace std;
string addStrings(string num1, string num2) {
	//�ɵ�λ���λ��� 
	int i = num1.size() - 1;
	int j = num2.size() - 1;
	string result = "";
	//��ǰλ����ӽ�� 
	int carry = 0;
	while (i >= 0 || j >= 0) {
		if (i >= 0) {
			carry += num1[i] - '0';
		}
		if (j >= 0) {
			carry += num2[j] - '0';
		}
		//��ǰΪ�����ֵ������10 
		result += (char)(carry % 10 + '0');
		//�������10,���Ͻ�һλ 
		carry /= 10; i--; j--;
	}
	//�����֮��������н�λ�����ټ�1 
	if (carry == 1) {
		result += '1';
	}
	//�������� 
	reverse(result.begin(), result.end()); 
	return result; 
}
int main() { 
	string s1, s2; 
	while (cin >> s1 >> s2) { 
		cout << addStrings(s1, s2) << endl; 
	} 
	return 0; 
}