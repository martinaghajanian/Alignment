#include <stdio.h>

struct MyStruct {
    double c;
    int b;
    char a;
    
};

int main() {
    struct MyStruct s;

    printf("Size of struct: %zu bytes\n", sizeof(s));
    
    printf("Address of c: %p\n", (void*)&s.c);
    printf("Address of b: %p\n", (void*)&s.b);
    printf("Address of a: %p\n", (void*)&s.a);

    return 0;
}
