#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	double l;
	cin>>l;
	if(l<=100000){
		l=l*0.1;
	}
	if(l>100000 && l<=200000){
		l=(l-100000)*0.075+10000;
	}
	if(l>200000 && l<=400000){
		l=(l-200000)*0.05+17500;
	}
	if(l>400000 && l<=600000){
		l=(l-400000)*0.03+27500;
	}
	if(l>600000 && l<=1000000){
		l=(l-600000)*0.015+33500;
	}
	if(l>1000000){
		l=(l-1000000)*0.01+39500;
	}
	cout<<fixed<<setprecision(3)<<l;
	return 0;
}
