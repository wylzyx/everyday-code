//��1 - M��ʯ�忴��һ���������stepNum��ÿ��stepNum[i]�����Ŵ���㵽��һ����С�Ĳ���������0Ϊ���ܵ��
//����㿪ʼ��stepNum���б���������i������Լ��������stepNum[i]���ߵĲ�������Ȼ������Ǽ����ܵ����λ�õ���С������
//������ܵ��������Ϊ��ʱλ�õ���С���� + 1��������ܵ���ľ͸���Ϊmin���Ѽ�¼����С�������˴�����С���� + 1����������һ���õ������
#include<iostream> 
#include<vector> 
#include<algorithm> 
using namespace std; 
//����Լ���������1�ͱ����Լ��
void divisorNum(int n, vector<int> &divNum) { 
	for (int i = 2; i <= sqrt(n); i++) { 
		if (n%i == 0) { 
				divNum.push_back(i); 
				//��ƽ����ʱ������һ����ҲҪ���� 
				if (n / i != i) divNum.push_back(n / i); 
		} 
	} 
} 
int Jump(int N, int M) { 
	//����ĵ����stepNum��Ĳ�������ʼNΪ1������N��NΪ1�� 
	vector<int> stepNum(M + 1, 0); 
	stepNum[N] = 1;
	for (int i = N; i < M; i++) { 
		//N������Լ������Ϊ�ӱ�������㿪ʼ���ߵ�����
		vector<int> divNum;
		//0��������㲻�ܵ� if (stepNum[i] == 0) continue;
		//����������ߵĲ���������divNum�������� divisorNum(i, divNum);
		for (int j = 0; j < divNum.size(); j++) { 
			//��λ��i�����ܵ���ĵ�Ϊ 
			stepNum[divNum[j] + i];
				if ((divNum[j] + i) <= M && stepNum[divNum[j] + i] != 0) 
					stepNum[divNum[j] + i] = min(stepNum[divNum[j] + i], stepNum[i] + 1); 
				else if ((divNum[j] + i) <= M) stepNum[divNum[j] + i] = stepNum[i] + 1; 
		}
	}
	if (stepNum[M] == 0) 
		return -1; 
	else 
		//��ʼ��ʱ�����һ��������Ҫ��1 
		return stepNum[M] - 1;
}
int main() { 
	int n, m; 
	cin >> n >> m; 
	cout << Jump(n, m) << endl; 
	return 0; 
}