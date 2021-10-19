#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
#include <stdio.h>
#include <cstring>
using namespace std;
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	if(a+b>c&&a+c>b&&b+c>a){
		if(a==b&&a==c&&b==c){
			cout<<"Equilateral";
		}
		if(pow(a,2)+pow(b,2)==pow(c,2)||pow(a,2)+pow(c,2)==pow(b,2)||pow(c,2)+pow(b,2)==pow(a,2)){
			cout<<"Right";
		}
		else if(a!=b||a!=c||b!=c){
			cout<<"General";
		}
		
	}
	else cout<<"NO";
	return 0;
}

