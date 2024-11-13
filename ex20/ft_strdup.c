/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avannson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 12:52:34 by avannson          #+#    #+#             */
/*   Updated: 2024/11/10 16:04:17 by avannson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <errno.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i += 1;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*copy;

	i = 0;
	len = ft_strlen(src);
	copy = malloc(len * sizeof(char) + 1);
	if (!copy)
	{
		errno = ENOMEM;
		return (NULL);
	}
	while (src[i])
	{
		copy[i] = src[i];
		i += 1;
	}
	copy[i] = src[i];
	return (copy);
}
