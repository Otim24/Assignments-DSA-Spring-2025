#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, X, i;

    //Taking input for domestic animals
    printf("Enter the number of domestic animals: ");
    scanf("%d", &N);
    char domestic_animals[N][50];

    printf("Enter names of %d domestic animals:\n", N);
    for(i = 0; i < N; i++){
    scanf("%s", domestic_animals[i]);
    }

     //Taking input for wild animals
    printf("Enter the number of wild animals: ");
    scanf("%d", &X);
    char wild_animals[X][50];

    printf("Enter names of %d domestic animals:\n", X);
    for(i = 0; i < X; i++){
    scanf("%s", domestic_animals[i]);
    }

       //Taking for all animals
    printf("\nList for animals:\n");
    for (i = 0; i < N; i++){
    printf("%s\n", domestic_animals[i]);
    }
    for(i = 0; i < X; i++){
    scanf("%s\n", domestic_animals[i]);
    }

}
