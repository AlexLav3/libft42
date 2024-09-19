/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elavrich <elavrich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 16:34:42 by elavrich          #+#    #+#             */
/*   Updated: 2024/09/19 22:31:05 by elavrich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int	is_separator(char c, const char charset)
{
	return (c == charset);
}

int	count_segments(const char *str, char charset)
{
	int	count;
	int	in_segment;

	count = 0;
	in_segment = 0;
	while (*str)
	{
		if (is_separator(*str, charset))
		{
			if (in_segment)
			{
				in_segment = 0;
			}
		}
		else
		{
			if (!in_segment)
			{
				count++;
				in_segment = 1;
			}
		}
		str++;
	}
	return (count);
}

char	**ft_split(const char *s, char c)
{
	int		i;
	int		k;
	int		start;
	char	**array;

	i = 0;
	k = 0;
	array = malloc((count_segments(s, c) + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	while (s[i])
	{
		if (!is_separator(s[i], c))
		{
			start = i;
			while (s[i] && !is_separator(s[i], c))
				i++;
			array[k] = malloc((i - start + 1) * sizeof(char *));
			ft_strncpy(array[k], &s[start], i - start);
			array[k][i - start] = '\0';
			k++;
		}
		else
			i++;
	}
	array[k] = NULL;
	return (array);
}
// int	main(void)
// {
// 	char	s1[90] = "split ||this|for|me|||||!|";
// 	char	s2;
// 	char	**result;
// 	int		i;

// 	s2 = '|';
// 	i = 0;
// 	result = ft_split(s1, s2);
// 	while (result[i])
// 	{
// 		printf("%s", result[i]);
// 		i++;
// 	}
// }
