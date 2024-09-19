/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elavrich <elavrich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 19:55:52 by elavrich          #+#    #+#             */
/*   Updated: 2024/09/19 20:10:21 by elavrich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strlen.c"
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		k;
	char	*trimmed;

	trimmed = malloc((ft_strlen((char *)s1)) * sizeof(char *) + 1);
	k = 0;
	i = 0;
	while (s1[i])
	{
		i++;
	}
	trimmed[k] = '\0';
	return (trimmed);
}
int	main(void)
{
	char const	s1[90] = "I'm blue dabade";
	char const	s2[90] = "blue";

	printf("%s", ft_strtrim(s1, s2));
}
