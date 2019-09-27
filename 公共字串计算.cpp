#include<iostream> 
#include<vector> 
using namespace std;
int main() {
	int max = 0;
	//max��ֵ.    
	string str1, str2;
	while (cin >> str1 >> str2) {
		int len1 = str1.size();
		int len2 = str2.size();
		int max = 0;
		//����ֵ��ʼ��Ϊ0        
		vector<vector<int>> dp(len1, vector<int>(len2, 0));
		//����dp        
		for (int i = 0; i < len1; i++) {
			for (int j = 0; j < len2; j++) {
				//�����ǰ��β���ַ���ȣ�����dp[i-1][j-1]�Ļ����ϼ�1               
				if (str1[i] == str2[j]) {
					if (i >= 1 && j >= 1)
						dp[i][j] = dp[i - 1][j - 1] + 1;
					else
						//dp[i][0] or dp[0][j]                        
						dp[i][j] = 1;
				}
				//�������ֵ                
				if (dp[i][j] > max)
					max = dp[i][j];
			}
		}
		cout << max << endl;
	}
}