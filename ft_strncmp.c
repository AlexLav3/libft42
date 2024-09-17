/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elavrich <elavrich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 15:18:15 by elavrich          #+#    #+#             */
/*   Updated: 2024/09/16 18:52:46 by elavrich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stddef.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n < 0)
	{
		return (0);
	}
	while ((s1[i] && s2[i] && s1[i] == s2[i]) && i < n)
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
