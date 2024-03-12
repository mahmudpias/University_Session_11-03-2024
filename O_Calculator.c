#include<stdio.h>
int main()
{
    int a,b,ans;
    char c;
    scanf("%d%c%d",&a, &c, &b);
    
    // c =  + - * /

    if( c == '+')
    {
        ans = a+b;
    }
    else if( c == '-')
    {
        ans = a-b;
    }
    else if( c == '*')
    {
        ans = a*b;
    }
    else
    {
        ans = a/b;
    }

    printf("%d",ans);
}