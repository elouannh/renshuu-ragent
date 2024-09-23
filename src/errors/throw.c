/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosta <ehosta@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:38:46 by ehosta            #+#    #+#             */
/*   Updated: 2024/09/23 16:38:46 by ehosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "errors.h"

t_callend	throw(t_exitcode exitcode, char *message, void *data)
{
	t_callend	err;

	err.exitcode = exitcode;
	err.message = message;
	err.data = data;
	err.iserr = false;
	if (err.exitcode > ERROR_RANGE_MIN && err.exitcode < ERROR_RANGE_MAX)
		err.iserr = true;
	if (err.exitcode == ERROR)
		ft_putstr("An error occurred (no message).", true);
	if (err.iserr)
		ft_putstr(err.message, true);
	return (err);
}
