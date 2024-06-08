/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanebaro <hanebaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 22:51:25 by hanebaro          #+#    #+#             */
/*   Updated: 2023/10/19 01:55:25 by hanebaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	c;

	if (nb < -2147483648 || nb > 2147483647)
		return ;
	if (nb < 0)
	{
		write(1, "-", 1);
		if (nb == -2147483648)
		{
			ft_putnbr(2);
			ft_putnbr(147483648);
		}
		else
			ft_putnbr(nb * -1);
	}
	else if (nb >= 0 && nb <= 9)
	{
		c = '0' + nb;
		write(1, &c, 1);
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}
