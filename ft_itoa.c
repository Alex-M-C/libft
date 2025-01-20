/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleconst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 12:19:52 by aleconst          #+#    #+#             */
/*   Updated: 2025/01/13 12:19:54 by aleconst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_digitcount(int n)
{
	int		count;

	count = 0;
	while (n > 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

static char	*ft_createstring(int n, int count, int sign, char *result)
{
	result[count] = '\0';
	while (count > 0 && n > 0)
	{
		result[count - 1] = n % 10 + '0';
		n /= 10;
		count--;
	}
	if (sign < 0)
		result[0] = '-';
	return (result);
}

static char	*ft_checkspecial(int n)
{
	char	*result;

	if (n == 0)
	{
		result = (char *)malloc(2 * sizeof(char));
		if (!result)
			return ((void *)0);
		result[0] = '0';
		result[1] = '\0';
		return (result);
	}
	else
	{
		result = (char *)malloc(12 * sizeof(char));
		if (!result)
			return ((void *)0);
		result[1] = '2';
		return (ft_createstring(147483648, 11, -1, result));
	}
}

//Using malloc(3), generates a string containing the number N, 
//negative numbers also work.
char	*ft_itoa(int n)
{
	char	*result;
	int		sign;
	int		count;

	if (n == 0 || n == -(__INT32_MAX__) - 1)
		return (ft_checkspecial(n));
	sign = 1;
	count = 0;
	if (n < 0)
	{
		sign = -1;
		n *= sign;
		count += 1;
	}
	count += ft_digitcount(n);
	result = (char *)malloc((count + 1) * sizeof(char));
	if (!result)
		return ((void *)0);
	return (ft_createstring(n, count, sign, result));
}
/*
#include <stdio.h>

int	main(void)
{
	char	*result;

	result = ft_itoa(-1246712);
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
