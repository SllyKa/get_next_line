/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrandon <gbrandon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 15:24:35 by gbrandon          #+#    #+#             */
/*   Updated: 2018/12/06 19:54:12 by gbrandon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

static int	in_line_proc(const char *hay, const char *need, size_t i, size_t l)
{
	const char	*min_h;
	const char	*min_n;
	size_t		min_i;

	min_h = hay;
	min_n = need;
	min_i = i;
	while ((*min_h == *min_n) && *min_h && *min_n && (min_i++ < l))
	{
		min_h++;
		min_n++;
	}
	if (!(*min_n))
		return (1);
	return (0);
}

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	const char	*start_hay;
	size_t		i;

	start_hay = haystack;
	i = 0;
	while (*haystack && (i < len))
	{
		if (*haystack == *needle)
			if (in_line_proc(haystack, needle, i, len))
				return ((char*)haystack);
		i++;
		haystack++;
	}
	if (*needle)
		return (NULL);
	return ((char*)start_hay);
}
