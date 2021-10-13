#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int StonePaperScissorThread(char you,char comp){
    if(you==comp){
        return 0;
    }
    if(you=='s' && comp=='p'){
        return -1;
    }
        else if(you=='s' && comp=='S'){
        return 1;
    }
    else if(you=='s'  && comp=='t'){
        return -1;
    }
    else if(you=='p' && comp=='s'){
        return -1;
    }
    else if(you=='p' && comp=='S'){
        return -1;
    }
    else if(you=='p' && comp=='t'){
        return -1;
    }
    else if(you=='S' && comp=='s'){
        return -1;
    }
    else if(you=='S'  && comp=='p'){
        return 1;
    }
    else if(you=='S' && comp=='t'){
        return 1;
    }
    else if(you=='t' && comp=='s'){
        return 1;
    }
    else if(you=='t' && comp=='p'){
        return 1;
    }
    else if(you=='t' && comp=='S'){
        return -1;
    }
}
    int main(){
        char you,comp;
        srand(time(0));
        int number=(rand()%1000);
        if(number<=25){
            comp='s';
        }
        else if(number>=26 && number>=50){
            comp='p';
        }
        else if(number>=51 && number<=75){
            comp='S';
        }
        else{
            comp='t';
        }
        printf("Rules:-\nThis is a game between you and computer.\nEnter 's' for stone,'p' for paper,'S' for scissor and 't' for thread.\n");
        printf("Enter your choice: ");
        scanf("%c",you);
        int result=StonePaperScissorThread(you,comp);

        if(result==0){
            printf("Game Draw!");
        }
        else if(result==1){
            printf("You Win!");
        }
        else{
            printf("You Lose!");
        }
        printf("You chose %d and computer chose %d",you,comp);

        return 0;
    }
