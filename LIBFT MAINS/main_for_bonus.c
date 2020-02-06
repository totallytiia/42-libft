/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_for_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaukkan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 10:27:05 by tiialaukkan       #+#    #+#             */
/*   Updated: 2019/11/09 14:41:04 by tlaukkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct  s_list
{
    void    *content;
    size_t  content_size;
    struct s_list *next;
}               t_list;

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void	ft_putstr(char const *s)
{
	int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
		ft_putchar(s[i++]);
}

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dst2;
	unsigned char	*src2;

	src2 = (unsigned char *)src;
	dst2 = (unsigned char *)dst;
	if (n == 0 || src2 == dst2)
		return (dst);
	i = 0;
	while (i < n)
	{
		dst2[i] = src2[i];
		i++;
	}
	return (dst);
}

t_list  *flst(t_list *lst)
{
    lst->content = "hello world!";
    return (lst);
}

t_list    *ft_lstnew(void const *content, size_t content_size)
{
    t_list *new;
    
    if (!(new = malloc(sizeof(t_list))))
        return (NULL);
    if (!content)
    {
        new->content = NULL;
        new->content_size = 0;
    }
    else
    {
        if(!(new->content = malloc(content_size)))
        {
            free(new);
            return (NULL);
        }
        ft_memcpy(new->content, content, content_size);
        new->content_size = content_size;
    }
    new->next = NULL;
    return (new);
}

void	del(void *content, size_t content_size)
{
	free(content);
	(void)content_size;
    content = NULL;
}
void    printlst(t_list *lst)
{
    if (lst->content)
    {
        ft_putstr(lst->content);
        ft_putchar('\t');
    }
}

void  ft_lstadd(t_list **alst, t_list *new)
{
    if (alst && new)
    {
        new->next = *alst;
        *alst = new;
    }
    if (!alst && new)
    {
        *alst = new;
    }
}

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	while (lst)
	{
		f(lst);
		lst = lst->next;
	}
}

t_list  *ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
    t_list *element;
    t_list *new;

    if (!lst || !f)
    {
        return NULL;
    }
    if(!(element = ft_lstnew(f(lst)->content, f(lst)->content_size)))
    {
        return NULL;
    }
    lst = lst->next;
    new = element;
    while (lst)
    {
        if(!(element->next = ft_lstnew(f(lst)->content, f(lst)->content_size)))
        {
            return NULL;
        }
        element = element->next;
        lst = lst->next;
    }
    return (new);
}

void    ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
    del((*alst)->content, (*alst)->content_size);
    free(*alst);
    *alst = NULL;
}

void    ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
    t_list *next;

    while (*alst)
    {
        next = (*alst)->next;
        del((*alst)->content, (*alst)->content_size);
        free(*alst);
        *alst = next;
    }
    *alst = NULL;
}


int main()
{
    printf("\n");
    printf("\n");
    printf("---BONUS PART---\n");
    printf("\n");
    printf("\n");
    t_list *elem1;
    t_list *elem2;
    t_list *elem3;
    t_list *elem4;

    elem1 = ft_lstnew("hello", 6);
    elem2 = ft_lstnew("world", 6);
    elem3 = ft_lstnew("hello", 6);
    elem4 = ft_lstnew("you", 4);
    printf("---creates new lists using LSTNEW and prints each of them separately:\n");
    printf("\n");
    ft_lstiter(elem1, printlst);
    printf("\n");
    ft_lstiter(elem2, printlst);
    printf("\n");
    ft_lstiter(elem3, printlst);
    printf("\n");
    ft_lstiter(elem4, printlst);
    printf("\n");
    printf("\n");
    // printf("this is result: %s\n", elem1->content);
    printf("---after lstadd and prints with LSTITER:\n");
    printf("\n");
    ft_lstadd(&elem1, elem2);
    ft_lstadd(&elem1, elem3);
    ft_lstadd(&elem1, elem4);
    ft_lstiter(elem1, printlst);
    printf("\n");
    printf("\n");

    printf("---LSTMAP:---\n");
    printf("\n");
    t_list  *listmap;
    printf("before:\n");
    ft_lstiter(elem1, printlst);
    printf("\n");
    printf("\n");
    printf("after:\n");
    listmap = ft_lstmap(elem1, &flst);
    ft_lstiter(listmap, printlst);

    t_list *elem5;
    t_list *elem6;
    t_list *elem7;

    elem5 = ft_lstnew("hello", 6);
    elem6 = ft_lstnew("world", 6);
    elem7 = ft_lstnew("wadap", 6);

    ft_lstadd(&elem5, elem6);
    ft_lstadd(&elem5, elem7);

    printf("\n");
    printf("\n");
    printf("\n");
 
    printf("---LSTDELONE:---\n");
    printf("\n");
    printf("---before:\n");
    printf("\n");
    ft_lstiter(elem5, printlst);
    printf("\n");
    printf("\n");
    printf("---after:\n");
    ft_lstdelone(&elem6, &del);
    printf("\n");
    ft_lstiter(elem5, printlst);
    printf("\n");
    printf("\n");

    printf("---LSTDEL:---\n");
    t_list *elem8;
    t_list *elem9;
    t_list *elem10;

    elem8 = ft_lstnew("hello", 6);
    elem9 = ft_lstnew("world", 6);
    elem10 = ft_lstnew("wadap", 6);

    ft_lstadd(&elem8, elem9);
    ft_lstadd(&elem8, elem10);

    printf("\n");
    printf("---before:\n");
    printf("\n");
    ft_lstiter(elem8, printlst);
    printf("\n");
    printf("\n");
    printf("---after:\n");
    printf("\n");
    ft_lstdel(&elem8, &del);
    printf("\n");
	ft_lstiter(elem8, printlst);
    printf("content %p", elem8);
    printf("\n");
    printf("\n");
    return (0);
}
