#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
#include <stdio.h>
#include <cstring>
using namespace std;
int main(){
	int s,t,j,i,n,a[1000];
	cin>>n;
	for(i=0;i<n;i+=1){
		scanf("%d",&a[i]);
	}
	for(j=0;j<n;j+=1){
		for(i=0;i<n-1;i++){
			if(a[i]>a[i+1]){
				t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
			}
		}
	}
	s=a[n-1]-a[0];
	cout<<s<<endl;
	return 0;
}

