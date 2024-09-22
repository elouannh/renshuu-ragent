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

extern t_memory_tracker g_memory_tracker;

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	get_profile();
	return (0);
}
