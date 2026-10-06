#include <stdio.h>
int main()
{
    int a;
   
    printf("請輸入成績(分):");
    scanf("%d",&a);
    
    if (a>=60)
    {
    int b;
    printf("請輸入出席率(%):");
    scanf("%d",&b);
        if (b>=80)
        {
            printf("通過");
        }
        else
        {
            printf("不通過");
        }
        
    }
    else
    {
        printf("不通過");
    }
    return 0;
}