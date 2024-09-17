/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elavrich <elavrich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 16:34:42 by elavrich          #+#    #+#             */
/*   Updated: 2024/09/17 19:17:09 by elavrich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, char *src, unsigned int n)
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

int	is_separator(char c, const char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	count_segments(char *str, const char *charset)
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

char	**ft_split(const char *s, char c);
{
	int	i;
	int	k;
	int	start;
	char	**array;

	i = 0;
	k = 0;
	array = malloc((count_segments(s, c) + 1) * sizeof(char *));
	while (s[i])
	{
		if (!is_separator(s[i], c))
		{
			start = i;
			while (s[i] && !is_separator(s[i], c))
				i++;
			array[k] = malloc((i + 1) * sizeof(char));
			ft_strncpy(array[k], &s[start], i - start);
			k++;
		}
		else
			i++;
	}
	array[k] = NULL;
	return (array);
}
