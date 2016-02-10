/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtortera <dtortera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 12:14:02 by dtortera          #+#    #+#             */
/*   Updated: 2015/02/16 16:42:56 by dtortera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <unistd.h>

# include "libft_ctypes.h"

/*
**	io/
**		Input/output functions.
*/
int				ft_putchar(int c);
int				ft_putchar_fd(int c, int fd);
int				ft_putendl(char const *s);
int				ft_putendl_fd(char const *s, int fd);
int				ft_putnbr(int n);
int				ft_putnbr_fd(int n, int fd);
int				ft_putstr(char const *s);
int				ft_putstr_fd(char const *s, int fd);

# define BUFF_SIZE	4096

int				get_next_line(int const fd, char **line);

/*
**	lst/
**		Linked lists management.
*/
typedef struct	s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}				t_list;

void			ft_lstadd(t_list **alst, t_list *new);
void			ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void			ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void			ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
t_list			*ft_lstnew(void const *content, size_t content_size);

/*
**	mem/
**		Memory management and byte-level operations.
*/
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void			ft_bzero(void *s, size_t n);
void			*ft_memalloc(size_t size);
void			*ft_memccpy(void *s1, const void *s2, int c, size_t n);
void			*ft_memchr(const void *s, int c, size_t n);
void			*ft_memcpy(void *s1, const void *s2, size_t n);
void			ft_memdel(void **ap);
void			*ft_memmove(void *s1, const void *s2, size_t n);
void			*ft_memset(void *b, int c, size_t len);

/*
**	misc/
**		Functions not clearly falling within other categories.
*/
void			ft_perror(const char *s);
char			*ft_strerror(int errnum);

/*
**	str/
**		String-related operations.
*/
# ifndef DT_CTYPE_ARR_SIZE
#  error g_ctype_arr[] seems undefined
# endif

int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isblank(int c);
int				ft_iscntrl(int c);
int				ft_isdigit(int c);
int				ft_isgraph(int c);
int				ft_islower(int c);
int				ft_isprint(int c);
int				ft_ispunct(int c);
int				ft_isspace(int c);
int				ft_isupper(int c);
int				ft_isxdigit(int c);
int				ft_toascii(int c);

int				ft_atoi(const char *str);
int				ft_strcmp(const char *s1, const char *s2);
int				ft_strequ(char const *s1, char const *s2);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
int				ft_strnequ(char const *s1, char const *s2, size_t n);
int				ft_tolower(int c);
int				ft_toupper(int c);
char			*ft_itoa(int n);
char			*ft_strcat(char *s1, const char *s2);
char			*ft_strchr(const char *s, int c);
void			ft_strclr(char *s);
char			*ft_strcpy(char *s1, const char *s2);
void			ft_strdel(char **as);
char			*ft_strdup(const char *s1);
void			ft_striter(char *s, void (*f)(char*));
void			ft_striteri(char *s, void (*f)(unsigned int, char*));
char			*ft_strjoin(char const *s1, char const *s2);
size_t			ft_strlcat(char *dst, const char *src, size_t size);
size_t			ft_strlen(const char *s);
char			*ft_strmap(char const *s, char (*f)(char));
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char			*ft_strncat(char *s1, const char *s2, size_t n);
char			*ft_strncpy(char *s1, const char *s2, size_t n);
char			*ft_strnew(size_t size);
char			*ft_strnstr(const char *s1, const char *s2, size_t n);
char			*ft_strrchr(const char *s, int c);
char			**ft_strsplit(char const *s, char c);
char			*ft_strstr(const char *s1, const char *s2);
char			*ft_strsub(char const *s, unsigned int start, size_t len);
char			*ft_strtrim(char const *s);

#endif
