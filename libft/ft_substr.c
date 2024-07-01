/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blebas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 12:39:10 by blebas            #+#    #+#             */
/*   Updated: 2023/10/20 17:06:41 by blebas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	char	*src;
	size_t	i;

	if (!s)
		return (NULL);
	if ((size_t)start >= ft_strlen(s))
		return (ft_strdup(""));
	src = (char *)s + start;
	if (ft_strlen(src) < len)
		i = ft_strlen(src) + 1;
	else
		i = len + 1;
	str = (char *)malloc(sizeof(char) * i);
	if (!str)
		return (NULL);
	ft_strlcpy(str, src, i);
	return (str);
}
