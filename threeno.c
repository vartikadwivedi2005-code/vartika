 #include <stdio.h>
 int main()
{
    int a, b, c;
    printf("Enter three numbers:");
    scanf("%d %d %d", &a, &b, &c);
    if(a >= b && a >= c)
    {
        printf("%dis larger\n", a);
    }
    else if(b >= a && b >= c)
    {
        printf("%d is larger\n", b);
    } 
    else
        printf("%d\n", c);
    return 0;
}