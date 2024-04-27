#include <stdio.h>
#include <stdlib.h>


int number(void){
    double f = (double)rand() / 3;
    return f * 3;
}
void win(void){
    printf("You win\n");
}
void lose(void){
    printf("You lose\n");
}
void tie(void){
    printf("Tie\n");
}
int main(void){
    char in;

    printf("Do you wanna play a game? (y/n)\n");
    scanf("%c\n", &in);
    if(in == 'y' || in == 'Y'){
        int comp = number();
        int hand = 0;
        printf("Chose number:\n 1. Rock\n 2. Paper\n 3. Scissors\n");
        scanf("%d\n", &hand);
        switch (comp - hand)
        {
        case -2:
            lose();
            break;
        case -1:
            win();
            break;
        case 0: 
            tie();
            break;
        case 1:
            lose();
            break;
        case 2:
            win();
            break;
        default:
            printf("Wrong input\n");
            break;
        }
        return 0;
    }
    else{
        printf("Ok :(\n");
        return 0;
    }
}