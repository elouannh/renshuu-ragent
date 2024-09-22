/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   readenv.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosta <ehosta@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 01:44:03 by ehosta            #+#    #+#             */
/*   Updated: 2024/09/22 01:44:03 by ehosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fs.h"

t_exitcode	ft_topen(const char *filename)
{
	t_bigint	opened_file;

	opened_file = open(filename, O_RDONLY);
	if (opened_file == -1)
		return (FILE_OPEN_ERROR);
	return (SUCCESS);
}

t_exitcode	ft_tclose(int fd)
{
	t_bigint	closed_file;

	closed_file = close(fd);
	if (closed_file == -1)
		return (FILE_CLOSE_ERROR);
	return (SUCCESS);
}

char	*ft_bufferlen(const char *filename)
{
	t_bigint	read_bytes;
	t_bigint	bufferlen;
	char		*buffer;
	int			fd;

	fd = ft_topen(filename);
	if (fd != SUCCESS)
		return (-1);
	bufferlen = 0;
	while (read(fd, buffer, 1))
	{
		(void)0;
	}
	return (buffer);
}
