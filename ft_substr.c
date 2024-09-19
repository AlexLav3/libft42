/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elavrich <elavrich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 19:55:37 by elavrich          #+#    #+#             */
/*   Updated: 2024/09/19 21:39:56 by elavrich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strlen.c"
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	i = 0;
	if (start > ft_strlen(s))
		return (NULL);
	str = malloc((len + 1) * sizeof(char *));
	while (i < len)
	{
		str[i] = s[i];
		i++;
	}
	return (str);
}
int	main(void)
{
	char const	idk[90] = "i just want this part #############";
	size_t		len;

	len = 22;
	printf("%s", ft_substr(idk, 0, len));
}
