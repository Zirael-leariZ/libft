/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oishchen <oishchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 15:47:25 by oishchen          #+#    #+#             */
/*   Updated: 2025/03/24 10:21:17 by oishchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int a)
{
	return (a >= 32 && a <= 126);
}
