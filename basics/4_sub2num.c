#include <stdio.h>
int main() {    

    int number1, number2, difference;
    
    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);

    // calculating sum
    difference = number1 - number2;      
    
    printf("%d - %d = %d", number1, number2, difference);
    printf("\nDifference : %d",difference);
    return 0;
}