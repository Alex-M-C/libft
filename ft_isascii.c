/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleconst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 12:19:14 by aleconst          #+#    #+#             */
/*   Updated: 2025/01/13 12:19:17 by aleconst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Checks for an ascii character.
//@returns 1 if is ascii, 0 if not
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
#include <ctype.h>
int	main(void)
{
	char	test = 'A';

	printf("%d\n", ft_isascii(test));
	printf("%d\n", isascii(test));
}
*/