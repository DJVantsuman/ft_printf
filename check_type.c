/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_type.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itsuman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/15 18:15:26 by itsuman           #+#    #+#             */
/*   Updated: 2017/02/24 16:57:23 by itsuman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	check_type(const char *format, t_strf *f)
{
	int		i;
	int		j;
	char	*type;

	i = 0;
	type = "sSpdDioOuUxXcC";
	while (is_spesify(format[i]))
	{
		j = 0;
		while (type[j] != '\0')
		{
			if (type[j] == format[i])
			{
				f->type = format[i];
				return ;
			}
			j++;
		}
		i++;
	}
}
