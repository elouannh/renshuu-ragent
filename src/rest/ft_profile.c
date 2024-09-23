/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_profile.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosta <ehosta@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 13:37:37 by ehosta            #+#    #+#             */
/*   Updated: 2024/09/22 13:37:37 by ehosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./rest.h"

void	get_profile(void)
{
	struct curl_slist	*headers;
	CURLcode			res;
	CURL				*curl;

	headers = NULL;
	curl_global_init(CURL_GLOBAL_DEFAULT);
	curl = curl_easy_init();
	if (curl)
	{
		headers = prepare_headers(headers);
		curl_easy_setopt(
			curl,
			CURLOPT_URL,
			API_PROFILE
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
}
