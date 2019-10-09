/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_satoi.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrandon <gbrandon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 18:22:02 by gbrandon          #+#    #+#             */
/*   Updated: 2019/02/14 15:04:20 by gbrandon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_satoi(const char *str, int *er_cod)
{
	long int	res;
	int			sign;

	sign = 1;
	res = 0;
	while (*str == ' ' || *str == '\n' || *str == '\t' || *str == '\v' ||
			*str == '\f' || *str == '\r')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	(*str < '0' || *str > '9') ? *er_cod = -3 : (0);
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + ((*str++) - 48);
		if ((res > 2147483647) || (res < -2147483648))
			*er_cod = -1;
	}
	(*str != '\0' && (*str < '0' || *str > '9')) ? *er_cod = -2 : (0);
	return (res * sign);
}
