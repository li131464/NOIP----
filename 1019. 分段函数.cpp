#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
#include <stdio.h>
#include <cstring>
using namespace std;
int main(){
	float x;
	cin>>x;
	if(x>=0&&x<5){
		x=x+2.5;
		cout<<fixed<<setprecision(3)<<x<<endl;
	}
	else if(x>=5&&x<10){
		x=2-1.5*pow(x-3,2);
		cout<<fixed<<setprecision(3)<<x<<endl;
	}
	else{
		x=x/2-1.5;
		cout<<fixed<<setprecision(3)<<x<<endl;
	}
	return 0;
}

