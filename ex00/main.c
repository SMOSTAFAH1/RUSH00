/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shashemi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 10:44:26 by shashemi          #+#    #+#             */
/*   Updated: 2024/08/10 17:41:16 by shashemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	rush(int x, int y);

int	main(void)
{
	int	i;

	i = rush(-10, 10);
	if (i == 1)
		return (0);
	else if (i == 2)
		write(1, "Oye, solo se aceptan dimensiones positivas\n", 43);
}
