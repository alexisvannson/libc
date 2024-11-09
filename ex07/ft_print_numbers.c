#include <unistd.h>

void ft_print_numbers(void)
{
	char	iter;

	iter = '0';
	while(iter <= '9')
	{
		write(1, &iter, 1);
		iter += 1;
	}
}

int	main(void)
{
	ft_print_numbers();
	return(0);
}
