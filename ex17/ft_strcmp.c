/* return an integer greater than, equal to, or less than 0, according as the string s1 is
     greater than, equal to, or less than the string s2.*/

#include <stdio.h>

int	ft_strdup(char *s1, char *s2)
{
	int 	i;

	i = 0;
	while(s1[i] && s2[i])
	{
		if (s1[i] == s2[i])
			i += 1;
		else
			return (s2[i] - s1[i]);
	}
	if (s1[i])
		return(s1[i]);
	else
		return (-s2[i]);
}

int	main(void)
{
	printf("%i\n", ft_strdup("a","b"));
	printf("%i\n", ft_strdup("al","alexis"));
	printf("%i\n", ft_strdup("lola","lol"));
	printf("%i\n", ft_strdup("loli","loli"));
	return (0);
}
