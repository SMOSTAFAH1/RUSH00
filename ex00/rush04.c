/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shashemi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 14:45:55 by shashemi          #+#    #+#             */
/*   Updated: 2024/08/11 11:27:45 by shashemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

int	check_error(int x, int y)
{
	if (y < 1 || x < 1)
	{
		write(1, "¡Oye, solo se aceptan dimensiones positivas!\n", 46);
		return (1);
	}
	return (0);
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 1;
	if (check_error(x, y))
		return ;
	while (i <= y)
	{
		j = 1;
		while (j <= x)
		{
			if ((i == 1 && j == 1) || ((i == y && j == x)
					&& (y > 1) && (x > 1)))
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
}
