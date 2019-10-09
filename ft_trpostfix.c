/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tr_trpostfix.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrandon <gbrandon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 14:29:45 by gbrandon          #+#    #+#             */
/*   Updated: 2018/12/06 15:00:07 by gbrandon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_trpostfix(t_btree *root, void (*apptree)(void*))
{
	if (!root)
		return ;
	ft_trpostfix(root->left, apptree);
	ft_trpostfix(root->right, apptree);
	apptree(root->item);
}
