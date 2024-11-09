#include <unistd.h>

void ft_print_alphabet(void)
{
	char	iter;

	iter = 'a';
	while(iter <= 'z')
	{
		write(1,&iter,1);
		iter += 1;
	}
}

int	main(void)
{
	ft_print_alphabet();
	return(0);
}
