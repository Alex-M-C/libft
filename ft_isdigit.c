/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleconst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 12:19:27 by aleconst          #+#    #+#             */
/*   Updated: 2025/01/13 12:19:29 by aleconst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Checks for a digit (0 through 9).
//@returns 1 if is digit, 0 if not
int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
#include <ctype.h>
int	main(void)
{
	char	test = '9';

	printf("%d\n", ft_isdigit(test));
	printf("%d\n", isdigit(test));
}
*/