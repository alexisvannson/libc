/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avannson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 12:23:19 by avannson          #+#    #+#             */
/*   Updated: 2024/11/10 12:23:48 by avannson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	val;
	int	counter;

	val = 1;
	counter = 1;
	if (nb < 0 | nb > 12)
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
/*
int	main(void)
{
	printf("%i",ft_iterative_factorial(5));
	return (0);
}*/
