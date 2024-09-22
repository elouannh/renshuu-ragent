/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rest.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosta <ehosta@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 13:36:47 by ehosta            #+#    #+#             */
/*   Updated: 2024/09/22 13:36:47 by ehosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REST_H
# define REST_H

# include "../src.h"

void	get_profile();
size_t	write_response(void *ptr, size_t size, size_t nmemb);
struct curl_slist	*prepare_headers(struct curl_slist *headers);

#endif
