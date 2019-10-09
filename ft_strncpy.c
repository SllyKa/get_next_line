/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrandon <gbrandon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 21:16:09 by gbrandon          #+#    #+#             */
/*   Updated: 2018/11/24 14:52:43 by gbrandon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char		*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t		i;
	char		*dst_start;

	i = 0;
	dst_start = dst;
	while ((i++ < len) && (*dst++ = *src++))
		;
	while (i++ < len)
		*dst++ = '\0';
	return (dst_start);
}
