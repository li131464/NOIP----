#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
	double r,x,y,p;
	cin>>r>>x>>p;
	y=x*pow((100+r)/100,p);
	cout<<fixed<<setprecision(2)<<y;
	return 0;
}
