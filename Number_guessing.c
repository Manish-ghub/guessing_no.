#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int number,guess,nguesses;
    srand(time(0));
    number = rand()%100+1;
    // printf("The number is %d\n", number);

    do{
        printf("Guess the number between 1 to 100\n");
        scanf("%d", &guess);

        if(number>guess){
            printf("Higher number plese!\n");
        }
        else if(number<guess){
            printf("Lower number please!\n");
        }
        else{
            printf("You guessed it in %d attempts\n",nguesses);
        }
        nguesses++;
    }while(guess!=number);
    return 0;
}