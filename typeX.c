/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   typeX.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itsuman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/24 20:53:37 by itsuman           #+#    #+#             */
/*   Updated: 2017/02/24 21:58:34 by itsuman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*fillX(t_strf *f, char *s)
{
	int		i;
	int		l;
	char	a[3];

	l = ft_strlen(s);
	i = f->width;
	a[0] = '0';
	a[1] = f->type;
	a[2] = '\0';
	while ((i - l - 2) > 0)
	{
		s = ft_strjoin("0", s);
		i--;
	}
	return (ft_strjoin(a, s));
}

char	*typeX(t_strf *f, char *s)
{
	int		i;
	int		l;
	char	a[3];

	l = ft_strlen(s);
	i = f->width;
	a[0] = '0';
	a[1] = f->type;
	a[2] = '\0';
	if (is_f(f, '#') && is_f(f, '0') && (i - l - 2) > 0 && !(is_f(f, '-')))
		return (fillX(f, s));
	if (is_f(f, '#') && !(is_f(f, '0'))  && !(is_f(f, '-')))
		return (fill(ft_strjoin(a, s), f, 1, ' '));
	if (is_f(f, '#') && is_f(f, '-'))
		return (fill(ft_strjoin(a, s), f, 0, ' '));
	if (!(is_f(f, '#')) && is_f(f, '-'))
		return (fill(s, f, 0, ' '));
	if (!(is_f(f, '#')) && is_f(f, '0')  && !(is_f(f, '-')))
		return (fill(s, f, 1, '0'));
	return (fill(s, f, 1, ' '));
}
