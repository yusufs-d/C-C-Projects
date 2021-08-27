#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

struct player
{
    int number;
    char name[20];
    char surname[20];
    int point,rebound,block;
    double efficiency;

};
void find_mvp(struct player p[], int size);

int main()
{
    int count;
    printf("How many players?:");
    scanf("%d",&count);
    struct player infos[count];

    for(int i = 0 ; i<count;i++)
    {
        printf("Enter Player %d info:",i+1);
        scanf("%d %s %s %d %d %d",&infos[i].number, infos[i].name, infos[i].surname,
        &infos[i].point,&infos[i].rebound,&infos[i].block);
        infos[i].efficiency = (infos[i].point*0.5) + (infos[i].rebound*0.3) + (infos[i].block*0.2);
        
        for(int j = 0; j<sizeof(infos[i].name);j++)
        {
            if(j == 0)
            {
                infos[i].name[j] = toupper(infos[i].name[j]);
            }
            else
            {
                infos[i].name[j] = tolower(infos[i].name[j]);
            }
        }
        for(int k = 0; k<sizeof(infos[i].surname);k++)
        {
            if(k == 0)
            {
                infos[i].surname[k] = toupper(infos[i].surname[k]);

            }
            else
            {
                infos[i].surname[k] = tolower(infos[i].surname[k]);
            }
        }
        
    }

    printf("\n\n");
    printf("The efficiency scores of players:\n");
    
    for(int i=0;i<count;i++)
    {

        printf("#%d  %s,%c   %.2lf\n",infos[i].number,
        infos[i].surname,infos[i].name[0],infos[i].efficiency);

    }
    printf("\n\n");

    find_mvp(infos,count);

    return 0;
}

void find_mvp(struct player p[], int size)
{
    
    
    int x = 0;
    int largest = 0;
    int number_of_player = 0;
    for(int i = 0;i<size;i++)
    {
        x = p[i].efficiency;
        if(x>largest)
        {
            largest = x;
            number_of_player = i;
        } 
    }


    printf("The MVP of the team is: %s, %c.",p[number_of_player].surname, p[number_of_player].name[0]);

}