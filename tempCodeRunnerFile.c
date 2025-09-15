#include <stdio.h>

int is_magic_number(int n) {
    while (n > 9) {
        int sum = 0;
        int temp = n;
        
        while (temp > 0) {
            sum += temp % 10;
            temp /= 10;
        }
        n = sum;
    }
    return n == 1;  // Returns 1 if true, 0 if false
}

void print_magic_numbers(int limit) {
    printf("Magic numbers up to %d:\n", limit);
    
    for (int i = 1; i <= limit; i++) {
        if (is_magic_number(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    print_magic_numbers(100);
    return 0;
}