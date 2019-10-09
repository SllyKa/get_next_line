/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trprefix.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrandon <gbrandon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 14:15:45 by gbrandon          #+#    #+#             */
/*   Updated: 2018/12/06 14:58:55 by gbrandon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_trprefix(t_btree *root, void (*apptree)(void*))
{
	if (!root)
		return ;
	apptree(root->item);
	ft_trprefix(root->left, apptree);
	ft_trprefix(root->right, apptree);
}
