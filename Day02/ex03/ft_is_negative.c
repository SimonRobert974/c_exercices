#include <unistd.h>
void    ft_putchar(char character);
void    ft_is_negative(int n);

int     main(void) {
    ft_is_negative(-1);
    ft_putchar('\n');
    ft_is_negative(0);
    ft_putchar('\n');
    ft_is_negative(1);
    ft_putchar('\n');
    return(0);
}

void    ft_is_negative(int n) {
    if (n < 0) {
        ft_putchar('N');
    }
    else {
        ft_putchar('P');
    }
}

void    ft_putchar(char character){
    write(1, &character, 1);
}