#include <stdio.h>

/**
* Return: always 0 (success)
*
*/
void print_name(char *name, void (*f)(char *)) {
f(name);
}
void print_function(char *name) {
printf("Hello, %s!\n", name);
}
int main() {
char name[] = "John";
print_name(name, print_function);
return 0;
}
