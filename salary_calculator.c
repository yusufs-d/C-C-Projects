#include <stdio.h>
#include<stdlib.h>


int main(){

char name[50];
int worktime;
char extra;
int child;
int km;
float salary;
printf("Enter your name and surname: ");
gets(name);
printf("Enter the number of hours you are working for a week:");
scanf("%d", &worktime);
printf("Select extra payment method. Enter K/k for km, C/c for amount of children: ");
scanf(" %c", &extra);
if (worktime>=45){
    salary = 4*(100*worktime);

}
else if (20<worktime<45){
    salary= 4*(75*worktime);
}

else if (worktime<=20){
   salary = 4*(50*worktime);

}
switch (extra)
{
case 'k':
    printf("Enter the km that you came to work:");
    scanf("%d", &km);
    if(km>=50){
    
        salary=salary+(salary*12/100);
    }
    else if(25<km<50){
        salary=salary+(salary*8/100);
    }
    else if(km<=25){
        salary=salary+(salary*4/100);
    }
      
        break;
case 'K':
    printf("Enter the km that you came to work:");
    scanf("%d", &km);
    if(km>=50){
        salary=salary+(salary*12/100);
    }
    else if(25<km<50){
        salary=salary+(salary*8/100);
    }
    else if(km<=25){
        salary=salary+(salary*4/100);
    }
        break;
case 'c':
    printf("Enter the amount of children you have: ");
    scanf("%d", &child);
    if(child>=4){
        salary=salary+(salary*15/100);
    }
    else if(2<=child<4){
        salary=salary+(salary*9/100);
    }
    else if(child==1){
        salary=salary+(salary*5/100);
    }
        break;
case 'C':
    printf("Enter the amount of children you have: ");
    scanf("%d", &child);
  if(child>=4){
        salary=salary+(salary*15/100);
    }
    else if(2<=child<4){
        salary=salary+(salary*9/100);
    }
    else if(child==1){
        salary=salary+(salary*5/100);
    }

        break;

default:
    printf("No extra payment ! \n");

        break;
}
printf("Dear %s , your salary for this month is: $%.2f",name,salary);

return 0;
}