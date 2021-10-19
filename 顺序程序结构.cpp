// 计算机编程-1《顺序程序的结构》 
/*
问题如下：
	已知长方形长（l）和宽（w），求长方形边长（c）和面积(s) 
*/ 
#include <iostream> //头文件调用 
/*
【include】：包含，相当于在程序前嵌入一段已经编译好的程序；
【<iostream>】：iostream,输入输出流 头文件，头文件有很多，如math,string,algorithm等。 
*/ 
using namespace std;//名字空间的引用 ；std标准（standard标准） 
//1.分析问题 
/*int main()
{
	//2.设定数据类型 
	int l,w,c,s;
	cout<<"请输入长方形的长和宽："<<endl;//完善程序连贯性。 
	//3.输入数据 
	cin>>l>>w;
	//4.设计算法
	c=2*(l+w);
	s=l*w;
	//5.输出数据 
	cout<<"长方形的周长是:"<<c<<"长方形的面积是："<<s<<endl;
	return 0; 
 } */
 int main(){
 	int x;
 	x = 7^5%4-1;
 	cout<<x<<endl;
 	return 0;
 }
 
