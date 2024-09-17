/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elavrich <elavrich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 15:59:52 by elavrich          #+#    #+#             */
/*   Updated: 2024/09/16 18:39:33 by elavrich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <unistd.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*char_ptr;

	i = 0;
	char_ptr = (char *)s;
	while (char_ptr[i] && i < n)
	{
		char_ptr[i] = 0;
		i++;
	}
}

// int	main(void)
// {
// }
