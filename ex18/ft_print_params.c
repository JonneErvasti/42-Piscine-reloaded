/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jervasti <jervasti@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 14:49:54 by jervasti          #+#    #+#             */
/*   Updated: 2021/11/04 14:16:30 by jervasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_params(int i, char **str)
{
	int	k;

	k = 0;
	while (str[i][k] != '\0')
	{
		ft_putchar(str[i][k]);
		k++;
	}
}

int	main(int ac, char **av)
{
	int	x;

	x = 1;
	if (ac > 1)
	{
		while (x < ac)
		{
			ft_print_params(x, av);
			ft_putchar('\n');
			x++;
		}
	}
	return (0);
}
