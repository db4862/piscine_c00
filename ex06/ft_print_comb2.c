/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bellona <bellona@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 13:35:00 by bellona           #+#    #+#             */
/*   Updated: 2026/02/12 13:38:12 by bellona          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	ft_put_number(int n)
{
	char	tens;
	char	ones;

	tens = (n / 10) + '0';
	ones = (n % 10) + '0';
	write(1, &tens, 1);
	write(1, &ones, 1);
}

static void	ft_print_pair(int a, int b)
{
	char	sep[2];

	sep[0] = ',';
	sep[1] = ' ';
	ft_put_number(a);
	write(1, " ", 1);
	ft_put_number(b);
	if (a != 98 || b != 99)
		write(1, sep, 2);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_print_pair(a, b);
			b++;
		}
		a++;
	}
}
