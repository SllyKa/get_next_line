/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrandon <gbrandon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 16:24:09 by gbrandon          #+#    #+#             */
/*   Updated: 2018/11/28 20:17:22 by gbrandon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

static size_t	ft_strlen(const char *str)
{
	const char	*start_str;

	start_str = str;
	while (*str)
		str++;
	return ((size_t)(str - start_str));
}

size_t			ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		i;
	size_t		dst_len;
	size_t		src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = 0;
	if (size == 0)
		return (src_len);
	while (*dst)
	{
		if (i++ >= size - 1)
			return (src_len + size);
		dst++;
	}
	while ((i < size - 1))
	{
		if (!(*dst = *src))
			break ;
		i++;
		dst++;
		src++;
	}
	*dst = '\0';
	return (dst_len + src_len);
}
