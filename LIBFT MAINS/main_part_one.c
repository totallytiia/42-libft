/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_part_one.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaukkan <tlaukkan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 12:58:19 by tlaukkan          #+#    #+#             */
/*   Updated: 2019/11/02 20:53:26 by tlaukkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "libft.h"


int		main()
{
	printf("\n");
	printf("---MEMSET---\n"); // MEMSET : fill a byte string with a byte value
	//	OG:
	char mem[] = "helloworld";
	printf("OG: %s\n", memset(mem, 'c', 5));
	//	FT:
	char mem1[] = "helloworld";
	printf("FT1: %s\n", ft_memset(mem1, 'c', 5));
	printf("\n");
	printf("---BZERO---\n"); // BZERO : write zeroes to a byte string		
	char	makezero[] = "abcde";
	char	makezero2[] = "abcde";
	char	makezero3[] = "12345678";
	char	makezero4[] = "12345678";
	ft_bzero(makezero, 2);
	printf("FT:   %s", makezero);
	printf("\n");
	bzero(makezero2, 2);
	printf("OG:   %s", makezero2);
	printf("\n");
	ft_bzero(makezero3, 4);
	printf("FT:   %s", makezero3);
	printf("\n");
	bzero(makezero4, 4);
	printf("OG:   %s", makezero4);
	printf("\n");
	printf("\n");

	printf("---MEMCPY---\n"); // MEMCPY : copy memory area	
	// OG:
	char mem4[] = "helloworld";
	char mem4s[] = "HELLOWORLD";
	printf("OG before: %s.\n", mem4s);
	printf("OG after: %s.\n", memcpy(mem4s, mem4, 5));
	// FT
	char mem5[] = "helloworld";
	char mem5s[] = "HELLOWORLD";
	printf("FT before: %s.\n", mem5s);
	ft_memcpy(mem5s, mem5, 5);
	printf("FT after: %s.\n", mem5s);
	printf("\n");
	printf("---MEMCCPY---\n"); // MEMCCPY : cpy str until char found
	// OG:
	char mem6[] = "helloworld";
	char mem6s[] = "HELLOWORLD";
	printf("OG before: %s\n", mem6s);
	printf("OG after: %s\n", memccpy(mem6s, mem6,'w', 6));
	// FT
	char mem7[] = "helloworld";
	char mem7s[] = "HELLOWORLD";
	printf("FT before: %s\n", mem7s);
	printf("FT after: %s\n", ft_memccpy(mem7s, mem7,'w', 6));
	printf("\n");
	printf("---MEMMOVE---\n"); // MEMMOVE
	char	move1[] = "abcd";
	char	move2[] = "BBBBBBBBBB";
	char	move3[] = "Helloyouthere";
	printf("FT: %s", ft_memmove(move2, move1, 6));
	printf("\n");
	printf("OG: %s", memmove(move2, move1, 6));
	printf("\n");
	printf("FT: %s", ft_memmove(move2, move3, 10));
	printf("\n");
	printf("OG: %s", memmove(move2, move3, 10));
	printf("\n\n");
	printf("---MEMCHR---\n"); // MEMCHR
	char	BOOM[] = "abcdef";
	char	BOOM1[] = "abcdef";
	ft_memchr(BOOM, 10, 6);
	printf("FT: %s", BOOM);
	printf("\n");
	memchr(BOOM1, 10, 6);
	printf("OG: %s", BOOM1);
	printf("\n\n");
	printf("---MEMCMP---\n"); // MEMCMP
	char	compare1[] = "adefgh";
	char	compare2[] = "abcdeg";
	char	empty1[] = "";
	char	empty2[] = "";
	printf("FT: %d", ft_memcmp(compare1, compare2, 6));
	printf("\n");
	printf("OG: %d", memcmp(compare1, compare2, 6));
	printf("\n");
	printf("FT: %d", ft_memcmp(compare2, compare1, 6));
	printf("\n");
	printf("OG: %d", memcmp(compare2, compare1, 6));
	printf("\n");
	printf("FT: %d", ft_memcmp(empty1, empty2, 0));
	printf("\n");
	printf("OG: %d", memcmp(compare1, compare2, 0));
	printf("\n\n");
	printf("---STRLEN---\n"); // STRLEN
	char	str_len[] = "hello world";
	printf("FT: %zu", ft_strlen(str_len));
	printf("\n");
	printf("OG: %lu", strlen(str_len));
	printf("\n\n");
	printf("---STRDUP---\n"); // STRDUP
	char strdup1[] = "helloworld";
	char strdup2[] = "helloworld";
	printf("FT: %s", ft_strdup(strdup1));
	printf("\n");
	printf("FT: %s", ft_strdup(strdup2));
	printf("\n\n");
	printf("---STRCPY---\n"); // STRCPY
	char strcpydes[] = "hello";
	char strcpysrc[] = "HELLO";
	char strcpydes2[] = "hello";
	char strcpysrc2[] = "HELLO";
	printf("before: %s\n", strcpydes);
	printf("FT: %s", ft_strcpy(strcpydes, strcpysrc));
	printf("\n");
	printf("before: %s\n", strcpydes2);
	printf("OG: %s", strcpy(strcpydes2, strcpysrc2));
	printf("\n\n");
	printf("---STRNCPY---\n"); // STRNCPY
	char strncpydes[] = "hellouu";
	char const strncpysrc[] = "BYEBYE";
	char strncpydes2[] = "hellouu";
	char const strncpysrc2[] = "BYEBYE";
	printf("before: %s\n", strncpydes);
	ft_strncpy(strncpydes, strncpysrc, 3);
	printf("FT: %s", strncpydes);
	printf("\n");
	printf("before: %s\n", strncpydes2);
	strncpy(strncpydes2, strncpysrc2, 3);
	printf("OG: %s", strncpydes2);
	printf("\n\n");
	printf("---STRCAT---\n"); // STRCAT
	char strcat1[20] = "hellouu";
	char strcat2[20] = "BYEBYE";
	char strcat3[20] = "hellouu";
	char strcat4[20] = "BYEBYE";
	printf("before: %s\n", strcat1);
	ft_strcat(strcat1, strcat2);
	printf("FT: %s", strcat1);
	printf("\n");
	printf("before: %s\n", strcat3);
	strcat(strcat3, strcat4);
	printf("OG: %s", strcat3);
	printf("\n\n");
	printf("---STRNCAT---\n"); // STRNCAT
	char strncat1[20] = "hellouu";
	char strncat2[20] = "BYEBYE";
	char strncat3[20] = "hellouu";
	char strncat4[20] = "BYEBYE";
	printf("before: %s\n", strncat1);
	ft_strncat(strncat1, strncat2, 4);
	printf("FT: %s", strncat1);
	printf("\n");
	printf("before: %s\n", strncat3);
	strncat(strncat3, strncat4, 4);
	printf("OG: %s", strncat3);
	printf("\n\n");
	printf("---STRLCAT---\n"); // STRLCAT
	char strlcat1[20] = "hello";
	char strlcat2[20] = "BYEBYE";
	char strlcat3[20] = "hello";
	char strlcat4[20] = "BYEBYE";
	printf("before: %s\n", strlcat1);
	ft_strlcat(strlcat1, strlcat2, 7);
	printf("FT: %s", strlcat1);
	printf("\n");
	printf("before: %s\n", strlcat3);
	strlcat(strlcat3, strlcat4, 7);
	printf("OG: %s", strlcat3);
	printf("\n\n");
	printf("---STRCHR---\n"); // STRCHR
	char	chrstr1[] = "hello";
	char	chrstr2[] = "hello";
	printf("FT: %s", ft_strchr(chrstr1, 'e'));
	printf("\n");
	printf("OG: %s", strchr(chrstr2, 'e'));
	printf("\n\n");
	printf("---STRRCHR---\n"); // STRRCHR
	char	chrrstr1[] = "hello";
	char	chrrstr2[] = "hello";
	char	chrrstr3[] = "hello";
	char	chrrstr4[] = "hello";
	printf("FT: %s", ft_strrchr(chrrstr1, 'l'));
	printf("\n");
	printf("OG: %s", strrchr(chrrstr2, 'l'));
	printf("\n");
	printf("FT: %s", ft_strrchr(chrrstr3, 'q'));
	printf("\n");
	printf("OG: %s", strrchr(chrrstr4, 'q'));	
	printf("\n\n");
	printf("---STRSTR---\n"); // STRSTR
	char	ss1[] = "helloworld";
	char	ss2[] = "wor";
	char	ss3[] = "helloworld";
	char	ss4[] = "";	
	printf("FT: %s", ft_strstr(ss1, ss2));
	printf("\n");
	printf("OG: %s", strstr(ss1, ss2));
	printf("\n");	
	printf("FT: %s", ft_strstr(ss3, ss4));
	printf("\n");
	printf("OG: %s", strstr(ss3, ss4));	
	printf("\n\n");
	printf("---STRNSTR---\n"); // STRNSTR
	char	sns1[] = "helloworld";
	char	sns2[] = "lo";
	char	sns3[] = "helloworld";
	char	sns4[] = "lo";	
	printf("FT: %s", ft_strnstr(sns1, sns2, 5));
	printf("\n");
	printf("OG: %s", strnstr(sns1, sns2, 5));
	printf("\n");	
	printf("FT: %s", ft_strnstr(sns3, sns4, 4));
	printf("\n");
	printf("OG: %s", strnstr(sns3, sns4, 4));	
	printf("\n\n");		
	printf("---STRCMP---\n"); // STRCMP
	char	snc1[] = "helloworld";
	char	snc2[] = "hellOworld";
	printf("FT: %d", ft_strcmp(snc1, snc2));
	printf("\n");
	printf("OG: %d", strcmp(snc1, snc2));	
	printf("\n\n");	
	printf("---STRNCMP---\n"); // STRNCMP
	char	snnc1[] = "helloworld";
	char	snnc2[] = "hellOworld";
	printf("FT: %d", ft_strncmp(snnc1, snnc2, 5));
	printf("\n");
	printf("OG: %d", strncmp(snnc1, snnc2, 5));
	printf("\n");
	printf("FT: %d", ft_strncmp(snnc1, snnc2, 2));
	printf("\n");
	printf("OG: %d", strncmp(snnc1, snnc2, 2));	
	printf("\n\n");	
	printf("---ATOI---\n"); // ATOI
	printf("FT: %d\n", ft_atoi("    -123456rr4"));
	printf("OG: %d\n", atoi("    -123456rr4"));
	printf("FT: %d\n", ft_atoi("    -+43"));
	printf("OG: %d\n", atoi("    -+43"));
	printf("FT: %d\n", ft_atoi("    +43"));
	printf("OG: %d\n", atoi("    +43"));
	printf("\n");	
	printf("---ISALPHA---\n"); // ISALPHA
	printf("FT: %d\n", ft_isalpha(91));
	printf("OG: %d\n", isalpha(91));
	printf("FT: %d\n", ft_isalpha(98));
	printf("OG: %d\n", isalpha(98));
	printf("\n");	
	printf("---ISDIGIT---\n"); // ISDIGIT
	printf("FT: %d\n", ft_isdigit(50));
	printf("OG: %d\n", isdigit(50));
	printf("FT: %d\n", ft_isdigit(60));
	printf("OG: %d\n", isdigit(60));
	printf("\n");
	printf("---ISALNUM---\n"); // ISALNUM
	printf("FT: %d\n", ft_isalnum(50));
	printf("OG: %d\n", isalnum(50));
	printf("FT: %d\n", ft_isalnum(2));
	printf("OG: %d\n", isalnum(2));
	printf("\n");	
	printf("---ISASCII---\n"); // ISASCII
	printf("FT: %d\n", ft_isascii(150));
	printf("OG: %d\n", isascii(150));
	printf("FT: %d\n", ft_isascii(2));
	printf("OG: %d\n", isascii(2));
	printf("\n");
	printf("---ISPRINT---\n"); // ISPRINT
	printf("FT: %d\n", ft_isprint(150));
	printf("OG: %d\n", isprint(150));
	printf("FT: %d\n", ft_isprint(52));
	printf("OG: %d\n", isprint(52));
	printf("\n");
	printf("---TOUPPER---\n"); // TOUPPER
	printf("FT: %c\n", ft_toupper('h'));
	printf("OG: %c\n", toupper('h'));
	printf("FT: %c\n", ft_toupper('A'));
	printf("OG: %c\n", toupper('A'));
	printf("\n");
	printf("---TOLOWER---\n"); // TOLOWER
	printf("FT: %c\n", ft_tolower('h'));
	printf("OG: %c\n", tolower('h'));
	printf("FT: %c\n", ft_tolower('A'));
	printf("OG: %c\n", tolower('A'));
	printf("\n");	
	return (0);
}
