/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrandon <gbrandon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 15:36:19 by gbrandon          #+#    #+#             */
/*   Updated: 2018/12/03 13:21:33 by gbrandon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>
#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*new_str;
	char	*new_str_head;
	char	t;

	if (!s || !f)
		return (NULL);
	new_str = (char*)malloc(ft_strlen(s) + 1);
	if (!new_str)
		return (NULL);
	new_str_head = new_str;
	while (*s)
	{
		t = f(*s);
		if (t > 0)
		{
			*new_str = f(*s);
			new_str++;
		}
		s++;
	}
	*new_str = '\0';
	return (new_str_head);
}
