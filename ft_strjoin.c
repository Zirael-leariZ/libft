/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oishchen <oishchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 17:09:12 by oishchen          #+#    #+#             */
/*   Updated: 2025/03/14 14:31:19 by oishchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len_s1;
	int		len_s2;
	char	*joined;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	joined = (char *)malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (len_s1 == 0 && len_s2 == 0)
	{
		joined = ft_calloc(1, 1);
		return (joined);
	}
	ft_strlcpy(joined, s1, len_s1 + 1);
	ft_strlcpy(joined + len_s1, s2, len_s2 + 1);
	return (joined);
}
