/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrandon <gbrandon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 14:08:47 by gbrandon          #+#    #+#             */
/*   Updated: 2018/11/27 16:21:04 by gbrandon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isdigit(int c)
{
	unsigned char	char_c;

	if (c > 255 || c < 0)
		return (0);
	char_c = (unsigned char)c;
	if (char_c >= '\60' && char_c <= '\71')
		return (1);
	return (0);
}
