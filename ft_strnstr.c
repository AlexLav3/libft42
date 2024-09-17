/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elavrich <elavrich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 16:00:54 by elavrich          #+#    #+#             */
/*   Updated: 2024/09/16 22:45:33 by elavrich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <unistd.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	k;

	k = 0;
	i = 0;
	if (little[0] == '\0')
		return (big);
	i = 0;
	while (big[i] && i < len)
	{
		k = 0;
		while (big[i + k] == little[k])
		{
			k++;
			if (little[k] == '\0')
				return (&big[i]);
		}
		i++;
	}
	return (NULL);
}
