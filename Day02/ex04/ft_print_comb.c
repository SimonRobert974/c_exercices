#include <unistd.h>
void    ft_print_comb(void);
void    ft_putchar(char c);

int     main(void){
    ft_print_comb();
    return(0);
}

void    ft_print_comb(void){
    int i;
    int j; 
    int k;
    i = 0;
    while(i < 10){
        j = i + 1;
        while(j < 10){
            k = j + 1;
            while(k < 10){
                ft_putchar('0' + i);
                ft_putchar('0' + j);
                ft_putchar('0' + k);
                ft_putchar(',');
                ft_putchar(' ');
                k++;
            }
            j++;
        } 
        i++;
    }
    ft_putchar(8);
    ft_putchar(8);
}

void    ft_putchar(char c){
    write(1, &c, 1);
}