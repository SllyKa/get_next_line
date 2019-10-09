/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrandon <gbrandon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 19:03:22 by gbrandon          #+#    #+#             */
/*   Updated: 2018/12/06 19:53:54 by gbrandon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	char		char_c;
	const char	*start_s;

	char_c = (char)c;
	start_s = s;
	while (*s)
	{
		s++;
	}
	while (s != start_s)
	{
		if (*s == char_c)
			return ((char*)s);
		s--;
	}
	if (*s == char_c)
		return ((char*)s);
	return (NULL);
}
