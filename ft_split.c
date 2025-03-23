/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oishchen <oishchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 11:18:36 by oishchen          #+#    #+#             */
/*   Updated: 2025/03/22 16:02:53 by oishchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include "libft.h"

static int	ft_count_words(char const *str, char sep)
{
	int	words;
	int	i;

	if (!(*str))
		return (0);
	words = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] != sep && (i == 0 || str[i - 1] == sep))
			words++;
		i++;
	}
	return (words);
}

int	nword_len(char const *str, char sep)
{
	int	len;

	len = 0;
	while (*str && *str != sep)
	{
		len++;
		str++;
	}
	return (len);
}

char	**ft_split(char const *str, char sep)
{
	int		split_pos;
	int		str_pos;
	char	**result;
	int		word_num;
	int		next_len;

	word_num = ft_count_words(str, sep);
	result = (char **)malloc((word_num + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	str_pos = 0;
	split_pos = 0;
	while (str[str_pos])
	{
		while (str[str_pos] == sep)
			str_pos++;
		if (str[str_pos])
		{
			next_len = nword_len((str + str_pos), sep);
			result[split_pos++] = ft_substr(str, str_pos, next_len);
			str_pos += next_len;
		}
	}
	result[split_pos] = (NULL);
	return (result);
}
