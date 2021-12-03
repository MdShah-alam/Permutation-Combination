#include<stdio.h>
#include<conio.h>
int fact(int);
int main()
{
    int n,r;
    printf("Enter the value of n,r=");
    scanf("%d%d",&n,&r);
    int npr=fact(n)/fact(n-r);
    printf("Permutation of %d and %d is =%d\n",n,r,npr);
    getch();
}
int fact(int n)
{
    int f=1,i;
    {
        for(i=1;i<=n;i++)
        {
            f=f*i;
        }
        return (f);
    }
}
