/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwinnink <gwinnink@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 13:43:54 by gwinnink          #+#    #+#             */
/*   Updated: 2022/02/23 10:11:34 by gwinnink         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	const char		*strbuff;

	strbuff = str;
	while (n--)
	{
		if (*strbuff == (char)c)
			return ((void *)strbuff);
		strbuff++;
	}
	return (NULL);
}
