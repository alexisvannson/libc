/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avannson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 12:17:43 by avannson          #+#    #+#             */
/*   Updated: 2024/11/10 15:47:03 by avannson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char	iter;

	iter = 'a';
	while (iter <= 'z')
	{
		ft_putchar(iter);
		iter += 1;
	}
}
