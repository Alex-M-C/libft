/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleconst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 12:20:51 by aleconst          #+#    #+#             */
/*   Updated: 2025/01/13 12:20:53 by aleconst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

//Fills the first N bytes of the memory area 
//pointed to by S with the constant byte C.
//@returns A pointer to the memory area S.
void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr_byte;

	if (!s || n == 0)
		return ((void *)0);
	ptr_byte = (unsigned char *)s;
	while (n > 0)
	{
		ptr_byte[n - 1] = (unsigned char)c;
		n--;
	}
	return (ptr_byte);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	test[] = "eeyyy";
	char	test2[] = "eeyyy";

	ft_memset(test, 'a', sizeof(test));
	memset(test2, 'a', sizeof(test2));
	printf("%s\n", test);
	printf("%s\n", test2);
}
*/