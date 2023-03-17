/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamkhan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 10:42:31 by ylamkhan          #+#    #+#             */
/*   Updated: 2022/07/25 11:46:48 by ylamkhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);

}

void	ft_print_comb1(void)
{
        char    f;

        f = '0';
	   	while (f <= '9')
		{
         write(1, &f, 1);
		 if (f != '7')
			 write(1, ", ", 2);
		 f++;
		}
}

void	ft_print_comb1(void)
{
        char    f;
        char    s;

        f = '0';
        while (f <= '8')
        {
                s = f + 1;
                while (s <= '9')
                {
				   	write(1, &f, 1);
					write(1, &s, 1);
					if (f != '8')
						write(1, ", ", 2);
				   	s++;
				}
				f++;
        }
}

void	ft_print_comb3(void)
{
        char    f;
        char    s;
        char    l;

        f = '0';
        while (f <= '7')
        {
                s = f + 1;
                while (s <= '8')
                {
                        l = s + 1;
                        while (l <= '9')
                        {
                                write(1, &f, 1);
                                write(1, &s, 1);
                                write(1, &l, 1);
                                if (f != '7')
                                        write(1, ", ", 2);
                                l++;
                        }
                        s++;
                }
                f++;
        }
}

void	ft_print_comb(void)
{
        char    f;
        char    s;
        char    l;
		char	h;

        f = '0';
        while (f <= '6')
        {
                s = f + 1;
                while (s <= '7')
                {
                        l = s + 1;
                        while (l <= '8')
                        {
							while (h <= '9')
							{
								write(1, &f, 1);
                                write(1, &s, 1);
                                write(1, &l, 1);
								write(1, &h, 1);
                                if (f != '6')
                                        write(1, ", ", 2);
								h++;
							}
							l++;
                        }
                        s++;
                }
                f++;
        }
}

void	ft_print_comb(void)
{
        char    f;
        char    s;
        char    l;
		char	h;
		char	k;

        f = '0';
        while (f <= '5')
        {
                s = f + 1;
                while (s <= '6')
                {
                        l = s + 1;
                        while (l <= '7')
                        {
							while (h <= '8')
							{
								while (k <= '9')
								{
                                	write(1, &f, 1);
                                	write(1, &s, 1);
                                	write(1, &l, 1);
									write
                                	if (f != '7')
                                        write(1, ", ", 2);
                                l++;
                        }
                        s++;
                }
                f++;
        }
}

ft_print_comb(void)
{
        char    f;
        char    s;
        char    l;

        f = '0';
        while (f <= '7')
        {
                s = f + 1;
                while (s <= '8')
                {
                        l = s + 1;
                        while (l <= '9')
                        {
                                write(1, &f, 1);
                                write(1, &s, 1);
                                write(1, &l, 1);
                                if (f != '7')
                                        write(1, ", ", 2);
                                l++;
                        }
                        s++;
                }
                f++;
        }
}

ft_print_comb(void)
{
        char    f;
        char    s;
        char    l;

        f = '0';
        while (f <= '7')
        {
                s = f + 1;
                while (s <= '8')
                {
                        l = s + 1;
                        while (l <= '9')
                        {
                                write(1, &f, 1);
                                write(1, &s, 1);
                                write(1, &l, 1);
                                if (f != '7')
                                        write(1, ", ", 2);
                                l++;
                        }
                        s++;
                }
                f++;
        }
}

ft_print_comb(void)
{
        char    f;
        char    s;
        char    l;

        f = '0';
        while (f <= '7')
        {
                s = f + 1;
                while (s <= '8')
                {
                        l = s + 1;
                        while (l <= '9')
                        {
                                write(1, &f, 1);
                                write(1, &s, 1);
                                write(1, &l, 1);
                                if (f != '7')
                                        write(1, ", ", 2);
                                l++;
                        }
                        s++;
                }
                f++;
        }
}
ft_print_comb(void)
{
        char    f;
        char    s;
        char    l;

        f = '0';
        while (f <= '7')
        {
                s = f + 1;
                while (s <= '8')
                {
                        l = s + 1;
                        while (l <= '9')
                        {
                                write(1, &f, 1);
                                write(1, &s, 1);
                                write(1, &l, 1);
                                if (f != '7')
                                        write(1, ", ", 2);
                                l++;
                        }
                        s++;
                }
                f++;
        }
}
