/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set-key.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosta <ehosta@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:24:04 by ehosta            #+#    #+#             */
/*   Updated: 2024/09/23 16:24:04 by ehosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "args.h"

t_callend	set_key(int argc, char **argv)
{
	(void)argv;
	if (argc != 1)
		return (
			throw(ERROR_ARGC_INVALID, "The syntax is wrong.", NULL)
		);
	return (throw(SUCCESS, "Success", NULL));
}
