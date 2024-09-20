/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elavrich <elavrich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 19:55:37 by elavrich          #+#    #+#             */
/*   Updated: 2024/09/20 17:31:42 by elavrich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "ft_strlen.c"
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;
	int		str_len;

	str_len = ft_strlen(s);
	i = 0;
	if (start >= ft_strlen(s))
	{
		str = malloc(1);
		return (str);
	}
	if (len > str_len - start)
		len = str_len - start;
	str = malloc((len + 1) * sizeof(char));
	while (i < len && s[start + i])
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
// int	main(void)
// {
// 	char	*s;
// 	char	*sub;

// 	s = "Hello, world!";
// 	sub = ft_substr(s, 7, 5);
// 	if (sub)
// 	{
// 		printf("Substring: %s\n", sub); // Output should be "world"
// 		free(sub);
// 	}
// 	return (0);
// }
