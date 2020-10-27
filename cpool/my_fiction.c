
#include <stdio.h>
void my_putstr
int main()
{
    int a;
    int i = 0;
    char *dest;

    while (i < 4) {
        printf("enter the alpha number\n");
        scanf("%d", &a);
        a = a % 9;
        dest[i] = a;
        i++;
    }
    my_putstr(dest);

}
