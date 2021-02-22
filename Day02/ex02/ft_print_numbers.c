#include <unistd.h>
void    ft_print_numbers(void);
void    ft_putchar(char c);

int     main(void){
    ft_print_numbers();
    return(0);
}

void    ft_print_numbers(void){
    int i;

    i = 0;
    while(i < 10){
        ft_putchar('0' + i);
        i++;
    }
}

void ft_putchar(char c){
    write(1, &c, 1);
}