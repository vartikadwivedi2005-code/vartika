#include<stdio.h>
int magicno()
{
    int num=1234;
    int sum=0;
    
    while (num>0)
    {
        int lastdigit=num%10;
        
        sum=sum+lastdigit;
        num=num/10;
    }
    printf("SUM OF THE NUMBER:%d",sum);
     
}
    
    
    
    
}
int main()
{
    magicno();
    return 0;
}