/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrandon <gbrandon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 14:24:36 by gbrandon          #+#    #+#             */
/*   Updated: 2018/11/27 16:21:43 by gbrandon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int		ft_isalpha(int c)
{
	unsigned char	c_char;

	c_char = (unsigned char)c;
	if (((c_char >= '\141') && (c_char <= '\172')) ||
		((c_char >= '\101') && (c_char <= '\132')))
		return (1);
	return (0);
}

static int		ft_isdigit(int c)
{
	unsigned char	char_c;

	char_c = (unsigned char)c;
	if (char_c >= '\60' && char_c <= '\71')
		return (1);
	return (0);
}

int				ft_isalnum(int c)
{
	if (c > 255 || c < 0)
		return (0);
	if (ft_isdigit(c) || ft_isalpha(c))
		return (1);
	return (0);
}
