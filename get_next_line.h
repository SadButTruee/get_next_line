/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 14:14:24 by rtracee           #+#    #+#             */
/*   Updated: 2021/05/22 14:14:42 by rtracee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 90
# endif

char	*poisk_chr(char *s);
char	*malloc_join(char const *s1, char const *s2);
char	*sub_str(char const *s, unsigned int start, size_t n);
char	*strl_cpy(const char *s1);
size_t	str_len(const char *s);
void	*mem_set(void *dest, int c, size_t n);
char	*get_read_join(char *sar);
void	*mem_move(void *dst, const void *src, size_t n);
int		get_next_line(int fd, char **line);
int		get_line(int rf, char **nl, char **line);

#endif
