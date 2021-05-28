#include<stdio.h>
#include<stdlib.h>
#include<time.h>


void checkGuess(int p1, int p2,int lnum,int proximity1, int proximity2 ){
    
    if(p1>0 && p2>0){
        printf("\nProximity of Player 1’s guess to the lucky number is: %d\n",proximity1);
        printf("Proximity of Player 2’s guess to the lucky number is: %d\n",proximity2);
        if(proximity1<proximity2){
            if(proximity1==0){
                printf("\nPlayer 1 has guessed the number correctly.");  
            }
            else{
                printf("\nPlayer 1’s guess is the closest to the lucky number.");   
            }
        }
        else if(proximity2<proximity1){
            if(proximity2==0){
                printf("\nPlayer 2 has guessed the number correctly.");
            }
            else{
                printf("\nPlayer 2’s guess is the closest to the lucky number.");
            }
        }
        else if(p1==p2){
            printf("Guesses are the same !\n");
        }  
    }
    else{
        printf("There is an invalid guess! Try again.");
        system("pause");
    }
    printf("\n********************************\n");
}
    
int main(){
    int luckyNum,player1,player2,pm1,pm2,score1=0,score2=0;
    srand(time(0));
    luckyNum = (rand() % 1000) + 1;
    printf("\n A lucky number has been generated randomly.\n");
    printf(" The lucky number is: %d\n", luckyNum);
    printf("\n********************************\n");
      
    while(player1!=luckyNum&&player2!=luckyNum){
        printf("Player 1 enter your guess: ");
        scanf("%d", &player1);
        printf("Player 2 enter your guess: ");
        scanf("%d", &player2);
        pm1 = abs(luckyNum-player1);
        pm2 = abs(luckyNum-player2);
    
        checkGuess(player1,player2,luckyNum,pm1,pm2);
        if(pm1<pm2){
        score1=score1+1;
        }
        else if(pm2<pm1){
        score2=score2+1;
        }   
        else if(pm1==pm2){
        score1=score1+1;
        score2=score2+1;
        
        }
    }
    

    printf("The scores are\nPlayer 1: %d\nPlayer 2: %d",score1,score2);
    
    printf("\n--------------------------------\n");
    
    return 0;
}
