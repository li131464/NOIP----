#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
	float wei;
	cin>>wei;
	if(wei>30){
		cout<<"Fail";
	}
	if(wei<=10){
		wei=wei*0.8+0.2;
		cout<<fixed<<setprecision(2)<<wei;
	}
	if(wei>10&&wei<=20){
		wei=(wei-10)*0.75+8.2;
		cout<<fixed<<setprecision(2)<<wei;
	}
	if(wei>20&&wei<=30){
		wei=(wei-20)*0.7+15.7;
		cout<<fixed<<setprecision(2)<<wei;
	}
	return 0;
}
