/*
** EPITECH PROJECT, 2018
** window
** File description:
** display a window
*/
#include <SFML/Graphics.h>
int main()
{
	sfVideoMode mode = {800, 600, 32};
	sfRenderWindow *window;

	window = sfRenderWindow_create(mode, "MyWindow", sfResize | sfClose, NULL);
	if (!window)
		_Exit;
}
