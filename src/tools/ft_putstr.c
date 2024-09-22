/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosta <ehosta@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 02:42:03 by ehosta            #+#    #+#             */
/*   Updated: 2024/09/22 02:42:03 by ehosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"

void	ft_putstr(const char *str, int is_err)
{
	if (!*str)
		return ;
	if (is_err)
		return ((void)write(2, str, (unsigned int)ft_strlen(str)));
	write(1, str, (unsigned int)ft_strlen(str));
}
