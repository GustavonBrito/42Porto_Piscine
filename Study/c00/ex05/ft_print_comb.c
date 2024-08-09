/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uviana-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 15:55:44 by uviana-a          #+#    #+#             */
/*   Updated: 2023/03/09 16:39:26 by uviana-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <io.h>
#include <stdio.h>

void ft_print_comb(){
    int c = 48;
    int d = c + 1;
    int e = d + 1;

    while(e <= 57 ){
        write(1, &c, 1);
        write(1, &d, 1);
        write(1, &e, 1);
        printf(", ");
        e++;
        while (e > 57){
            d++;
            e = d + 1;
            write(1, &c, 1);
            write(1, &d, 1);
            write(1, &e, 1);
            printf(", ");
            e++;
            break;
        }
    }
    e = 50;
    while (e < 57){
    c++;
    d = c - 1;
    write(1, &c, 1);
    write(1, &d, 1);
    write(1, &e, 1);
    printf(", ");
    c--;
    d--;
    e++;
}
    printf("%d",e);
}