#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	float p,x=0;
	int n,i,a[101];
	cin>>n;
	for(i=0;i<n;i+=1){
		scanf("%d",&a[i]);
		x+=a[i];
	} 
	p=x/n;
	cout<<fixed<<setprecision(2)<<p<<endl;
	return 0;
}
