/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oishchen <oishchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 15:35:33 by oishchen          #+#    #+#             */
/*   Updated: 2025/03/13 16:12:45 by oishchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*word;

	word = (char *)malloc(sizeof(char *) * (len + 1));
	if (!word)
		return (NULL);
	ft_strlcpy(res, s + start, len + 1);
	return (res);
}