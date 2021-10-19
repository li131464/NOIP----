#include <iostream>
using namespace std;
int main (){
	int a,b;
	cin>>a>>b;
	if(a+b<10){
		cout<<"water";
	}
	if(a+b>=10&&a>b){
		cout<<"tree";
	}
	if(a+b>=10&&a<=b){
		cout<<"tea";
	}
	return 0;
}
