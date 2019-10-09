/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrandon <gbrandon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 14:52:36 by gbrandon          #+#    #+#             */
/*   Updated: 2018/11/27 16:19:19 by gbrandon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isascii(int c)
{
	unsigned char char_c;

	if (c > 255 || c < 0)
		return (0);
	char_c = (unsigned char)c;
	if (char_c >= '\0' && char_c <= '\177')
		return (1);
	return (0);
}
