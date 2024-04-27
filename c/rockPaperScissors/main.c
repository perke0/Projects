#include <stdio.h>
#include <stdlib.h>


int number(void){
    double f = (double)rand() / RAND_MAX;
    return f * 3;
}
int main(void){
    char in, hand;
    int comp = number();
    printf("Do you wanna play a game? (y/n)\n");
    scanf("%c\n", &in);
    if(in == 'y'){
        printf("Chose number:\n 1. Rock\n 2. Paper\n 3. Scissors\n");
        scanf("%c\n", hand);
    }
}