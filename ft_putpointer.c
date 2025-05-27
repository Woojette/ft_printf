#include "ft_libft.h"

void    ft_putpointer(void *n)
{
    // printf("%lu\n", n);
    if (!n)
    {
        write(1, "(nil)", 5);
        return ;
    }
    write(1, "0x", 2);
    ft_putnbr_hexa_min((unsigned long)n);
}

// int main()
// {
//     // char *test = "Bonjour";
//     char *test = NULL;
//     ft_putpointeur((unsigned long)test);
//     printf("%p\n\n", test);

//     // test = "123456789132465789";
//     // ft_putpointeur((unsigned long)test);
//     // printf("%p\n\n", test);
//     // test = "abcdefiopioipoiipoip";
//     // ft_putpointeur((unsigned long)test);
//     // printf("%p\n\n", test);
// }