/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_c.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itsuman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/20 17:55:56 by itsuman           #+#    #+#             */
/*   Updated: 2017/03/12 19:16:30 by itsuman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*fill_c(va_list ap, t_strf *f)
{
	char	*a;
	char	c;
	int		i;

	a = malloc(sizeof(char) * 2);
	c = (char)va_arg(ap, int);
	if (c == '\0')
	{
		g_ivan++;
		if (f->width > 0)
		{
			f->width = 1;
			c = ' ';
		}
		if (is_f(f, ' '))
		{
			i = 0;
			while (f->flag[i] != ' ')
				i++;
			f->flag[i] = '\0';
		}
	}
	a[0] = c;
	a[1] = '\0';
	return (a);
}
