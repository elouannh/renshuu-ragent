/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosta <ehosta@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 11:55:10 by ehosta            #+#    #+#             */
/*   Updated: 2024/09/21 11:55:10 by ehosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "src.h"

extern t_memory_tracker	g_memory_tracker;

int	manage_callend(t_callend callend)
{
	if (callend.iserr)
		return (ERROR);
	return (SUCCESS);
}

int	main(int argc, char **argv)
{
	t_callend	callend;

	(void)argc;
	(void)argv;
	if (argc == 1)
	{
		callend = throw(
				ERROR_ARGC_TOO_FEW,
				"Requires between 1 and 2 arguments.",
				NULL
				);
		return (manage_callend(callend));
	}
	argc--;
	argv++;
	if (ft_strcmp(argv[0], "set-key") == 0)
		return (manage_callend(set_key(argc, argv)));
	else
	{
		callend = throw(
				ERROR_ARGC_INVALID,
				"The arguments are invalid.",
				NULL
				);
		return (manage_callend(callend));
	}
	return (SUCCESS);
}
