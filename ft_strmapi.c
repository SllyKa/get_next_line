/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrandon <gbrandon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 10:18:45 by gbrandon          #+#    #+#             */
/*   Updated: 2018/12/03 13:22:10 by gbrandon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char		*head_str;
	const char	*head_s;
	char		*new_str;
	char		t;

	if (!s || !f)
		return (NULL);
	head_s = s;
	new_str = (char*)malloc(ft_strlen(s) + 1);
	if (!new_str)
		return (NULL);
	head_str = new_str;
	while (*s)
	{
		if ((t = f(s - head_s, *s)) >= 0)
		{
			*new_str = t;
			new_str++;
		}
		s++;
	}
	*new_str = '\0';
	return (head_str);
}
