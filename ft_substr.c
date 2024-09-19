/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elavrich <elavrich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 19:55:37 by elavrich          #+#    #+#             */
/*   Updated: 2024/09/19 19:55:38 by elavrich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_strlen.c"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	i = 0;
	while (s[i])
		i++;
	if (start > ft_strlen((char *)s))
		return (NULL);
	if (len > ft_strlen((char *)s + start))
		len = ft_strlen((char *)s + start);
	str = malloc((len + 1) * sizeof(char *));
	while (i < len)
	{
		str[i] = s[start + 1];
		i++;
	}
	return (str);
}
// int	main(void)
// {
// 	char const		idk[90] = "this is a string";
// 	unsigned int	start;
// 	size_t			len;

// 	start = 4;
// 	len = 4;
// 	ft_substr(idk, start, len);
// 	printf(idk);
// }
