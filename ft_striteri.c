/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrandon <gbrandon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 15:10:36 by gbrandon          #+#    #+#             */
/*   Updated: 2018/12/03 13:26:15 by gbrandon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	char	*head_s;

	head_s = s;
	if (!s || !f)
		return ;
	while (*s)
	{
		f(s - head_s, s);
		s++;
	}
}
