/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleconst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 12:21:22 by aleconst          #+#    #+#             */
/*   Updated: 2025/01/13 12:21:24 by aleconst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

//Writes the string S followed by '\n' into the specified FD(file descriptor).
void	ft_putendl_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
}

/*
#include <stdio.h>
#include <fcntl.h>
int	main(void)
{
	int	fd;

	fd = open("arriba.txt", O_WRONLY | O_CREAT, 777);
	ft_putendl_fd("Patata", fd);
	close(fd);
}
*/
