/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrtolst.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrandon <gbrandon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 11:25:11 by gbrandon          #+#    #+#             */
/*   Updated: 2018/12/06 11:53:04 by gbrandon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list		*set_head(char **tab)
{
	t_list		*head;

	if (*tab)
	{
		if (!(head = ft_lstnew(*tab, ft_strlen(*tab) + 1)))
			return (NULL);
		return (head);
	}
	return (NULL);
}

t_list				*ft_tabtolst(char **tab)
{
	t_list		*head;
	t_list		*cur;

	if (!tab)
		return (NULL);
	if (!(head = set_head(tab)))
		return (NULL);
	tab++;
	cur = head;
	while (*tab)
	{
		if (!(cur->next = ft_lstnew(*tab, ft_strlen(*tab) + 1)))
			return (NULL);
		cur = cur->next;
		tab++;
	}
	return (head);
}
