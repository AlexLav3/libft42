/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elavrich <elavrich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 16:00:02 by elavrich          #+#    #+#             */
/*   Updated: 2024/09/17 17:18:14 by elavrich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*char_ptr;
	char	*char_ptr2;

	i = 0;
	char_ptr = (char *)dest;
	char_ptr2 = (char *)src;
	if (!dest && !src)
		return (0);
	while (i < n)
	{
		char_ptr[i] = char_ptr2[i];
		i++;
	}
	return (dest);
}
