/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elavrich <elavrich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 16:00:20 by elavrich          #+#    #+#             */
/*   Updated: 2024/09/16 18:26:37 by elavrich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <unistd.h>

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*char_ptr;

	i = 0;
	char_ptr = (char *)s;
	while (char_ptr[i])
	{
		if (char_ptr[i] == c)
		{
			return (&char_ptr[i]);
		}
		i++;
	}
	return (NULL);
}
