/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 11:42:56 by arabelo-          #+#    #+#             */
/*   Updated: 2023/03/07 14:51:58 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] >= 'a' && str[index] <= 'z')
		{
			str[index] = str[index] - 32;
		}
		index++;
	}
	return (str);
}
