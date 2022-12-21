/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olcoste <olcoste@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 12:20:54 by olcoste           #+#    #+#             */
/*   Updated: 2022/11/30 13:58:15 by olcoste          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putnbr_fd_rec(int n, int fd)
{
	int	t;

	t = (n % 10) + 48;
	if (n > 0)
	{
		ft_putnbr_fd_rec(n / 10, fd);
		write (fd, &t, 1);
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		write (fd, "-2147483648", 11);
	else if (n == 0)
		write(fd, "0", 1);
	else if (0 > n)
	{
		n *= -1;
		write (fd, "-", 1);
		ft_putnbr_fd_rec(n, fd);
	}
	else
		ft_putnbr_fd_rec(n, fd);
}
