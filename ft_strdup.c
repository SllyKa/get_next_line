/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrandon <gbrandon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 12:54:04 by gbrandon          #+#    #+#             */
/*   Updated: 2018/12/06 19:52:45 by gbrandon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>
#include "libft.h"

char	*ft_strdup(const char *src)
{
	char			*new_str;
	char			*new_str_start;
	extern int		errno;

	new_str = (char*)malloc(sizeof(char) * ft_strlen(src) + 1);
	if (!new_str)
	{
		errno = 12;
		return (NULL);
	}
	new_str_start = new_str;
	while ((*new_str = *src))
	{
		new_str++;
		src++;
	}
	return (new_str_start);
}
