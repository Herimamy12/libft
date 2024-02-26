/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nherimam <nherimam@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 06:57:05 by nherimam          #+#    #+#             */
/*   Updated: 2024/02/23 06:57:09 by nherimam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count(int n)
{
	int	count;

	count = 0;
	if (n <= 0)
		count++;
	while (count != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		sign;
	int		count;
	char	*str;

	sign = 0;
	count = ft_count(n);
	if (!(str = (char *)malloc(sizeof(char) * (count + 1))))
		return (NULL);
	*(str + count) = '\0';
	if (n < 0)
	{
		sign = 1;
		n *= -1;
	}
	while (count--)
	{
		*(str + count) = 48 + (n % 10);
		n /= 10;
	}
	if (sign)
		*str = 45;
	return (str);
}
