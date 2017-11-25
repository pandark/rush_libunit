/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntoniolo <ntoniolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/13 17:19:30 by ntoniolo          #+#    #+#             */
/*   Updated: 2017/09/12 16:33:10 by ntoniolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
# include <locale.h>
# include <stdarg.h>

# include <stdint.h>
# define DIESE	0
# define MOINS	1
# define PLUS	2
# define SPACE	3
# define ZERO	4
# define PRECI	5

# define MOD_HH	1
# define MOD_H	2
# define MOD_J	3
# define MOD_Z	4
# define MOD_L	5
# define MOD_LL	6
# define MOD_LLL 7

# define FLAG_S (1 << 1)

# define BUFF_SIZE_P 300

typedef struct	s_option
{
	long long int	len;
	va_list			ap;
	int				flags[7];
	long long int	width;
	long long int	preci;
	int				mod;
	char			*nb_c;
	wchar_t			*word_w;
	char			*word_c;
	char			*prefix;
	char			*before;
	int				size_flags;
	int				size_arg;
	int				sign;
	char			*final;
	int				final_len;
	int				sub_word;
	int				fd;
	char			*sbuffer;
	int				flag;
	int				b;
	char			buffer[BUFF_SIZE_P];
}				t_option;

int				ft_printf(char *str, ...);
int				ft_dprintf(int fd, char *str, ...);
char			*ft_sprintf(char *str, ...);

void			printf_loop(char *str, t_option *option);

void			ft_putbuffer(t_option *option);
void			ft_putbufferchar(char c, t_option *option);
void			ft_reallocbuffer(t_option *option);
void			ft_reallocbufferchar(char c, t_option *option);

int				check_flags(char *str, t_option *option);
int				sc_c(char *str, t_option *option);
int				sc_s(char *str, t_option *option);
int				dipfoux(char *str, t_option *option);
void			mod_uox(char *str, t_option *option);
void			mod_di(char *str, t_option *option);
void			mod_dipfoux(char *str, t_option *option);
int				write_other(char *str, t_option *option);
int				write_percent(char *str, t_option *option);

int				can_i_write_width(char *str, t_option *option);
char			*write_width(t_option *option);
char			*write_width_0(char *str, t_option *option);
int				preci_sc(char *str, t_option *option);
int				preci_dioux(char *str, t_option *option);
int				write_f(char *str, t_option *option, long double nb);
int				write_dipoux(char *str, t_option *option, long long int nb);

int				ft_wcharlen(wchar_t c);
size_t			ft_wstrlen(const wchar_t *str);
int				ft_sizebit(long long nbr);
void			ft_putwstr(wchar_t *str);
void			ft_putwchar(wchar_t c);
char			*ft_watoa(wchar_t *str);
char			*ft_wctoc(wchar_t c);
char			*ft_itoa_ll_limit(long long int nb);
char			*ft_itoa_base_maj_ui(long long unsigned int nb, int base);
char			*ft_itoa_base_ui(long long unsigned int nb, int base);
void			ft_putnbrbase(int n, int base);
wchar_t			*ft_wstrnew(size_t size);
wchar_t			*ft_wstrsub(const wchar_t *s, unsigned int start, size_t len);
char			*ft_strjoinfree(char *s1, char *s2);
char			*ft_dotoa(double nb, int len);
char			*ft_memjoinfree(char *s1, char *s2, int len);

#endif
