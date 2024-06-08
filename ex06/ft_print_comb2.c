/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanebaro <hanebaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 00:38:30 by hanebaro          #+#    #+#             */
/*   Updated: 2023/10/19 01:54:35 by hanebaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	mywrite(int a)
{
	write(1, &a, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			mywrite(48 + a / 10);
			mywrite(48 + a % 10);
			write(1, " ", 1);
			mywrite(48 + b / 10);
			mywrite(48 + b % 10);
			if (a != 98)
				write(1, ", ", 1);
			b++;
		}
		a++;
	}
}
