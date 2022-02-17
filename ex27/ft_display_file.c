/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jervasti <jervasti@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 10:06:18 by jervasti          #+#    #+#             */
/*   Updated: 2021/11/05 13:35:44 by jervasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

void	ft_putstr(char *str);

void	ft_display_file(char *filename)
{
	int		fd;
	char	*buffer;

	fd = open(filename, O_RDONLY);
	while (read(fd, &buffer, 1 != 0))
		write(1, &buffer, 1);
	close(fd);
}

int	main(int ac, char **av)
{
	if (ac == 1)
		ft_putstr("File name missing.\n");
	if (ac > 2)
		ft_putstr("Too many arguments.\n");
	if (ac > 2 || ac == 1)
		return (1);
	ft_display_file(av[1]);
	return (0);
}
