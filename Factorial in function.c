#include<stdio.h>
#include<conio.h>
int fact(int a)
{
  if(a==0)
        return 1;
  else
    return a*fact(a-1);
}
int main()
{
    int n,f;
    printf("Enter the value of n=");
    scanf("%d",&n);
    f=fact(n);
    printf("Factorial=%d",f);
    getch();
}
