/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleconst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 12:20:42 by aleconst          #+#    #+#             */
/*   Updated: 2025/01/13 12:20:44 by aleconst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

//copies N bytes from memory area SRC to memory area DEST.
//@attention The memory areas may overlap.
//@returns A pointer to DEST.
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				count;
	unsigned char		*dest_byte;
	const unsigned char	*src_byte;

	if (!dest && !src)
		return ((void *)0);
	dest_byte = (unsigned char *)dest;
	src_byte = (const unsigned char *)src;
	count = -1;
	if (dest_byte > src_byte)
	{
		while (n--)
		{
			dest_byte[n] = src_byte[n];
		}
	}
	else
	{
		while (++count < n)
		{
			dest_byte[count] = src_byte[count];
		}
	}
	return (dest_byte);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	test[] = "patata";
	char	test2[] = "sandia";

	ft_memmove(test2 + 3, test2, 4);
	//memmove(test2 + 3, test2, 4);
	printf("%s\n", test);
	printf("%s\n", test2);
}
*/
