/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleconst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 12:22:15 by aleconst          #+#    #+#             */
/*   Updated: 2025/01/13 12:22:17 by aleconst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	ft_wordcount(char const *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static void	*ft_fr(char **word_arr)
{
	free(word_arr);
	return ((void *)0);
}

//Allocates memory with malloc(3) for a string array that will contain 
//each word of the string S separated by the delimiter C.
//@attention The resultant array must end in a NULL pointer.
//@returns The created array with the separated words or NULL if malloc(3) 
//fails.
char	**ft_split(char const *s, char c)
{
	char		**word_arr;
	int			word_len;
	int			pos;
	size_t		count;

	pos = 0;
	word_len = 0;
	count = 0;
	word_arr = (char **)malloc((ft_wordcount(s, c) + 1) * sizeof(char *));
	if (!word_arr)
		return ((void *)0);
	while ((s[count] != '\0' && count < ft_strlen(s)) || word_len > 0)
	{
		if ((s[count] == c && word_len > 0) || count == ft_strlen(s) + 1)
		{
			word_arr[pos] = ft_substr(s, count - word_len, word_len);
			word_len = 0;
			if (!word_arr[pos++])
				return (ft_fr(word_arr));
		}
		else if (s[count++] != c)
			word_len++;
	}
	word_arr[pos] = (void *)0;
	return (word_arr);
}
/*
#include <stdio.h>

int	main(void)
{
	char	**result;
	int		count;

	result = ft_split("Llovia mucho ese dia", ' ');
	count = 0;
	if (result)
	{
		printf("Length: %d\n", ft_wordcount("Llovia mucho ese dia", ' ') + 1);
		while (result[count])
		{
			printf("%s\n", result[count]);
			count++;
		}
	}
	else
		printf("%s\n", "null");
	free(result);
	return (0);
}
*/
