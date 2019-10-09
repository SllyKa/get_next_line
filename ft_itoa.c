/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrandon <gbrandon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 14:47:38 by gbrandon          #+#    #+#             */
/*   Updated: 2018/11/30 16:47:25 by gbrandon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>

static char		*rec(int n, int count, char **head, int sign)
{
	char	*str;

	if (n / 10 == 0)
	{
		if (sign < 0)
			count++;
		str = (char*)malloc(count + 1);
		if (!str)
			return (NULL);
		*head = str;
		if (sign < 0)
			*str++ = '-';
		*str = n + 48;
		return (str);
	}
	count++;
	str = rec(n / 10, count, head, sign);
	if (!str)
		return (NULL);
	str++;
	*str = (n % 10) + 48;
	return (str);
}

char			*ft_itoa(int n)
{
	char	**head;
	char	*str;
	int		sign;

	sign = 1;
	head = (char**)malloc(sizeof(char*));
	if (n < 0)
		sign = -1;
	if (n == -2147483648)
	{
		if (!(str = rec(214748364, 2, head, sign)))
			return (NULL);
		*(++str) = '8';
	}
	else
	{
		n *= sign;
		str = rec(n, 1, head, sign);
	}
	if (str)
	{
		*(++str) = '\0';
		return (*head);
	}
	return (NULL);
}
