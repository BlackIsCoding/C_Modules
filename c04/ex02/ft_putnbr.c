/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoudri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 10:41:03 by akoudri           #+#    #+#             */
/*   Updated: 2025/08/21 11:51:40 by akoudri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_nbisbig(int i, int nb, char arr[])
{
	while (nb > 0)
	{
		arr[i] = (nb % 10) + 48;
		nb = nb / 10;
		i++;
	}
	while (i > 0)
	{
		ft_putchar(arr[--i]);
	}
}

void	ft_putnbr(int nb)
{
	int		i;
	char	arr[11];

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= 0 && nb <= 9)
	{
		ft_putchar(nb + 48);
		return ;
	}
	else if (nb > 9)
	{
		i = 0;
		ft_nbisbig(i, nb, arr);
	}
}
