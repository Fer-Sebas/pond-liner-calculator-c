#include <stdio.h>
#include <stdlib.h>

float calculateLinerWidth (float pondWith, float pondHeight, float pondEdgeOverlap) {
    float neededLinerWidth = (pondWith + (pondHeight * 2)) + (pondEdgeOverlap * 2);
    return neededLinerWidth;
}

float calculateLinerLenght (float pondLenght, float pondHeight, float pondEdgeOverlap) {
    float neededLinerLenght = (pondLenght + (pondHeight * 2)) + (pondEdgeOverlap * 2);
    return neededLinerLenght;
}

int main (void) {

    float measuredPondWidth, measuredPondHeight, measuredPondLenght, pondEdgeOverlap, neededLinerWidth, neededLinerLenght;

    printf("Welcome to the pond liner calculator written in C\n\n");    

    printf("Please type your pond widest point in cm: ");
    scanf("%f", &measuredPondWidth);

    printf("Please type your pond longest point in cm: ");
    scanf("%f", &measuredPondLenght);

    printf("Please type your pond deepest point in cm: ");
    scanf("%f", &measuredPondHeight);

    printf("Please state your desired pond edge overlap in cm: ");
    scanf("%f", &pondEdgeOverlap);

    printf(
        "\n\nYou require the following amount of pond liner:\n\nW %.1f * L %.1f m \n", 
        calculateLinerWidth(measuredPondWidth, measuredPondHeight, pondEdgeOverlap), 
        calculateLinerLenght(measuredPondLenght, measuredPondHeight, pondEdgeOverlap)
    ); 

    system("pause"); 
    return 0;
}