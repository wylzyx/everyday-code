#include<iostream> 
#include<algorithm> 
using namespace std;
int count(int n) {
	int cnt = 0; 
	if ((n < 0) | (n>500000)) 
		return -1; 
	else {
		for(int i = 2; i <= n; i++) {
			int sum = 0; 
			//������Χ 
			int sq = sqrt(i); 
			for (int j = 2; j <= sq; j++) {
				if (i%j == 0) {
					//���j^2 = i��˵������Լ����ͬ��ֻ��һ�� 
					if (i / j == j)
						sum += j;
					else
						//����������ͬ��Լ����Ҫ��� 
						sum += j + (i / j);
				}
			}
			if (sum + 1 == i) 
				cnt++;
			} 
		return cnt;
	}
}
int main() { 
	int input; 
	while (cin >> input) 
		cout << count(input) << endl; 
	return 0; 
}