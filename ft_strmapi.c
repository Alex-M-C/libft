/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleconst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 12:24:10 by aleconst          #+#    #+#             */
/*   Updated: 2025/01/13 12:24:12 by aleconst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

//Applies function F to each character of the string S using as parameters the 
//index as the first argument and the character itself as the second argument, 
//storing it in a new string that had its space allocated with malloc(3).
//@returns The created string or NULL if malloc(3) fails.
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*result;
	int		count;

	result = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!result)
		return ((void *)0);
	count = 0;
	while (s[count] != '\0')
	{
		result[count] = f(count, s[count]);
		count++;
	}
	result[count] = '\0';
	return (result);
}
/*
char	shift_char(unsigned int index, char c)
{
	return (c + index);
}

#include <stdio.h>

int	main(void)
{
	char	*result;
	char	(*f)(unsigned int, char);

	f = shift_char;
	result = ft_strmapi("Uno", f);
	if (result)
	{
		printf("%s\n", result);
	}
	else
	{
		printf("%s\n", "null");
	}
	free(result);
	return (0);
}
*/
