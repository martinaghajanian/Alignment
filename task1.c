#include <stdio.h>

int main() {
    int int_var;
    char char_var;
    double double_var;
    short short_var;

    printf("Size of int: %zu bytes\n", sizeof(int_var));
    printf("Size of char: %zu bytes\n", sizeof(char_var));
    printf("Size of double: %zu bytes\n", sizeof(double_var));
    printf("Size of short: %zu bytes\n", sizeof(short_var));

    printf("Address of int_var: %p\n", (void*)&int_var);
    printf("Address of char_var: %p\n", (void*)&char_var);
    printf("Address of double_var: %p\n", (void*)&double_var);
    printf("Address of short_var: %p\n", (void*)&short_var);

    return 0;
}
