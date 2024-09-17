/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elavrich <elavrich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 15:59:22 by elavrich          #+#    #+#             */
/*   Updated: 2024/09/16 22:03:02 by elavrich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <unistd.h>

void	ft_memset(void *s, int c, size_t n)
{
	char	*char_ptr;
	size_t	i;

	i = 0;
	char_ptr = (char *)s;
	while (n < 0)
	{
		char_ptr[i] = c;
		i++;
	}
}
