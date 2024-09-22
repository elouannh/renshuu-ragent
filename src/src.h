/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   src.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosta <ehosta@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 01:52:40 by ehosta            #+#    #+#             */
/*   Updated: 2024/09/22 01:52:40 by ehosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SRC_H
# define SRC_H

# include <fcntl.h>
# include <unistd.h>
# include "./fs/fs.h"
# include "./memory_tracker/memory_tracker.h"

# define SUCCESS 0
# define ERROR 1
# define FILE_OPEN_ERROR 100
# define FILE_CLOSE_ERROR 101
# define ERMSG "An error occured."
# define ERMSG

# define DEFAULT_BUFFER_SIZE 1024

typedef long long int	t_bigint;
typedef int				t_exitcode;

#endif
