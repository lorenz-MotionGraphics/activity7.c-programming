/*Activity7 no.2:Make a program that
will compute for the average grade of
student for the ff: subject: Math,
English, Science

Enter Name of Student: C ruz, Angelika
Enter Math Grade :85
Enter English Grade:85
Enter Science Grade:85
The average grade of student is:85*/

#include <stdio.h>

int main() {
    char name[20];
    float math, english, science, average;

    printf("Enter Name of Student: ");
    scanf("%s", &name);
    printf("Enter Math Grade: ");
    scanf("%f", &math);
    printf("Enter English Grade: ");
    scanf("%f", &english);
    printf("Enter Science Grade: ");
    scanf("%f", &science);
    average = (math + english + science) / 3;
    printf("The average grade of %s is: %.2f", name, average);
    return 0;
}
