#include <stdio.h>
#define MAX_ASCII 127

int main()
{
    char num,enter;
    int temp=1;
    for(;temp>0;)
    {
        printf("----------------------------\n");
        printf("|**      ��ʼ            **|\n");
        printf("|**ASCII  ת  �ַ�  ��:1 **|\n");
        printf("|**�ַ�   ת  ASCII ��:2 **|\n");
        printf("|**      ����       ��:0 **|\n");
        printf("----------------------------\n");
        scanf("%d",&temp);
        if(temp==1)
        {
            printf("��������ֵС�� %d �������ַ���",MAX_ASCII);
            scanf("%d",&num);
            printf("ASCIIΪ %d ,��Ӧ���ַ�Ϊ %c \n",num,num);
        }
        if(temp==2)
        {
            printf("����һ���ַ�: \n");     
            scanf("%c", &enter);      //�س���Ҳ���ַ�,��������ʹ������������֮.
            scanf("%c", &num);  
            printf("     %c �� ASCII Ϊ %d    \n", num, num);
        }
    }
    return 0;
}
