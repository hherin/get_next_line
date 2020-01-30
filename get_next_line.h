/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hherin <hherin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 10:00:41 by hherin            #+#    #+#             */
/*   Updated: 2019/12/18 12:03:52 by hherin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>


typedef struct s_list
{
	char buffer[BUFFER_SIZE + 1];
	int index;
} t_list;

int		get_next_line(int fd, char **line);
int		ft_filetheline(int fd, char **line, char *buf, int *index);
void	ft_strdel(char **str);
int		ft_resume(char **line, char *buf, int *index, int i);
int		ft_resume2(char *buf, char **line, int *index, int i);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(const char *s1, const char *s2);
void	*ft_calloc(size_t count, size_t size);
size_t	ft_strlen(char const *s1);
#endif
