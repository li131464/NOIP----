#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
#include <stdio.h>
#include <cstring>
using namespace std;
int main(){
	double m;
	cin>>m;
	if(m == 0.5){
		cout<<"3"<<endl;
	}
	else{
		m=(m-0.5)/0.2;
		m=m+3;
		cout<<m<<endl;
	}
	return 0;
}

