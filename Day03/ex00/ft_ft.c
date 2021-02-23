#include <stdio.h>
void    ft_ft(int *nbr);


int     main(void){
    int nbr;
    nbr = 10;
    printf("nbr = %d\n", nbr);
    ft_ft(&nbr);
    printf("nbr = %d\n", nbr);
}

void    ft_ft(int *nbr){
    *nbr = 42;
}