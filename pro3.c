#include <stdio.h>

int main() {
    int num, first, last;

    printf("Enter number: ");
    scanf("%d", &num);

    last = num % 10;   

    first = num;       
    while (first >= 10) {  
        first = first / 10;   
       
    }
 int sum = first + last;
    printf("The sum of first and the last digit: %d", sum);

   
}