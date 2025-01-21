/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleconst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 12:22:24 by aleconst          #+#    #+#             */
/*   Updated: 2025/01/13 12:22:27 by aleconst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//@returns A pointer to the first occurrence of the character C in the string S
//or NULL if any occurrence is found.
char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (unsigned char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (unsigned char)c)
		return ((char *)s);
	return ((void *)0);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	*result = ft_strchr("tripouille", 't' + 256);

	if (!result)
	{
		printf("%s\n", "null");
	}
	else
	{
		printf("%s\n", result);
	}
}
*/