/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elavrich <elavrich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 16:00:09 by elavrich          #+#    #+#             */
/*   Updated: 2024/09/17 22:01:22 by elavrich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*char_ptr;
	const char	*char_ptr2;

	i = 0;
	char_ptr = (char *)dest;
	char_ptr2 = (const char *)src;
	if (char_ptr > char_ptr2)
	{
		i = n;
		while (i > 0)
		{
			i--;
			char_ptr[i] = char_ptr2[i];
		}
	}
	else
	{
		while (i < n)
		{
			char_ptr[i] = char_ptr2[i];
			i++;
		}
	}
	return (dest);
}
// int main()
// {
// 	char dest[90] = "kkkk";
// 	char src[90] = "gdgfdg";
// 	ft_memmove(dest, src, 8);
// 	printf("%s", dest);
// }
