/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oishchen <oishchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 15:16:47 by oishchen          #+#    #+#             */
/*   Updated: 2025/03/13 15:31:55 by oishchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*res;

	if (size == 0 || count == 0)
		return (NULL);
	res = (void *)(malloc (size * count));
	if (!res)
		return (NULL);
	ft_memset(res, 0, size * count);
	return (res);
}
