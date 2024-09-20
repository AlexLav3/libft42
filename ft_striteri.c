/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elavrich <elavrich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 21:01:03 by elavrich          #+#    #+#             */
/*   Updated: 2024/09/20 22:33:49 by elavrich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "ft_strlen.c"
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;
	char			*ptr;

	ptr = s;
	i = 0;
	while (i < ft_strlen(s))
	{
		(*f)(i, ptr);
		i++;
	}
	ptr[i] = '\0';
}
// void	to_upper(unsigned int i, char *s)
// {
// 	unsigned int	k;

// 	k = 0;
// 	while (s[k] >= 'a' && s[k] <= 'z')
// 	{
// 		s[k] = s[k] - 32;
// 		k++;
// 	}
// }

// int	main(void)
// {
// 	char	s1[] = "gdfgsdgdg";

// 	ft_striteri(s1, to_upper);
// 	printf("%s\n", s1);
// }
