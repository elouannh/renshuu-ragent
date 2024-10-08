/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosta <ehosta@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 13:15:45 by ehosta            #+#    #+#             */
/*   Updated: 2024/09/22 13:15:45 by ehosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "memory_tracker.h"

t_memory_tracker	g_memory_tracker = {
	.count = 0
};

char	*ft_malloc_str(int tsize, int size)
{
	char	*allocmem;

	allocmem = (char *)malloc(tsize * size);
	if (allocmem == NULL)
		return (NULL);
	g_memory_tracker.allocations[g_memory_tracker.count] = allocmem;
	g_memory_tracker.count += 1;
	return (allocmem);
}
