#include <stdio.h>
int ft_iterative_factorial(int nb)
{
	int	val;
	int	counter;

	val = 1;
	counter = 1;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (counter <= nb)
	{
		val *= counter;
		counter += 1;
	}
	return (val);
}

int	main(void)
{
	printf("%i",ft_iterative_factorial(5));
	return (0);
}
