#include<stdio.h>
#include<math.h>
int main()
{
    char name[50];
    int meter_number;
    int units,present ,previous;
    printf("customer name=");
    gets(name);
    printf("Enter customer meter_number=");
    scanf("%d",&meter_number);
    printf("Enter the previous units=");
    scanf("%d",&previous);
    printf("Enter the present units=");
    scanf("%d",&present);
    units=present-previous;
    printf("Net units are=%d\n",units);
    float y;

   if(units>0 && units<=75)
   {
     y=3*units;
   }
   else if(units>75 && units<=150)
   {
       y=(units-75)*4.5+(3*75);
   }
     else if(units>150 && units<=250)
   {
       y=(3*75)+(4.5*75)+(5.65*(units-150));
   }
       else if(units>250 && units<=350)
   {
       y=(3*75)+(4.5*75)+(5.65*100)+(6.75*(units-250));
   }
         else if(units>350 && units<=500)
   {
       y=(3*75)+(4.5*75)+(5.65*100)+(6.75*150)+(10*(units-350));
   }
   else
   {
       y=10*units;
   }
   float vat=y*0.05;
   float net_charge=vat+y;
   int total=ceil(net_charge);
   //int total=floor(net_charge);

    printf("customer name=%s\n",name);
    printf("Enter customer meter_number=%d\n",meter_number);
    printf("Enter the previous units=%d\n",previous);
    printf("Enter the present units=%d\n",present);

    printf("The customer charge=%.2f\n",y);
    printf("The customer vat=%.2f\n",vat);
    printf("The customer net charge=%.2f\n",net_charge);
    printf("the total charge=%d",total);

    getch();

}
