/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrandon <gbrandon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 13:19:02 by gbrandon          #+#    #+#             */
/*   Updated: 2018/12/06 19:53:31 by gbrandon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>

char	*ft_strnew(size_t size)
{
	char		*new_str;
	size_t		i;

	i = 0;
	new_str = (char*)malloc(size + 1);
	if (!new_str)
		return (NULL);
	while (i < size)
	{
		new_str[i] = 0;
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
