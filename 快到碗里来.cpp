#include <iostream> 
using namespace std;
int main(){ 
	double n,r;  
	while(cin >> n >> r){    
		//�ܳ���2*r*3.1415     
		//������n       
		if(n > (2*r*3.1415)) 
			cout<<"No"<<endl;    
		else
			cout << "Yes" << endl;
	}    return 0;
}