/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleconst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 12:21:07 by aleconst          #+#    #+#             */
/*   Updated: 2025/01/13 12:21:09 by aleconst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//Writes the character C into the specified FD(file descriptor).
void	ft_putchar_fd(char c, int fd)
{
	char	*c_ptr;

	c_ptr = &c;
	write(fd, c_ptr, 1);
}

/*
#include <stdio.h>
#include <fcntl.h>
int	main(void)
{
	int	fd;

	fd = open("arriba.txt", O_WRONLY | O_CREAT, 777);
	ft_putchar_fd('F', fd);
	close(fd);
}
*/