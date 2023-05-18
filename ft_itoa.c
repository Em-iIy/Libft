/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwinnink <gwinnink@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 13:43:51 by gwinnink          #+#    #+#             */
/*   Updated: 2022/02/22 17:39:28 by gwinnink         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>
#include <stdlib.h>

static int	ft_digits(int n)
{
	int	digits;

	digits = 1;
	while (n >= 10)
	{
		n /= 10;
		digits++;
	}
	return (digits);
}

static char	*ft_fill(int n, int digits, int neg, char *ret)
{
	int	i;

	i = 0;
	if (neg < 0)
	{
		ret[i] = '-';
		i++;
	}
	ret[digits] = 0;
	while (i < digits--)
	{
		ret[digits] = n % 10 + '0';
		n /= 10;
	}
	return (ret);
}

char	*ft_itoa(int n)
{
	int		digits;
	int		neg;
	char	*ret;

	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	neg = 1;
	digits = 1;
	if (n < 0)
	{
		neg = -1;
		digits = ft_digits(n * -1) + 1;
	}
	else
		digits = ft_digits(n);
	ret = (char *)malloc((digits + 1) * sizeof(char));
	if (!ret)
		return (ret);
	ret = ft_fill(n * neg, digits, neg, ret);
	return (ret);
}
