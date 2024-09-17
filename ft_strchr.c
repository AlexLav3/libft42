/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elavrich <elavrich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 16:00:20 by elavrich          #+#    #+#             */
/*   Updated: 2024/09/17 19:20:15 by elavrich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*char_ptr;

	i = 0;
	char_ptr = (char *)s;
	if (char_ptr == NULL)
		return (&char_ptr);
	while (char_ptr[i])
	{
		if (char_ptr[i] == c)
		{
			return (&char_ptr[i]);
		}
		i++;
	}
	if (c == '\0')
		return (&char_ptr[i]);
	return (NULL);
}
