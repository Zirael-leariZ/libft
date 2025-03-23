/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oishchen <oishchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 09:49:34 by oishchen          #+#    #+#             */
/*   Updated: 2025/03/23 11:57:41 by oishchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *to, const void *from, size_t len)
{
	unsigned char	*ptr;
	unsigned char	*src_cpy;

	ptr = (unsigned char *)to;
	src_cpy = (unsigned char *)from;
	while (len > 0)
	{
		*ptr++ = *src_cpy++;
		len --;
	}
	return (to);
}
