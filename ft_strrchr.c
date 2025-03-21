/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oishchen <oishchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 16:29:41 by oishchen          #+#    #+#             */
/*   Updated: 2025/03/12 16:09:24 by oishchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	*p;

	p = (void *)0;
	while (*s)
	{
		if (*s == c)
			p = (void *)s;
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return ((char *)p);
}
