/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elavrich <elavrich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 16:00:35 by elavrich          #+#    #+#             */
/*   Updated: 2024/09/16 22:35:04 by elavrich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <unistd.h>

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t		i;
	const char	*char_ptr;
	char		last;

	i = 0;
	char_ptr = (const char *)str;
	while (char_ptr[i] && i <= n)
	{
		if (char_ptr[i] == c)
		{
			last = char_ptr[i];
		}
		i++;
	}
	return (0);
}
