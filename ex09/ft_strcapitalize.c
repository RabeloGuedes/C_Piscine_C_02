/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 12:04:28 by arabelo-          #+#    #+#             */
/*   Updated: 2023/03/07 14:39:53 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_char_valid(char c)
{
	if (c >= 'a' && c <= 'z'
		|| c >= 'A' && c <= 'Z'
		|| c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

int	ft_is_char_lowercase(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}

int	ft_is_char_uppercase(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}

void	ft_iteration(char *str, int index, int should_upper)
{
	while (str[index] != '\0')
	{
		if (ft_is_char_valid(str[index]))
		{
			if (should_upper && ft_is_char_lowercase(str[index]))
			{
				str[index] = str[index] - 32;
			}
			else if (!should_upper && ft_is_char_uppercase(str[index]))
			{
				str[index] = str[index] + 32;
			}
			should_upper = 0;
		}
		else
		{
			should_upper = 1;
		}
		index++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	index;
	int	should_upper;

	index = 0;
	should_upper = 1;
	ft_iteration(str, index, should_upper);
	return (str);
}
