/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jervasti <jervasti@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 16:03:23 by jervasti          #+#    #+#             */
/*   Updated: 2021/11/02 10:00:57 by jervasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	swap(char **a, char **b)
{
	char	*sub;

	sub = *a;
	*a = *b;
	*b = sub;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] == s2[i])
			i++;
		if (s1[i] < s2[i] || s1[i] > s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}

void	ft_sort_params(int ac, char **av)
{
	int	i;

	i = 1;
	while (i < ac - 1)
	{
		if (ft_strcmp(av[i + 1], av[i]) < 0)
		{
			swap(&av[i], &av[i + 1]);
			i = 1;
		}
		else
			i++;
	}
}

void	ft_print_params(int ac, char **av)
{
	int	i;
	int	k;

	i = 1;
	while (i < ac)
	{
		k = 0;
		while (av[i][k] != '\0')
		{
			ft_putchar(av[i][k]);
			k++;
		}
		ft_putchar('\n');
		i++;
	}
}

int	main(int ac, char **av)
{
	ft_sort_params(ac, av);
	ft_print_params(ac, av);
	return (0);
}
