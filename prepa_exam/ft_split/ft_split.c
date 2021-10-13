/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaouassa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 11:55:05 by eaouassa          #+#    #+#             */
/*   Updated: 2021/10/13 13:08:30 by eaouassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int has_char(char *s, char c)
{
	int i = 0;

	while(s[i])
	{
		if(s[i] == c)
			return (1);
		i++;
	}
	return (0);
}
int str_len(char *s)
{
	int i = 0;
	while(s[i])
		i++;
	return (i);
}
int count_words(char *s, char *charset)
{
	int count = 0;
	int i = 0;

	while(s[i])
	{
		while(s[i] && !has_char(charset,s[i]))
			i++;
		while(has_char(charset,s[i]))
			i++;
		count++;
	}
	return (count);
}
int word_len(char *s, char *sep)
{
	int i=0;
	while(s[i] && !has_char(sep, s[i]))
		i++;
	return (i);
}
char *create_word(char *s, char *charset, char **word)
{
	int wlen;
	int i = 0;

	wlen = word_len(s, charset);
	printf("len-->%d\n", wlen);
	*word = malloc(sizeof(char) * (wlen+1));
	(*word)[wlen] = 0;
	while (i < wlen)
		(*word)[i++] = *s++;
	while (has_char(charset, *s))
		s++;
	return (s);
}
char **ft_split(char *str, char *charset)
{
	char **result;
	int words_number;
	int i;
	while(has_char(charset,*str))
		str++;
	words_number = count_words(str, charset);
	result = malloc(sizeof(char *) * (words_number + 1));
	result[words_number] = 0;
	i = 0;
	while(i < words_number)
	{
		str = create_word(str, charset, result + i);
		i++;
	}
	return (result);
}

int main()
{	
	int i = 0;
	char **strs = ft_split("abcd--efjh-asdf--hocuine","-");
	if (!strs)
		return 0;
	while(strs[i])
	{
		printf("--> %s\n", strs[i]);
		i++;
	}
}
