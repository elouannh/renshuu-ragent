/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clearmem.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosta <ehosta@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 13:28:36 by ehosta            #+#    #+#             */
/*   Updated: 2024/09/22 13:28:36 by ehosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "memory_tracker.h"

extern t_memory_tracker g_memory_tracker;

int	ft_clearmem(int iserr)
{
	size_t	i;

	i = 0;
	while (i < g_memory_tracker.count)
		free(g_memory_tracker.allocations[i++]);
	if (iserr == true)
		return (MEM_ALLOC_ERROR);
	return (SUCCESS);
}
