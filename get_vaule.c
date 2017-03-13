/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_vaule.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itsuman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/15 20:22:01 by itsuman           #+#    #+#             */
/*   Updated: 2017/03/13 16:45:01 by itsuman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*non_type(const char *format)
{
	int		i;
	char	*a;

	i = 0;
	a = (char *)malloc(sizeof(char) * 2);
	while (is_spesify(format[i]))
		i++;
	a[0] = format[i];
	a[1] = '\0';
	if (format[i] == '\0')
	{
		ft_putchar('\0');
		return (0);
	}
	return (a);
}

char	*get_vaule(t_strf *f, va_list ap, const char *format)
{
	char	*s;

	s = fill_type(f, ap);
//	printf("\ns1 = %s\n", s);
	if (s == NULL)
	{
		s = non_type(format);
		if (s == NULL)
			return (0);
		f->type = 'c';
	}
	s = fill_precision(s, f);
//	printf("s2 = %s\n", s);
	s = fill_width(s, f);
//	printf("s3 = %s\n", s);
	return (s);
}
