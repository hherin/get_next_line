/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hherin <hherin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 10:03:24 by hherin            #+#    #+#             */
/*   Updated: 2019/11/26 12:47:30 by hherin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char		*ft_strjoin(const char *s1, const char *s2)
{
	char	*str;
	size_t	lenght;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (s1 == NULL)
		lenght = ft_strlen(s2);
	else if (s2 == NULL)
		lenght = ft_strlen(s1);
	else
		lenght = ft_strlen(s1) + ft_strlen(s2);
	if (!(str = (char*)malloc(sizeof(char) * lenght + 1)))
		return (NULL);
	while (s1 && s1[j])
		str[i++] = s1[j++];
	j = 0;
	while (s2[j] && s2)
		str[i++] = s2[j++];
	str[i] = '\0';
	return (str);
}

char		*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_calloc(1, sizeof(char)));
	if (!(str = (char*)malloc(sizeof(char) * len + 1)))
		return (NULL);
	while (i < len)
	{
		str[i] = s[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}

size_t		ft_strlen(char const *s1)
{
	size_t i;

	i = 0;
	while (s1[i])
		i++;
	return (i);
}

void		*ft_calloc(size_t count, size_t size)
{
	void	*res;
	size_t	i;

	i = 0;
	if (!(res = malloc(size * count)))
		return (NULL);
	while (i < count)
		((char*)res)[i++] = 0;
	return (res);
}
