#include <unistd.h>

void ft_putstr(char *str)
{
        int     i;

        i = 0;
        while(str[i])
        {
                write(1,& str[i], 1);
                i += 1;
        }
}

int     ft_strcmp(char *s1, char *s2)
{
        int     i;

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

void	ft_sort_params(int argc, char **argv)
{
	int	i;
	int	j;
	char	*temp;

	i = 1;

	while(i < argc -1)
	{
		j = i + 1;
		while (j <argc)
		{
			if (ft_strcmp(argv[i], argv[j]) < 0)
			{
				temp = argv[i];
				argv[i] = argv[j];
				argv[j] = temp;
			}
			j += 1;
		}
		i += 1;
	}
}

int     main(int argc, char **argv)
{
        int     i;

        i = 1;
	ft_sort_params(argc, argv);
        while (i < argc)
        {
                ft_putstr(argv[i]);
                write(1, "\n", 1);
                i += 1;
        }
        return (0);
}

