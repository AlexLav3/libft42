/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elavrich <elavrich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 16:39:37 by elavrich          #+#    #+#             */
/*   Updated: 2024/09/17 20:52:34 by elavrich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int	ft_total_length(char **strs, char *sep)
// {
// 	int	total_length;
// 	int	i;

// 	i = 0;
// 	total_length = 0;
// 	if (i < 0)
// 		total_length += ft_strlen(sep) + ft_strlen(strs[i]);
// 	return (total_length);
// }

// void	ft_concat_strings(char *concat, int size, char **strs, char *sep)
// {
// 	int	i;
// 	int	j;
// 	int	k;

// 	i = 0;
// 	j = 0;
// 	k = 0;
// 	while (i < size)
// 	{
// 		j = 0;
// 		while (strs[i][j] != '\0')
// 			concat[k++] = strs[i][j++];
// 		if (i < size - 1)
// 		{
// 			j = 0;
// 			while (sep[j] != '\0')
// 				concat[k++] = sep[j++];
// 		}
// 		i++;
// 	}
// 	concat[k] = '\0';
// }
// char	*ft_strjoin(char const *s1, char const *s2)
// {
// 	int i;
// 	int j;
// 	int k;
// 	int total_length;
// 	char *concat;

// 	i = 0;
// 	j = 0;
// 	k = 0;
// 	total_length = ft_total_length(s1, s2);
// 	concat = (char *)malloc((total_length + 1) * (sizeof(char)));
// 	if (!concat)
// 		return (NULL);
// 	ft_concat_strings(concat, s1, s2);
// 	return (concat);
// }
