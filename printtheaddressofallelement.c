#include <stdio.h>

int main() {
    int arr[5];

    // Print the address of each element in the array
    for(int i = 0; i < 5; i++) {
        printf("Address of arr[%d]: %p\n", i, (void*)&arr[i]);
    }

    return 0;
}