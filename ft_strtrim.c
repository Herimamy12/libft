/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nherimam <nherimam@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 08:35:54 by nherimam          #+#    #+#             */
/*   Updated: 2024/02/23 08:36:21 by nherimam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_countfirst(char const *s1; char const *set)
{
	int	i;

	i = 0;
	while (s1[i])
}

int	ft_countlast(char const *s1; char const *set)
{

}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		lf;
	int		ll;
	size_t	i;
	size_t	len;
	char	*trim;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	lf = ft_countfirst(char const *s1, char const *set);
	ll = ft_countlast(char const *s1, char const *set);
	len = ft_strlen(s1) - (lf + ll);
	trim = (char *)malloc(sizeof(char) * len);
}
