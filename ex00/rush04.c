/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shashemi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 14:45:55 by shashemi          #+#    #+#             */
/*   Updated: 2024/08/10 17:47:16 by shashemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c);

int	rush(int x, int y)
{
	int	i;
	int	j;

	i = 1;
	if (y < 1 || x < 1)
		return (2);
	while (i <= y)
	{
		j = 1;
		while (j <= x)
		{
			if ((i == 1 && j == 1) || (i == y && j == x))
				ft_putchar('A');
			else if ((i == 1 && j == x) || (i == y && j == 1))
				ft_putchar('C');
			else if ((i == 1 || i == y) || (j == 1 || j == x))
				ft_putchar('B');
			else
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
	return (1);
}
