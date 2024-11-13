/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avannson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 12:55:14 by avannson          #+#    #+#             */
/*   Updated: 2024/11/10 13:14:57 by avannson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;

	if (min >= max)
		return (0);
	arr = (int *) malloc(((max - min) * sizeof(int)) + 1);
	if (!arr)
		return (NULL);
	i = 0;
	while (min < max)
	{
		arr[i] = min;
		min ++;
		i++;
	}
	arr[i] = 0;
	return (arr);
}
/*
int	main(void)
{
	int	i;
	int	*numbers = ft_range(4, 12);
	
	i = 0;
	while(numbers[i] != 0)
	{
		printf("%i ", numbers[i]);
		i++;
	}
	return (0);

}*/
