/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   modules.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosta <ehosta@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 18:57:27 by ehosta            #+#    #+#             */
/*   Updated: 2024/09/23 18:57:27 by ehosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODULES_H
# define MODULES_H

# include <stdbool.h>

# define SUCCESS 0
# define ERROR 1
# define ERROR_RANGE_MIN 100
# define ERROR_ARGC_TOO_FEW 100
# define ERROR_ARGC_INVALID 101
# define ERROR_FILE_OPEN 110
# define ERROR_FILE_READ 111
# define ERROR_FILE_CLOSE 112
# define ERROR_MEM_ALLOC 120
# define ERROR_RANGE_MAX 999
# define API_PROFILE "https://api.renshuu.org/v1/profile"

# define DEFAULT_BUFFER_SIZE 1024

typedef int	t_exitcode;

typedef struct s_callend
{
	t_exitcode	exitcode;
	char		*message;
	void		*data;
	bool		iserr;
}	t_callend;

#endif
