#include<stdio.h>
int main()
{
    int a,b,result;
    char ch;
    printf("Enter a number:");
    scanf("%d %d %c",&a,&b,&ch);
    switch (ch)
    {
    case '+':
        result=a+b;
        printf("%d",result);
        break;
    case '-':
        result=a-b;
        printf("%d",result);
        break;
    case '*':
        result=a*b;
        printf("%d",result);
        break;
    case '/':
        result=(float)a/b;
        printf("%f",result);
        break; 
    default:
        printf("INVALID OPERATOR");       
    
    }
    return 0;
}