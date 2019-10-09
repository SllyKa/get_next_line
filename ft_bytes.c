/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bytes.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrandon <gbrandon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 20:11:45 by gbrandon          #+#    #+#             */
/*   Updated: 2018/12/06 20:14:57 by gbrandon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>

void		ft_bytes(size_t size, void *ptr)
{
	unsigned char	*uc_ptr;
	unsigned char	byte;
	size_t			i;
	int				j;

	uc_ptr = (unsigned char*)ptr;
	i = 0;
	while (i < size)
	{
		j = 7;
		while (j >= 0)
		{
			byte = (uc_ptr[i] >> j) & 1;
			byte += 48;
			write(1, &byte, 1);
			j--;
		}
		byte = ' ';
		write(1, &byte, 1);
		i++;
	}
}
