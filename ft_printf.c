#include "ft_libft.h"

void	ft_afficher(const char *str, int i, va_list args)
{
	int	count;

	count = 0;
	if (str[i + 1] == 'c')
		ft_putchar(va_arg(args, int));
	if (str[i + 1] == 's')
		ft_putstr(va_arg(args, char *));
	if (str[i + 1] == 'p')
		ft_putpointer(va_arg(args, void *));
	if (str[i + 1] == 'd' || str[i + 1] == 'i')
		ft_putnbr(va_arg(args, int));
	if (str[i + 1] == 'u')
		ft_putnbr_u(va_arg(args, unsigned int));
	if (str[i + 1] == 'x')
		ft_putnbr_hexa_min(va_arg(args, unsigned int));
	if (str[i + 1] == 'X')
		ft_putnbr_hexa_max(va_arg(args, unsigned int));
	if (str[i + 1] == '%')
		write(1, "%", 1);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	va_start(args, str);
	int	i;
	int count;

	count = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			ft_afficher(str, i, args);
			i++;
		}
		else
		{
			write(1, &str[i], 1);
			count++;
		}
		i++;
	}
	va_end(args);
	return (i);
}

int main()
{
	printf("byte:%d",  printf("%s", "Bonjour"));
}