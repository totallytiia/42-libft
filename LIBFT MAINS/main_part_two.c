/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_part_two.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaukkan <tlaukkan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 12:58:19 by tlaukkan          #+#    #+#             */
/*   Updated: 2019/11/02 14:34:46 by tlaukkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_f(char *s)
{
	int	i;
	i = 0;
	while (s[i])
	{
		s[i] = 'B';
		i++;
	}
}

void	ft_f_int_char(unsigned int i, char *s)
{
	while (s[i])
	{
		s[i] = 't';
		i++;
	}
}

char    ft_f_char(char c)
{
    c = 't';
    return (c);    
}

char    ft_f_chari(unsigned int i, char c)
{
	if (c)
		c = 'A' + i;
    return (c);
}

int main()
{
    printf("\n");
    printf("------------MEMALLOC----------------\n"); // MEMALLOC
    printf("FT: test with size as 3: %s", ft_memalloc(3));
	printf("\n");
	printf("FT: test with size as 8: %s", ft_memalloc(8));
	printf("\n");
	printf("FT: test with size as -2: %s", ft_memalloc(-2));	
    printf("\n");
	printf("FT: test with size as 0: %s", ft_memalloc(0));
	printf("\n\n");

    printf("------------MEMDEL----------------\n"); // MEMDEL
	printf("My code:");	
    printf("\n\n");
	printf("if (ap);");
	printf("\n");
    printf("{");
	printf("\n");
	printf("\tfree(*ap);");
	printf("\n");
	printf("\t*ap = NULL;");
    printf("\n");
    printf("}");
	printf("\n\n");

    printf("------------STRNEW----------------\n"); // STRNEW
    printf("FT: test with size as 3: %s", ft_strnew(3));
    printf("\n");
    printf("FT: test with size as 10: %s", ft_strnew(10));
    printf("\n");
    printf("FT: test with size as -3: %s", ft_strnew(-3));
    printf("\n\n");

    printf("------------STRDEL----------------\n"); // STRDEL
	printf("My code:");	
    printf("\n\n");
    printf("{");
	printf("\n");
	printf("\tft_memdel((void **)as);");
    printf("\n");
    printf("}");
    printf("\n\n");
    printf("Uses memdel but typecasts char to void");	
    printf("\n\n");

    printf("------------STRCLR----------------\n"); // STRCLR
    char strclr1[] = "hello";
    char strclr2[] = "world";
    char strclr3[] = "";
    printf("FT: before: test with char str hello: %s", strclr1);
    printf("\n");
    ft_strclr(strclr1);
    printf("FT: after: shouldn't print anything: %s", strclr1);
    printf("\n");
    printf("\n");
    printf("FT: before: test with char str helloworld: %s", strclr2);
    printf("\n");
    ft_strclr(strclr2);
    printf("FT: after: shouldn't print anything: %s", strclr2);
    printf("\n");
    printf("\n");
    printf("FT: before: test with char str that is empty: %s", strclr3);
    printf("\n");
    ft_strclr(strclr3);
    printf("FT: after: shouldn't print anything: %s", strclr3);
    printf("\n\n");

    printf("------------STRITER----------------\n"); // STRITER
    char striter1[] = "hello";
    char striter2[] = "helloworld";
    char striter3[] = "";
    printf("FT: before: test with char str hello:\n%s", striter1);
    printf("\n");
    ft_striter(striter1, ft_f);
    printf("FT: after: all characters should be B:\n%s", striter1);
    printf("\n");
    printf("\n");
    printf("FT: before: test with char str helloworld:\n%s", striter2);
    printf("\n");
    ft_striter(striter2, ft_f);
    printf("FT: after: all characters should be B:\n%s", striter2);
    printf("\n");
    printf("\n");
    printf("FT: before: test with char str that is empty:\n%s", striter3);
    printf("\n");
    ft_striter(striter3, ft_f);
    printf("FT: after: shouldn't print anything:\n%s", striter3);
    printf("\n");
    printf("\n");

    printf("------------STRITERI----------------\n"); // STRITERI
    char striteri1[] = "hello";
    char striteri2[] = "helloworld";
    char striteri3[] = "";
    printf("FT: before: test with char str hello:\n%s", striteri1);
    printf("\n");
    ft_striteri(striteri1, ft_f_int_char);
    printf("FT: after: all characters should be all B:\n%s", striteri1);
    printf("\n");
    printf("\n");
    printf("FT: before: test with char str helloworld:\n%s", striteri2);
    printf("\n");
    ft_striteri(striteri2, ft_f_int_char);
    printf("FT: after: all characters should be all B:\n%s", striteri2);
    printf("\n");
    printf("\n");
    printf("FT: before: test with char str that is empty:\n%s", striteri3);
    printf("\n");
    ft_striteri(striteri3, ft_f_int_char);
    printf("FT: after: shouldn't print anything:\n%s", striteri3);
    printf("\n");
    printf("\n");

    printf("------------STRMAP----------------\n"); // STRMAP
    char strmap1[] = "hello";
    char strmap2[] = "helloworld";
    char strmap3[] = "";
    printf("FT: before: test with char str hello:\n%s", strmap1);
    printf("\n");
    printf("FT: after: all characters should be all t:\n%s",  ft_strmap(strmap1, ft_f_char));
    printf("\n");
    printf("\n");
    printf("FT: before: test with char str helloworld:\n%s", strmap2);
    printf("\n");
    printf("FT: after: all characters should be all t:\n%s",  ft_strmap(strmap2, ft_f_char));
    printf("\n");
    printf("\n");
    printf("FT: before: test with char str is empty:\n%s", strmap3);
    printf("\n");
    printf("FT: after: shouldn't print anything:\n%s",  ft_strmap(strmap3, ft_f_char));
    printf("\n");
    printf("\n");

    printf("------------STRMAPI----------------\n"); // STRMAPI
    char strmapi1[] = "hello";
    char strmapi2[] = "helloworld";
    char strmapi3[] = "";
    printf("FT: before: test with char str hello:\n%s", strmapi1);
    printf("\n");
    printf("FT: after: should print alphabet from A to lenght of str:\n%s",  ft_strmapi(strmapi1, ft_f_chari));
    printf("\n");
    printf("\n");
    printf("FT: before: test with char str helloworld:\n%s", strmapi2);
    printf("\n");
    printf("FT: after: should print alphabet from A to lenght of str:\n%s",  ft_strmapi(strmapi2, ft_f_chari));
    printf("\n");
    printf("\n");
    printf("FT: before: test with char str is empty:\n%s", strmapi3);
    printf("\n");
    printf("FT: after: shouldn't print anything:\n%s",  ft_strmapi(strmapi3, ft_f_chari));
    printf("\n");
    printf("\n");

    printf("------------STREQU----------------\n"); // STREQU
    char	strequ1[] = "";
	char	strequ2[] = "";
	char	strequ3[] = "abcdef";
	char	strequ4[] = "abcefg";
    printf("---- if strings are identical print 1, if not print 0.");
    printf("\n");
    printf("\n");
    printf("both strings are empty, result: %d", ft_strequ(strequ1, strequ2));
    printf("\n");
    printf("\n");
    printf("string 1 = 'asdfgh' and string 2 = 'asdfgj', result: %d", ft_strequ(strequ3, strequ4));
    printf("\n");
    printf("\n");

    printf("------------STRNEQU----------------\n"); // STRNEQU
    char	strnequ1[] = "";
	char	strnequ2[] = "";
	char	strnequ3[] = "abcdef";
	char	strnequ4[] = "abcefg";
    printf("---- if strings are identical print 1, if not print 0.");
    printf("\n");
    printf("\n");
    printf("both strings are empty, RESULT: %d \n   and function checks the first 2 characters", ft_strnequ(strnequ1, strnequ2, 2));
    printf("\n");
    printf("\n");
    printf("string 1 = 'asdfgh' and string 2 = 'asdfgj', RESULT: %d \n   and function checks the first 6 characters", ft_strnequ(strnequ3, strnequ4, 6));
    printf("\n");
    printf("\n");
    printf("string 1 = 'asdfgh' and string 2 = 'asdfgj', RESULT: %d \n   and function checks the first 3 characters", ft_strnequ(strnequ3, strnequ4, 3));
    printf("\n");
    printf("\n");

    printf("------------STRSUB----------------\n"); // STRSUB
    char	sub1[] = "Hello World";
	char	sub2[] = "01112019";
	char	sub3[] = "HELLO WORLD";
	printf("\n");
	printf("'Hello World', start 2, size 8: %s", ft_strsub(sub1, 2, 8));
	printf("\n");
	printf("'01112019', start = 3, size = 5: %s", ft_strsub(sub2, 3, 5));
	printf("\n");
	printf("'HELLO WORLD', start = 0, size = 3: %s", ft_strsub(sub3, 0, 4));
	printf("\n\n");

    printf("------------STRjoin----------------\n"); // STRjoin
    char	join1[] = "Hello you :)";
	char	join2[] = "";
	char	join3[] = "HELLO ";
    char	join4[] = "WORLD";
	printf("\n");
	printf("'Hello you :)' and empty string ---> '%s'", ft_strjoin(join1, join2));
	printf("\n");
    printf("\n");
	printf("'Hello you :)' and 'HELLO' ---> '%s'", ft_strjoin(join1, join3));
	printf("\n");
    printf("\n");
	printf("'HELLO ' and 'WORLD' ---> '%s'", ft_strjoin(join3, join4));
	printf("\n\n");

    printf("------------STRTRIM------------------------- \n\n"); // STRTRIM
    char trim1[] = "  hello world  ";
    char trim2[] = " hello";
    char trim3[] = "  h  ";
    char trim4[] = "   ";
    char trim5[] = "  h         d ";
    char trim6[] = "        2e3";
    printf("str = '  hello world  ' and result ---> '%s'", ft_strtrim(trim1));
	printf("\n");
    printf("\n");
    printf("str = ' hello' and result ---> '%s'", ft_strtrim(trim2));
    printf("\n");
    printf("\n");
    printf("str = '  h  ' and result ---> '%s'", ft_strtrim(trim3));
    printf("\n");
    printf("\n");
    printf("str = '   ' and result ---> '%s'", ft_strtrim(trim4));
    printf("\n");
    printf("\n");
    printf("str = '  h         d ' and result ---> '%s'", ft_strtrim(trim5));
    printf("\n");
    printf("\n");
    printf("str = '        2e3' and result ---> '%s'", ft_strtrim(trim6));
    printf("\n");
    printf("\n");
    printf("------------STRSPLIT------------------------- \n\n"); // STRSPLIT
    char split1[] = "*hello**lol*ok*bye**";
    char **strsplit;
    printf("this is the string: %s", split1);
    printf("\n");
    strsplit = ft_strsplit(split1, '*');
    int i = 0;
    printf("\n");
    printf("result ------>\t");
    while (i < 4)
        printf("%s\t", strsplit[i++]);
    printf("\n");
    printf("\n");
	printf("------------ITOA------------------------- \n\n"); // ITOA
	printf("result: %s\n", ft_itoa(1234));
	printf("result: %s\n", ft_itoa(-64));
	printf("result: %s\n", ft_itoa(-1));
	printf("result: %s\n", ft_itoa(0));
	printf("\n");
    printf("\n");
	printf("------------PUTCHAR------------------------- \n\n"); // PUTCHAR
	printf("Prints 'T': ");
	printf("\n");
	ft_putchar('T');
	printf("\n");
	printf("Prints 'x': ");
	printf("\n");
	ft_putchar('x');
	printf("\n");
    printf("\n");
	printf("------------PUTSTR------------------------- \n\n"); // PUTSTR
	char	putstr[] = "Hello world!";
	char	putstr2[] = "byelol";
    printf("Printing 'Hello world!': ");
	printf("\n");
	ft_putstr(putstr);
	printf("\n");
	printf("Printing 'bye': ");
	printf("\n");
	ft_putstr(putstr2);
	printf("\n");
    printf("\n");	
	printf("------------PUTENDL------------------------- \n\n"); // PUTENDL
	printf("\n");
	printf("Prints 'Hello world!': ");
	printf("\n");
	ft_putendl(putstr);
	printf("\n");
	printf("Prints 'byelol': ");
	printf("\n");
	ft_putendl(putstr2);
	printf("\n");
    printf("\n");
	printf("------------PUTNBR------------------------- \n\n"); // PUTNBR
	printf("prints 0: ");
	printf("\n");
	ft_putnbr(0);
	printf("\n");
	printf("prints 12: ");
	printf("\n");
	ft_putnbr(12);
	printf("\n");
	printf("prints -2147483648: ");
	printf("\n");
	ft_putnbr(-2147483648);
	printf("\n");
	printf("prints 2147483647: ");
	printf("\n");
	ft_putnbr(2147483647);
	printf("\n\n");
	printf("PART 2 is finished thank u, next");
	printf("\n\n");
return (0);
}