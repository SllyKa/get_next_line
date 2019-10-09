/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treenew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrandon <gbrandon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 14:02:29 by gbrandon          #+#    #+#             */
/*   Updated: 2018/12/06 19:59:16 by gbrandon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libc.h"
#include "libft.h"

t_btree			*ft_treenew(void *item)
{
	t_btree		*node;

	if (!(node = (t_btree*)malloc(sizeof(t_btree))))
		return (NULL);
	node->left = NULL;
	node->right = NULL;
	node->item = item;
	return (node);
}
