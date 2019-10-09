/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trinfix.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrandon <gbrandon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 14:20:25 by gbrandon          #+#    #+#             */
/*   Updated: 2018/12/06 19:55:27 by gbrandon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_trinfix(t_btree *root, void (*apptree)(void*))
{
	if (!root)
		return ;
	ft_trinfix(root->left, apptree);
	apptree(root->item);
	ft_trinfix(root->right, apptree);
}
