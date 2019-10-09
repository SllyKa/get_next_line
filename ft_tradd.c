/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tradd.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrandon <gbrandon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 14:34:49 by gbrandon          #+#    #+#             */
/*   Updated: 2018/12/06 19:54:56 by gbrandon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_tradd(t_btree **root, void *item, int (*cmp)(void *, void *))
{
	if (!root)
		return ;
	if (!(*root))
	{
		if (!(*root = ft_treenew(item)))
			return ;
	}
	else
	{
		if (cmp(item, (*root)->item) < 0)
			ft_tradd(&(*root)->left, item, cmp);
		else
			ft_tradd(&(*root)->right, item, cmp);
	}
}
