#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
#include <stdio.h>
#include <cstring>
using namespace std;
int main(){
	float score;
	cin>>score;
	if(score>=0&&score<=100){
		if(score>=90){
			cout<<"Excellent";
		}
		if(score>=80&&score<90){
			cout<<"Good";
		}
		if(score>=60&&score<80){
			cout<<"Pass";
		}
		if(score<60){
			cout<<"Fail";
		}
	}
	return 0;
}

