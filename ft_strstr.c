/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrandon <gbrandon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 19:46:52 by gbrandon          #+#    #+#             */
/*   Updated: 2018/11/26 16:26:40 by gbrandon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strstr(const char *haystack, const char *needle)
{
	const char		*min_h;
	const char		*min_n;
	const char		*start_hay;

	start_hay = haystack;
	while (*haystack)
	{
		if (*haystack == *needle)
		{
			min_n = needle;
			min_h = haystack;
			while ((*min_n == *min_h) && *min_n && *min_h)
			{
				min_n++;
				min_h++;
			}
			if (!(*min_n))
				return ((char*)haystack);
		}
		haystack++;
	}
	if (*needle)
		return (NULL);
	return ((char*)start_hay);
}
