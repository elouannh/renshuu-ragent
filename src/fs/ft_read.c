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
	int	opened_file;

	opened_file = open(filename, O_RDONLY);
	if (opened_file == -1)
		return (ERROR_FILE_OPEN);
	return (SUCCESS);
}

t_exitcode	ft_tclose(int fd)
{
	int	closed_file;

	closed_file = close(fd);
	if (closed_file == -1)
		return (ERROR_FILE_CLOSE);
	return (SUCCESS);
}

int	ft_bufferlen(const char *filename)
{
	size_t	bufferlen;
	char	buffer[2];
	int		fd;

	fd = ft_topen(filename);
	if (fd != SUCCESS)
		return (-1);
	bufferlen = 0;
	while (read(fd, buffer, 1) != -1)
		bufferlen++;
	ft_tclose(fd);
	return (bufferlen);
}

t_callend	ft_read(const char *filename)
{
	int		bufferlen;
	char	*buffer;
	int		fd;
	int		read_bytes;

	bufferlen = ft_bufferlen(filename);
	fd = ft_topen(filename);
	if (fd != SUCCESS)
		return (
			throw(ERROR_FILE_OPEN, "Cannot open file.", NULL)
		);
	if (bufferlen == -1)
		return (
			throw(ERROR_FILE_READ, "Cannot read file.", NULL)
		);
	buffer = (char *)ft_malloc_str(1, DEFAULT_BUFFER_SIZE);
	if (buffer == NULL)
		return (
			throw(ERROR_MEM_ALLOC, "Memory allocation error.", NULL)
		);
	read_bytes = read(fd, buffer, bufferlen);
	if (read_bytes == -1)
		return (throw(ERROR_FILE_READ, "Cannot read file.", NULL));
	ft_tclose(fd);
	return (throw(SUCCESS, "Success", buffer));
}
