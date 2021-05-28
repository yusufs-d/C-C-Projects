#include <stdio.h>
#include<stdlib.h>


int calcMin(hi,ho,mi,mo)
{
    return (ho-hi)*60+(mo-mi);
 
}


int main(void) {
  int i=0,people,hourci,hourco,minuteci,minuteco;
  long id;
  char member,membername[50],reason;
  printf("Enter the number of people in the center: ");
  scanf("%d",&people);
  while(i<people)
  {
    printf("Enter member or not (Y/N): ");
    scanf(" %c",&member);
    if(member=='Y'||member=='y')
    {
      printf("Member of the sports center,\n");
      printf("Enter member id: ");
      scanf("%ld",&id);
      printf("Enter member name: ");
      scanf("%s",membername);
      printf("Member of the sports center,%ld,%s\n",id,membername);
      printf("Enter the check-in time (HH:MM): ");
      scanf("%d:%d",&hourci,&minuteci);
      printf("Enter the check-out time (HH:MM): ");
      scanf("%d:%d",&hourco,&minuteco);
      printf("The total time of the member stays in the sports center is %d minutes.\n",calcMin(hourci,hourco,minuteci,minuteco));
      i++;
    }
    
    else if(member=='N'||member=='n')
    {
        printf("Enter the reason to come the sports center:\n");
        printf("Enter R or r for registering, C or c for cafe: ");
        scanf( " %c",&reason);
        printf("Enter the name: ");
        scanf("%s",membername);
        if(reason=='R'|| reason=='r')
        {
            printf("%s just came to register.\n",membername);
            i++;
        }
        else if(reason=='C'||reason=='c')
        {
            printf("%s just came to cafe. \n",membername);
            i++;
        }
    }
    
    else
    {
        printf("Please enter your choice correctly.\n");
    }
  }
  return 0;
}