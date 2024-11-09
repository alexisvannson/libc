#include <stdio.h>
int ft_strlen(char *str)
{
	int	i;
	
	i = 0;
	while(str[i])
		i += 1;
	return (i);
}

int	main(void)
{
	printf("%i",ft_strlen("Alexis"));
	return(0);
}
