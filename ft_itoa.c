/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oishchen <oishchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 18:53:51 by oishchen          #+#    #+#             */
/*   Updated: 2025/03/14 19:29:03 by oishchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	n_size(int n)
{
	int	len;

	len = 1;
	if (n < 0)
	{
		len++;
		n *= -1;
	}
	while (n >= 10)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		size;
	int		n_cpy;
	char	*res;

	if (n <= -2147483648)
		return ("-2147483648");
	else if (n >= 2147483647)
		return ("2147483647");
	size = n_size(n);
	res = (char *)malloc((size + 1) * sizeof(char));
	if (!res)
		return (NULL);
	if (n < 0)
	{
		res[0] = '-';
		n *= -1;
	}
	while (size)
	{
		res = n % 10 + '0';
		n /= 10;
	}
	return (res);
}
