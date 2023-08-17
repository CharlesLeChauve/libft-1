/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nope <nope@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 16:56:54 by nope              #+#    #+#             */
/*   Updated: 2023/08/18 00:25:28 by nope             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

/////////////////////////////////////////

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <limits.h>

/////////////////////////////////////////

typedef struct  s_list
{
    void                *content;
    struct s_list       *next;
}               t_list;

/////////////////////////////////////////



//////////////////////////////////////////
//          PART_1 FUNCTIONS            //
//////////////////////////////////////////

int		ft_atoi(const char *str);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t count, size_t size);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memset(void *b, int c, size_t len);
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *s1);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlen(const char *s);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strrchr(const char *s, int c);
int		ft_tolower(int c);
int		ft_toupper(int c);

//////////////////////////////////////////
//          PART_2 FUNCTIONS            //
//////////////////////////////////////////

char	*ft_itoa(int n);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
char	**ft_split(char const *s, char c);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_substr(char const *s, unsigned int start, size_t len);

//////////////////////////////////////////
//          BONUS  FUNCTIONS            //
//////////////////////////////////////////

void ft_lstadd_back(t_list **alst, t_list *new);
void ft_lstadd_front(t_list **alst, t_list *new);
void ft_lstclear(t_list **lst, void (*del)(void*));
void ft_lstdelone(t_list *lst, void (*del)(void*));
void ft_lstiter(t_list *lst, void (*f)(void *));
t_list *ft_lstlast(t_list *lst);
t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
t_list *ft_lstnew(void *content);
int ft_lstsize(t_list *lst);

//////////////////////////////////////////
//              MY FUNCTIONS            //
//////////////////////////////////////////

//  ft_abs
//  ft_countwords
//  ft_intlen
//  ft_isblank
//  ft_iscntrl
//  ft_isgraph
int	ft_islower(int c);
int ft_isspace(char c);
//  ft_isupper
//  ft_isxdigit -> ishexa
char	*ft_newstr(size_t size);
void	ft_putchar(char c);
//  ft_power
//  ft_str_is_alpha
//  ft_str_is_lowercase
//  ft_str_is_numeric
//  ft_str_is_printable
//  ft_str_is_unique_chars
//  ft_str_is_uppercase
//  ft_strcapitalize
//  ft_strcasecmp
//  ft_strcasestr
//  ft_strlowcase
//  ft_strncasecmp
char	*ft_strncpy(char *dest, char const *src, size_t n);
char	*ft_strndup(const char *s1, size_t n);
//  ft_strtok

#endif