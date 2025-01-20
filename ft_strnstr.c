/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleconst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 12:24:40 by aleconst          #+#    #+#             */
/*   Updated: 2025/01/13 12:24:42 by aleconst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

static char	*check_match(char *str, char *to_find, char *to_find_start_ptr)
{
	while (*str != '\0' && *to_find != '\0')
	{
		if (*str != *to_find)
		{
			to_find = to_find_start_ptr;
			break ;
		}
		str++;
		to_find++;
	}
	return (to_find);
}

//Finds the first occurrence of the substring TO_FIND 
//in the string STR within the first N bytes.
//The terminating NULL bytes ('\0') are not compared.
//@returns A pointer to the beginning of the located substring, 
//or NULL if the substring is not found.
char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	char	*coincidence_ptr;
	char	*to_find_start_ptr;
	char	*str_ptr;
	char	*to_find_ptr;

	str_ptr = (char *)str;
	to_find_ptr = (char *)to_find;
	if (*to_find_ptr == '\0')
		return (str_ptr);
	while (*str_ptr != '\0' && n > 0)
	{
		if (*str_ptr == *to_find_ptr)
		{
			coincidence_ptr = str_ptr;
			to_find_start_ptr = to_find_ptr;
			to_find_ptr = check_match(str_ptr, to_find_ptr, to_find_start_ptr);
			if (*to_find_ptr == '\0')
				return (coincidence_ptr);
		}
		str_ptr++;
		n--;
	}
	return ((void *)0);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	test1[] = "Eras una vez Erase unas vez no dos";
	char	test2[] = "e";
	char	*result = ft_strnstr(test1, test2, 6);

	if (result)
		printf("%s\n", result);
	else
		printf("%s\n", "(null)");
}
*/
