/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrandon <gbrandon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 14:26:27 by gbrandon          #+#    #+#             */
/*   Updated: 2018/11/24 14:56:26 by gbrandon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char	*start_s1;
	size_t	i;

	start_s1 = s1;
	i = 0;
	while (*s1)
		s1++;
	while ((i < n) && (*s2))
	{
		*s1++ = *s2++;
		i++;
	}
	*s1 = '\0';
	return (start_s1);
}
