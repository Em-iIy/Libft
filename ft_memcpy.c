/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwinnink <gwinnink@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 13:43:59 by gwinnink          #+#    #+#             */
/*   Updated: 2021/12/14 13:44:00 by gwinnink         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, void *src, size_t n)
{
	char	*dst2;
	char	*src2;

	dst2 = dst;
	src2 = src;
	if (dst == 0x0 && src == 0x0)
		return (dst);
	while (n--)
	{
		dst2[n] = src2[n];
	}
	return (dst);
}
