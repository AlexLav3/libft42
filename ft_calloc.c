/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elavrich <elavrich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 20:13:17 by elavrich          #+#    #+#             */
/*   Updated: 2024/09/19 21:36:43 by elavrich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (nmemb == 0 || size == 0)
		ptr = NULL;
	ptr = malloc(nmemb * size);
	return (ptr);
}
// int	main(void)
// {
// 	int	n;
// 	int	*array;

// 	n = 5;
// 	array = (int *)calloc(n, sizeof(int));
// 	for (int i = 0; i < n; i++) {
//       printf("%d ", array[i]);
//    }
// }
