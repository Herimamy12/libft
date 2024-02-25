/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nherimam <nherimam@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 21:53:27 by herimamy          #+#    #+#             */
/*   Updated: 2024/02/25 21:53:33 by herimamy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		if (n == -2147483648)
		{
			ft_putnbr_fd('2', fd);
			ft_putnbr_fd(147483648, fd);
			return ;
		}
		n = -n;
	}
	if (9 < n)
		ft_putnbr_fd(n / 10, fd);
	ft_putchar_fd(n % 10 + 48, fd);
}
