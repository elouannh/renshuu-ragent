/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory_tracker.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosta <ehosta@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 02:29:51 by ehosta            #+#    #+#             */
/*   Updated: 2024/09/22 02:29:51 by ehosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MEMORY_TRACKER_H
# define MEMORY_TRACKER_H

#include "../src.h"

# define MAX_ALLOCATIONS 1024

typedef struct s_memory_tracker
{
	size_t	count;
	void		*allocations[MAX_ALLOCATIONS];
}	t_memory_tracker;

int	ft_clearmem(int iserr);
int	ft_malloc(int tsize, int size);

#endif
