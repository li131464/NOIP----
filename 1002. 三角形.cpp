#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int main(){
	float a,b,c,d,s;
	cin>>a>>b>>c;
	d=(a+b+c)/2;
	s=sqrt(d*(d-a)*(d-b)*(d-c));
	cout<<fixed<<setprecision(4)<<s;
	return 0;
} 
