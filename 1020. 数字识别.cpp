#include <stdio.h>
void fun(int x,int num);//ͳ��x��λ����Ŀǰͳ�ƽ����numλ����ʼ������num=0��
int main()
{
    int n;
    scanf("%d",&n);
    if(n==0) { printf("1\n0\n");return 0; }
    else fun(n,0);
    return 0;
}
void fun(int x,int num)//ͳ��x��λ����Ŀǰͳ�ƽ����numλ����ʼ������num=0��
{
    int t=x%10;
    num++;
    x=x/10;
    if(x==0) printf("%d\n",num);
    else fun(x,num);
    printf("%d\n",t);
}
