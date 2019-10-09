/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrandon <gbrandon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 10:48:05 by gbrandon          #+#    #+#             */
/*   Updated: 2018/11/28 11:49:57 by gbrandon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_toupper(int c)
{
	unsigned char cc;

	if (c < 0 || c > 255)
		return (c);
	cc = (unsigned char)c;
	if (cc >= '\141' && cc <= '\172')
		return (cc - 32);
	return (c);
}