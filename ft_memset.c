/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nherimam <nherimam@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 06:39:46 by nherimam          #+#    #+#             */
/*   Updated: 2024/02/20 06:41:41 by nherimam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*tmp;

	i = 0;
	tmp = (unsigned char *) s;
	while (i < n)
	{
		tmp[i] = c;
		i++;
	}
	s = (void *)tmp;
	return (s);
}
