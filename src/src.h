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
# include <stdio.h>
# include <stdlib.h>
# include <curl/curl.h>

# define SUCCESS 0
# define ERROR 1
# define FILE_OPEN_ERROR 100
# define FILE_CLOSE_ERROR 101
# define MEM_ALLOC_ERROR 200
# define ERMSG "An error occurred."
# define ERMSG_MALLOC "An error occurred: memory allocation."
# define API_PROFILE "https://api.renshuu.org/v1/profile"

# define DEFAULT_BUFFER_SIZE 1024

typedef int				t_exitcode;

enum e_bool_values
{
	false = !!0,
	true = !false
};

# include "./fs/fs.h"
# include "./memory_tracker/memory_tracker.h"
# include "./rest/rest.h"
# include "./tools/tools.h"

#endif
