#include <iostream>
#include <iomanip>
#include <cstdio>
using namespace std;
int main(){
	cout<<"[1] apples"<<endl<<"[2] pears"<<endl<<"[3] oranges"<<endl<<"[4] grapes"<<endl<<"[0] Exit"<<endl;
	int k;
	cin>>k;
		switch(k){
			case 1: cout<<"price=3.0"; break;
			case 2: cout<<"price=2.5"; break;
			case 3: cout<<"price=4.1"; break;
			case 4: cout<<"price=10.2"; break;
			case 0: return 0;
			default:cout<<"price=0";
		}
	return 0;
}

