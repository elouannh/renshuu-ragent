/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fs.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosta <ehosta@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 02:01:47 by ehosta            #+#    #+#             */
/*   Updated: 2024/09/22 02:01:47 by ehosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FS_H
# define FS_H

# include "../src.h"

t_exitcode	ft_topen(const char *filename);
t_exitcode	ft_tclose(int fd);
int			ft_bufferlen(const char *filename);
t_callend	ft_read(const char *filename);

#endif
