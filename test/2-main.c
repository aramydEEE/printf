#include "../main.h"
#include <stdio.h>


int main(int argc, char *argv[])
{

	  int len;
    int len2;
    unsigned int ui;
    void *addr;


	len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");

	_printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");

    return (0);
}
