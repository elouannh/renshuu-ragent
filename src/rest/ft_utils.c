/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosta <ehosta@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 13:39:05 by ehosta            #+#    #+#             */
/*   Updated: 2024/09/22 13:39:05 by ehosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./rest.h"

size_t	write_response(void *ptr, size_t size, size_t nmemb)
{
	size_t	realsize;

	realsize = size * nmemb;
	printf("%.*s\n", (int)realsize, (char *)ptr);
	return (realsize);
}

struct curl_slist	*prepare_headers(struct curl_slist *headers)
{
	headers = curl_slist_append(
			headers,
			"Authorization: Bearer TOKEN"
			);
	return (headers);
}
