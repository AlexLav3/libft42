/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elavrich <elavrich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 16:00:45 by elavrich          #+#    #+#             */
/*   Updated: 2024/09/16 20:28:49 by elavrich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <unistd.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t		i;
	const char	*char_ptr;
	const char	*char_ptr2;

	i = 0;
	char_ptr = (const char *)s1;
	char_ptr2 = (const char *)s2;
	while (i < n && char_ptr[i] == char_ptr2[i])
	{
		i++;
	}
	return (char_ptr[i] - char_ptr2[i]);
}
