/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleconst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 12:25:29 by aleconst          #+#    #+#             */
/*   Updated: 2025/01/13 12:25:31 by aleconst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

//Allocates memory with malloc(3) for crating a substring from the
//string S starting at START and with a length of LEN + 1 including 
//the NULL byte ('\0') at the end.
//@returns The created substring or NULL if malloc(3) fails.
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substr;
	size_t			count;

	substr = (char *)malloc((len + 1) * sizeof(char));
	if (!substr)
		return ((void *)0);
	count = 0;
	while (count < len && s[count] != '\0')
	{
		substr[count] = (char)s[count + start];
		count++;
	}
	substr[count] = '\0';
	return (substr);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*result;

	result = ft_substr("Parabrisa", 4, 5);
	if (!result)
		printf("%s", "null");
	else
		printf("%s", result);
	free(result);
	return (0);
}
*/