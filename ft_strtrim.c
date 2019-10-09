/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrandon <gbrandon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 13:12:27 by gbrandon          #+#    #+#             */
/*   Updated: 2018/11/29 16:54:41 by gbrandon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>
#include "libft.h"

char			*ft_strtrim(char const *s)
{
	char		*n;
	char const	*head_s;
	char const	*start_s;
	size_t		len;

	if (!s)
		return (NULL);
	len = 0;
	head_s = s;
	while (*s == ' ' || *s == '\n' || *s == '\t')
		s++;
	start_s = s;
	while (*s)
		s++;
	while ((s != start_s) && (*(--s) == ' ' || *s == '\n' || *s == '\t'))
		len++;
	len = s - start_s + 1;
	n = ft_strsub(head_s, start_s - head_s, len);
	if (!n)
		return (NULL);
	return (n);
}
