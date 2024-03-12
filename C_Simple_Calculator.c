#include<stdio.h>
int main()
{
    long long int num1,num2;
    long long int add, mul, sub;
    scanf("%lld %lld",&num1, &num2);

    add = num1 + num2;
    mul = num1 * num2;  
    sub = num1 - num2;

    printf("%lld + %lld = %lld\n",num1, num2, add);
    printf("%lld * %lld = %lld\n",num1, num2, mul);
    printf("%lld - %lld = %lld\n",num1, num2, sub);

}