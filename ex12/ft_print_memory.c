/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 18:46:54 by arabelo-          #+#    #+#             */
/*   Updated: 2023/03/08 15:44:53 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(c)
{
	write(1, &c, 1);
}

void	ft_num_hex_transform(void *addr)
{
	char const	*hex_table;
	unsigned long		div;
	unsigned long		mod;

	hex_table = "0123456789abcdef";
	if ((unsigned long)addr > 16)
	{
		div = ((unsigned long)addr) / 16;
		mod = ((unsigned long)addr) % 16;
		addr = (void*)div;
		ft_num_hex_transform((void*)addr);
		addr = (void*)mod;
		ft_num_hex_transform((void*)addr);
	}
	else
	{
		ft_putchar(hex_table[(unsigned long)addr]);
	}
}

void	ft_str_hex_transform(char *str, unsigned int size)
{
	char const	*hex_table;
	int			index;

	hex_table = "0123456789abcdef";
	index = 0;
	while (index < size)
	{
		ft_putchar(hex_table[str[index] / 16]);
		ft_putchar(hex_table[str[index] % 16]);
		if (index % 2 == 1)
			ft_putchar(' ');
		index++;
	}
}

void	ft_putstr(char *str, unsigned int size)
{
	int		index;

	index = 0;
	while (index < size)
	{
		if (str[index] >= 32 && str[index] <= 126)
			ft_putchar(str[index]);
		else
			ft_putchar('.');
		index++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	if (!size)
		return (0);
	ft_num_hex_transform(addr);
	ft_putchar(':');
	ft_putchar(' ');
	ft_str_hex_transform(addr, size);
	ft_putstr(addr, size);
	// ft_putchar('\n');
	return (addr);
}


int	main(void)
{
	char	*str;
	int		i;

	str = "Bonjour les aminches\n\a\tc\a est fou\atout\bce qu onpeut faire avec\v\f\rprint_memory\t\a\r\nlol\0lol\a \t";
	i = 0;
	// printf("%p ", str);
	// printf("%p\n", (str + 16));
	ft_print_memory(str, 100);
	// ft_num_hex_transform(str);
	// ft_str_hex_transform(str);
	// while (str[i])
	// {
	// 	ft_putchar(str[i]);
	// 	ft_putchar(' ');
	// 	i++;
	// }
	return (0);
}
