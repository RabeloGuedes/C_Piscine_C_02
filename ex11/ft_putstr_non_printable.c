/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 16:57:52 by arabelo-          #+#    #+#             */
/*   Updated: 2023/03/08 22:51:42 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	char const	*hex_table;
	int			index;

	hex_table = "0123456789abcdef";
	index = 0;
	while (str[index])
	{
		if (str[index] < 32 || str[index] > 126)
		{
			ft_putchar('\\');
			ft_putchar(hex_table[str[index] / 16]);
			ft_putchar(hex_table[str[index] % 16]);
		}
		else
			ft_putchar(str[index]);
		index++;
	}
}
