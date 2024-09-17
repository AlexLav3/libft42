/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elavrich <elavrich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 15:59:52 by elavrich          #+#    #+#             */
/*   Updated: 2024/09/17 16:52:34 by elavrich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
