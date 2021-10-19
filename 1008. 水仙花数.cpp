#include <iostream>
#include <cmath>
using namespace std;
int main (){
	int n;
	cin>>n;
	int x,y,z;
	x=int(n/100);
	y=int(n/10%10);
	z=(n-int(n/100)*100)%10;
	if(n == pow(x,3)+pow(y,3)+pow(z,3)){
		cout<<"YES";
	}
	else cout<<"NO";
	return 0;
}
