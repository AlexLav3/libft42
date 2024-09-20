/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elavrich <elavrich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 18:14:12 by elavrich          #+#    #+#             */
/*   Updated: 2024/09/20 19:34:12 by elavrich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	int_len(long nbr)
{
	int	count;

	count = 0;
	if (nbr < 0)
	{
		count++;
		nbr = -nbr;
	}
	if (nbr == 0)
		count++;
	while (nbr != 0)
	{
		nbr /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*num;
	int		len;
	int		i;
	long	nbr;

	nbr = n;
	len = int_len(nbr);
	num = malloc(len + 1 * (sizeof(char *)));
	while (nbr != 0)
	{
		num[i] = ((nbr % 10) + 48);
		nbr = nbr / 10;
		i++;
	}
	num[i] = '\0';
	return (num);
}
int	main(void)
{
	printf("%s", ft_itoa(-3));
}
