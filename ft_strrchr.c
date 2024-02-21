/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nherimam <nherimam@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 07:13:41 by nherimam          #+#    #+#             */
/*   Updated: 2024/02/21 07:17:11 by nherimam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;
	size_t	len;

	ptr = NULL;
	len = ft_strlen(s);
	while ((len - 1) >= 0)
	{
		ptr = &s[len];
		if (s[len] == c)
			return (ptr);
		len--;
	}
	return (0);
}
