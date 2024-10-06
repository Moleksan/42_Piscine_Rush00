/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rushC.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moleksan <moleksan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 16:10:37 by moleksan          #+#    #+#             */
/*   Updated: 2023/07/16 21:23:55 by moleksan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	flrow(int x)
{
	int		i;

	i = 1;
	ft_putchar('A');
	while (i < x - 1)
	{
		ft_putchar('B');
		i++;
	}
	if (x != 1)
		ft_putchar('C');
	ft_putchar('\n');
}

void	mrow(int x, int y)

{
	int		d;
	int		m;

	m = 1;
	while (m < y - 1)
	{
		ft_putchar('B');
		d = 1;
		while (d < x - 1)
		{
			ft_putchar(' ');
			d++;
		}
		if (x != 1)
			ft_putchar('B');
		ft_putchar('\n');
		m++;
	}
}

void	rush(int x, int y)
{
	flrow(x);
	if (y != 1)
	{
		mrow(x, y);
		flrow(x);
	}
}
