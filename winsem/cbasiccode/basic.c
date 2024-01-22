# include <stdio.h>


int add2num(int a, int b)
{
    return a+b;
}

float mult2num(float a, float b)
{
    return a*b;
}

int chartoint(char a)
{
    return (int)a;
}

int quot(int a, int b)
{
    return a/b;
}
int rem(int a, int b)
{
    return a%b;
}

int oddoreven(int a)
{
    if(a%2==0)
        return 0;
    else
        return 1;
}

int isvowel(char a)
{
    if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u')
        return 1;
    else
        return 0;
}

int isaplha(char a)
{
    if((a>='a' && a<='z') || (a>='A' && a<='Z'))
        return 1;
    else
        return 0;
}
int sumofnat(int n)
{
    int sum=0;
    for(int i=1;i<=n;i++)
        sum+=i;
    return sum;
}
int fact(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
        fact*=i;
    return fact;
}
int lcm(int a, int b)
{
    int max;
    max = (a>b) ? a : b;
    while(1)
    {
        if(max%a==0 && max%b==0)
            return max;
        max++;
    }
}

int gcd(int a, int b)
{
    int min;
    min = (a<b) ? a : b;
    while(1)
    {
        if(a%min==0 && b%min==0)
            return min;
        min--;
    }
}

int recursivegcd(int a, int b)
{
    if(b==0)
        return a;
    else
        return recursivegcd(b, a%b);
}

int fib(int n)
{
    if(n==0 || n==1)
        return n;
    else
        return fib(n-1)+fib(n-2);
}
int noofdigits(int n)
{
    int count=0;
    while(n!=0)
    {
        n/=10;
        count++;
    }
    return count;
}

int reverse(int n)
{
    int rev=0;
    while(n!=0)
    {
        rev = rev*10 + n%10;
        n/=10;
    }
    return rev;
}

int primebtw(int a, int b)
{
    int i, j, flag;
    for(i=a;i<=b;i++)
    {
        flag=0;
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
            printf("%d ", i);
    }
    return 0;
}


int main()
{
    printf("Hello World\n");
    return 0;
}