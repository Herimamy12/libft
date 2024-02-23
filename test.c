/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nherimam <nherimam@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 06:57:05 by nherimam          #+#    #+#             */
/*   Updated: 2024/02/23 10:16:15 by nherimam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_count(int n)
{
	int	count;

	count = 0;
	if (n < 0)
		n *= -1;
	while (n > 0)
	{
		count++;
		n /= 10;
	}
	return (count);
}

char	*ft_revstr(char *str)
{
	int		i;
	int		len;
	char	*dst;

	i = 0;
	len = strlen(str);
	dst = (char *)malloc(sizeof(char) * (len + 1));
	while ((len - 1) >= 0)
	{
		dst[i] = str[len - 1];
		i++;
		len--;
	}
	dst[i] = '\0';
	return (dst);
}

char	*ft_itoa(int n)
{
	int		i;
	int		count;
	char	*str;

	str = NULL;
	count = ft_count(n);
	if (n == 0 || count == 0)
		return (0);
	if (n < 0)
	{
		n *= -1;
		count += 1;
		str = (char *)malloc(sizeof(char) * (count + 1));
		if (str == NULL)
			return (NULL);
		str[count - 1] = '-';
		str[count] = '\0';
	}
	else
	{
		str = (char *)malloc(sizeof(char) * (count + 1));
		if (str == NULL)
			return (NULL);
	}
	i = 0;
	while (i < count)
	{
		if (str[i] != '-')
			str[i] = (n % 10) + 48;
		n = n / 10;
		i++;
	}
	str[i] = '\0';
	str = ft_revstr(str);
	return (str);
}

int main()
{
    int i = 123;
    char    *str;
    
    str = ft_itoa(i);
    printf ("%s", str);
}

