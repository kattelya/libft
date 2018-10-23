/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaanggas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 01:51:50 by kaanggas          #+#    #+#             */
/*   Updated: 2018/10/22 10:58:56 by kaanggas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	get_ndigits(int num)
{
	int c;
	
	c = 0;
	if (num == 0)
		return (1);
	while (num)
	{
		num = num / 10;
		c++;
	}
	return (c);
}

char	*ft_itoa(int n)
{
	int		digits;
	int		sign;
	char	*result;

	sign = (n < 0) ? 1 : 0;
	digits = get_ndigits(n);
	if (!(result = ft_strnew((size_t)(digits + sign))))
		return (result);
	if (sign)
		result[0] = '-';
	else if (n > 0)
		digits--;
	else
		result[0] = '0';
	while (n)
	{
		if (n > 0)
			result[digits] = '0' + (n % 10);
		else
			result[digits] = '0' + -(n % 10);
		n = n / 10;
		digits--;
	}
	return (result);
}

/* size_t	ft_num_len(int n)
{
	if (n < 0)
		return (-1 * n/ 10 ? (ft_num_len(-1 *n / 10) + 1) : 1) + 1;
	return (n / 10 ? (ft_num_len(n / 10) + 1) : 1);
}

static char	*toa(int n)
{
	char	*buf;
	int 	i;
	size_t	len;

	i = 0;
	len = ft_num_len(n);
	if ((buf = ft_strnew(len)))
	{
		if (n < 0)
		{
			*buf = '-';
			n *= -1;
		}
		while (len--)
		{
			if (buf[len])
				break ;
			buf[len] = (char) (n % 10 + '0');
			n = n / 10;
		}
	}
	return (buf);
}
*/ 
/* int		no_of_digits(int n)
{
	int digit_count; 
	
	digit_count = 0;
	if (!n)
		return (1);
	while (n > 0)
	{
		digit_count++;
		n /= 10;
	}
	return (digit_count);
}

int		main()
{
	int x =  3453455;
	int	u = -345230999;
	printf("print these integers %s\n", ft_itoa(x));
	printf("print these integers %s\n", ft_itoa(u));
	return (0);
}
*/
