/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleconst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 12:24:49 by aleconst          #+#    #+#             */
/*   Updated: 2025/01/13 12:24:52 by aleconst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//@returns A pointer to the last occurrence of the character C in the string S
//or NULL if any occurrence is found.
char	*ft_strrchr(const char *s, int c)
{
	char	*match;

	while (*s != '\0')
	{
		if (*s == c)
			match = (char *)s;
		s++;
	}
	if (*s == c)
		match = (char *)s;
	if (match)
		return (match);
	return ((void *)0);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	*result = ft_strrchr("Hola", 'j');

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