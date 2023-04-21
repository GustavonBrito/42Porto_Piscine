/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uviana-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 15:09:38 by uviana-a          #+#    #+#             */
/*   Updated: 2023/04/18 15:09:39 by uviana-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main() 
{
    int num;
    char    c;

    printf("-----------------------------------\n");
    //ft_bzero
    char buffer[20] = "01234567899876543210";
    char buffer_ft[20] = "01234567899876543210";
    int  count;
   
    count = sizeof buffer;
    bzero(buffer, count);
    printf("bzero: %s\n",buffer);
    ft_bzero(buffer_ft, count);
    printf("ft_bzero: %s\n", buffer_ft);
    printf("-----------------------------------\n");
    //ft_isalnum
    c = 'a';
    num = '1';
    ft_isalnum(c);
    printf("isalnum (c): %d\n", isalnum(c));
    printf("ft_isalnum (c): %d\n", ft_isalnum(c));
    printf("isalnum (num): %d\n", isalnum(num));
    printf("ft_isalnum (num): %d\n", ft_isalnum(num));
    printf("-----------------------------------\n");
    //ft_isalpha
    c = 'a';
    printf("isalpha: %d\n", isalpha(c));
    printf("ft_isalpha: %d\n", ft_isalpha(c));
    printf("-----------------------------------\n");
    //ft_isascii
	num = '1';
	c = 'p';
	printf("isascii (num): %d\n", isascii(num));
	printf("ft_isascii (num): %d\n", ft_isascii(num));
	printf("isascii (c): %d\n", isascii(c));
	printf("ft_isascii (c): %d\n", isascii(c));
    printf("-----------------------------------\n");
    //ft_isdigit
	int a;
    int b;

    a = '1';
    b = 1;
    printf("isdigit (a): %d\n", isdigit(a));
    printf("ft_isdigit (a): %d\n", ft_isdigit(a));
    printf("isdigit (b): %d\n", isdigit(b));
    printf("ft_isdigit (b): %d\n", ft_isdigit(b));
    printf("-----------------------------------\n");
    //ft_isprint
    c = '\t';
    num = 'a';
    printf("isprint (a1): %d\n", isprint(c));
    printf("ft_isprint (a1): %d\n", ft_isprint(c));
    printf("isprint (num): %d\n", isprint(num));
    printf("ft_isprint (num): %d\n", ft_isprint(num));
    printf("-----------------------------------\n");
    //ft_memcpy
    char    source[25] = "source string";
    char    target[25] = "Target";
    char    targetb[25] = "targetb";

    count = 20;
    memcpy(target, source, count);
    printf("memcpy: %s\n", target );
    ft_memcpy(targetb, source, count);
    printf("ft_memcpy: %s\n",targetb);
    printf("-----------------------------------\n");
    //ft_memmove
    char    target1[25] = "Almeida Viana Uatilla";
    char    targetb1[25] = "Almeida Viana Uatilla";

    char    *pos_rep1 = target1 + 8;
    char    *pos_repb1 = targetb1 + 8; 
    char    *source1 = target1;
    char    *sourceb1 = targetb1;
    ft_memmove(pos_repb1, sourceb1, 5);
    memmove(pos_rep1, source1, 5);
    printf("memmove(): %s\n", targetb1);
    printf("ft_memmove(): %s\n", target1);
    printf("-----------------------------------\n");
    //ft_memset
    char my_string[10];
    char my_string2[10];
    char    nume;
    int     countad;

    nume = 'a';
    countad = 10;
    memset(my_string, nume, countad);
    printf("memset: %s\n", my_string);
    
    ft_memset(my_string2, nume, countad);
    printf("ft_memset: %s\n", my_string2);
    printf("-----------------------------------\n");
    //ft_strlcat
    char dest[20] = "Hellowowowo";
    char src[10] = "World";
    int size;

    size = 10;

    printf("ft_strlcat: %zu\n",ft_strlcat(dest, src, size));
    printf("-----------------------------------\n");
    //ft_strlcpy
    char    src1[20] = "Uatilla";
    char    dest1[20] = "Viana";
    int dest_buffer = 2;

    num = ft_strlcpy(dest1, src1, dest_buffer);
    printf("ft_strlcpy: %d\n", num);
    printf("-----------------------------------\n");
    //ft_strlen
    char    *string;
    string = "Uatilla Viana Almeida";
    printf("strlen: %ld\n", strlen(string));
    printf("ft_strlen: %ld\n", ft_strlen(string));
    printf("-----------------------------------\n");
    //ft_toupper
    char    lower = 'a';
    char    lower1 = 'a';
    lower = ft_toupper(lower);
    lower1 = toupper(lower1);
    printf("ft_toupper: %c\n", lower);
    printf("toupper: %c\n", lower1);
    printf("-----------------------------------\n");
    //ft_tolower
    char    upper = 'A';
    char    upper1 = 'A';
    upper = ft_tolower(upper);
    upper1 = tolower(upper1);
    printf("ft_tolower: %c\n", upper);
    printf("tolower: %c\n", upper1);
    printf("-----------------------------------\n");
    //ft_strchr
    char    stri[6] = "Abcde";
    c = 'b';
    printf("ft_strchr: %p\n",ft_strchr(stri, c));
    printf("strchr: %p\n", strchr(stri, c));
    printf("-----------------------------------\n");
    //ft_strrchr
    char    strin[6] = "AbcsA";
    c = 'A';
    printf("ft_strrchr: %p\n",ft_strrchr(strin, c));
    printf("strrchr: %p\n", strrchr(strin, c));
    printf("-----------------------------------\n");
    //ft_strnstr
    char	big_strnstr [20] = "Hello 42 Porto";
	char	little_strnstr [20] = "4";
	printf("ft_strnstr: %s\n", ft_strnstr(big_strnstr, little_strnstr, 20));
    printf("-----------------------------------\n");
    //ft_atoi
    char    *string_atoi = "    +123 abc";
    printf("atoi: %d\n", atoi(string_atoi));
    printf("ft_atoi: %d\n", ft_atoi(string_atoi));
    printf("-----------------------------------\n");
    //ft_calloc
    int *ptr2c = 0;
    ptr2c = (int*) ft_calloc(5, sizeof(int));
    int i = 0;
    printf("ft_calloc: ");
    while(i < 5) {
        printf("%d", *(ptr2c + i));
        i++;
    }
    printf("\n");
    printf("-----------------------------------\n");
    //ft_strdup
    char    *string_strdup = "Ola";
    char    *string_strdup2 = "Ola";
    char    *ptr_string;
    char    *ptr_string2;
    ptr_string = strdup(string_strdup);
    ptr_string2 = ft_strdup(string_strdup2);
    printf("strdup: %s [%p]\n", ptr_string, &ptr_string);
    printf("ft_strdup: %s [%p]\n", ptr_string2, &ptr_string2);
    printf("-----------------------------------\n");
    return 0;
}
