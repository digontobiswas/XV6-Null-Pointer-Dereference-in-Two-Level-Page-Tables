#include "kernel/types.h"
#include "user/user.h"

int main() {
    int *ptr = 0;
    printf("Dereferencing null pointer...\n");
    printf("Value: %p\n", ptr); // This will crash
    exit(0);
}
