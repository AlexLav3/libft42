/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elavrich <elavrich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 19:57:03 by elavrich          #+#    #+#             */
/*   Updated: 2024/09/21 16:29:23 by elavrich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

static int	space(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == '\r' || c == '\v'
		|| c == '\f')
		return (1);
	else
		return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	sign = 1;
	i = 0;
	result = 0;
	while (space(str[i]))
		++i;
	if (str[i] == '-')
	{
		sign *= -1;
		++i;
	}
	else if (str[i] == '+')
	{
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		++i;
	}
	++i;
	return (result * sign);
}

// int	main(void)
// {
// 	char	str[100] = "-+977 a8786";

// 	printf("%i\n %i", ft_atoi(str), atoi(str));
// }
