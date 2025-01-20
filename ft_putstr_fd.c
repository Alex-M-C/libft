/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleconst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 12:21:56 by aleconst          #+#    #+#             */
/*   Updated: 2025/01/13 12:21:57 by aleconst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

//Writes the string S into the specified FD(file descriptor).
void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}

/*
#include <stdio.h>
#include <fcntl.h>
int	main(void)
{
	int	fd;

	fd = open("arriba.txt", O_WRONLY | O_CREAT, 777);
	ft_putstr_fd("Patata", fd);
	close(fd);
}
*/
