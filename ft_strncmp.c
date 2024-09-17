/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elavrich <elavrich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 15:18:15 by elavrich          #+#    #+#             */
/*   Updated: 2024/09/17 21:35:45 by elavrich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n < i)
	{
		return (s1[i] - s2[i]);
	}
	while ((s1[i] && s1[i]) && i < n)
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
// int	main(void)
// {
// 	char	str1[50] = "Hello";
// 	char	str2[50] = "Hellz";
// 	printf("%d\n %d", ft_strncmp(str1, str2, 4), strncmp(str1, str2, 4));
// }
