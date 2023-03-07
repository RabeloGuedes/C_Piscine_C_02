/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 15:56:02 by arabelo-          #+#    #+#             */
/*   Updated: 2023/03/07 16:43:09 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	index;
	int	counter;

	index = 0;
	counter = 0;
	while (src[counter])
	{
		counter++;
	}
	while (size && src[index] && index < size - 1)
	{
		dest[index] = src[index];
		index++;
	}
	if (size)
		dest[index] = '\0';
	return (counter);
}
