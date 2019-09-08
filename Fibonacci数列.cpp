#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int N;
	while (cin >> N) {
		int f0 = 0, f1 = 1, f;
		int m, n;
		while (1) {
			f = f0 + f1;
			f0 = f1;
			f1 = f;
			if (f > N) {
				m = f - N;
				break;
			}
			else {
				n = N - f;
			}
		}
		cout << min(m, n);
	}
	return 0;
}