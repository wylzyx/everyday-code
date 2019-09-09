#include<iostream>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	int i = 1;
	for (i = 1; i <= a * b; i++) {
		if (i % a == 0 && i % b == 0) {
			break;
		}
	}
	cout << i;
	system("pause");
}