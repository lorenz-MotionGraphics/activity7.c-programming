#include <stdio.h>

int main() {
    int num1, num2, num3, sum, result;

    printf("Enter Number 1: ");
    scanf("%d", &num1);
    printf("Enter Number 2: ");
    scanf("%d", &num2);
    printf("Enter Number 3: ");
    scanf("%d", &num3);
    sum = num1 + num2;
    result = sum - num3;
    printf("Total of Num1 and Num2 is: %d\n", sum);
    printf("Subtract Num3 to the total: %d", result);
    return 0;
}
/*Activity7 no.l: Make a program that
will input three numbers Num1, Num2,
Num3. Add Numl and Num2. Subtract
Num3 to the Sum of Numl and Num2
Enter Number1: 5
Enter Number2: 10
Enter Number3: 6
Total of Num1 and Num2 is : 15
Subtract Num3 to the total: 9*/
