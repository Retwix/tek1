/*
** EPITECH PROJECT, 2018
** my_str_word_tab
** File description:
** display characters \n
*/
int ope(char *tab)
{
	int i = 0;

	if (str[i] == '-')
		tab[i] = str[i];
	if (str[i] == '+')
		tab[i] = str[i];
	if (str[i] == '/')
		tab[i] = str[i];
	if (str[i] == '*')
		tab[i] = str[i];
	if (str[i] == '%')
		tab[i] = str[i];
}
int shuting_yard(char *str)
{
	int i = 0;
	char *tab;
	
	while(str[i] != 0) {
		if (str[i] <= 57 || str[i] >= 48) {
			tab[i] = str[i] * 10 + (str[i] - '0');
			i++;

		}
		if 
	}
	
}
