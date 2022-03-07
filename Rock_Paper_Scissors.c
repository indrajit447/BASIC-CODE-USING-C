#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int generateRandomNumber(int n){
    srand(time(NULL));//srand takes seed as an input and is defined inside stdlib.h
    return rand()%n;
    // printf("The random number between 0 to 5 is %d\n",generteRandomNumber(2));
}
int greater(char char1,char char2){
  //For rock paper scissors - Returns 1 if c1>c2 and 0 otherwise.If c1==c2 it will return -1
  if (char1==char2){
      return -1;
  }
  if((char1 == 'r' ) && (char2 == 's')){
      return 1;
  }
  else if((char2 == 'r' ) && (char1 == 's')){
   
      return 0;
  }
  if((char1 == 'p' ) && (char2 == 'r')){
      return 1;
  }
  else if((char2 == 'p' ) && (char1 == 'r')){
      return 0;
  }
  if((char1 == 's' ) && (char2 == 'r')){
      return 1;
  }
  else if((char2 == 's' ) && (char1 == 'r')){
      return 0;
  }
 
}
int main(){
    int playerscore=0,compscore=0,temp;
    char playerchar,compchar;
    char dict[]={'r','p','s'};
    printf("Welcome to the Rock,paper,scissors\n");
    for(int i=0;i<3;i++){
        //Take player's input
        printf("player 1's Turn:\n");
        printf("Choose 1 for rock,2 for paper and 3 for scissors:\n");
        scanf("%d",&temp);
        getchar();
        playerchar=dict[temp-1];
        printf("You choose %c\n :",playerchar);

       //Generate computer's input
        printf("Computer's Turn:\n");
        printf("Choose 1 for rock,2 for paper and 3 for scissors:\n");
        temp=generateRandomNumber(3)+1;
        compchar=dict[temp-1];
        printf("CPU choose %c\n :",compchar);

        
        //compare the score
        if(greater(compchar,playerchar)==1){
            compscore +=1;
            printf("CPU got it!\n\n");
        }
        else if(greater(compchar,playerchar)==-1){
            compscore +=1;
            playerscore +=1;
            printf("It's a draw!\n\n");
        }
        else{
            playerscore +=1;
            printf("You got it!\n\n");
              
        }
    }
    // printf("The random number between 0 to 5 is %d\n",generateRandomNumber(2));
    if(playerscore>compscore){
        printf("You win the game\n");

    }
    else if(playerscore<compscore){
        printf("CPU win the game\n");
    }
    else{
        printf("It's a draw");
    }

return 0;
}