/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosta <ehosta@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 11:55:10 by ehosta            #+#    #+#             */
/*   Updated: 2024/09/21 11:55:10 by ehosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <curl/curl.h>
#include "src.h"

t_memory_tracker	g_memory_tracker = {
	.count = 0
};

char	*get_token(const char *filename)
{
	(void)0;
}

size_t	write_response(void *ptr, size_t size, size_t nmemb, char *data)
{
	size_t	realsize;

	(void)data;
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

int	main(int argc, char **argv)
{
	struct curl_slist	*headers;
	CURLcode			res;
	CURL				*curl;

	(void)argc;
	(void)argv;
	headers = NULL;
	curl_global_init(CURL_GLOBAL_DEFAULT);
	curl = curl_easy_init();
	if (curl)
	{
		headers = prepare_headers(headers);
		curl_easy_setopt(
			curl,
			CURLOPT_URL,
			"https://api.renshuu.org/v1/profile"
			);
		curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_response);
		curl_easy_setopt(curl, CURLOPT_HTTPHEADER, headers);
		res = curl_easy_perform(curl);
		if (res != CURLE_OK)
		{
			fprintf(
				stderr,
				"curl_easy_perform() failed: %s\n",
				curl_easy_strerror(res)
				);
		}
		curl_slist_free_all(headers);
		curl_easy_cleanup(curl);
	}
	curl_global_cleanup();
	return (0);
}
