/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oishchen <oishchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 09:49:34 by oishchen          #+#    #+#             */
/*   Updated: 2025/03/13 13:15:21 by oishchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *to, const void *from, size_t len)
{
	char		*ptr;
	char		*src_cpy;

	ptr = (char *)to;
	src_cpy = (char *)from;
	while (len--)
	{
		*ptr++ = *src_cpy++;
	}
	return (to);
}
