#include <stdio.h>

int main()
{ 
    char name[50], section[20];
    int num1, num2;
    float division;

    // Input part
    printf("Enter Complete Name: ");
    fgets(name, sizeof(name), stdin); // gets full name including spaces

    printf("Enter Section: ");
    fgets(section, sizeof(section), stdin);

    printf("\nEnter First number: ");
    scanf("%d", &num1);

    printf("Enter Second number: ");
    scanf("%d", &num2);

    //Calculation 
    division = (float)num1, num2;

    // OutputP
    printf("\n\tStudent Calculation\n");
    printf("Student name: %s", name);
    printf("Section: %s", section);
    printf("Results:\n");
    printf("%d + %d = %d\n", num1, num2, num1 + num2);
    printf("%d - %d = %d\n", num1, num2, num1 - num2);
    printf("%d * %d = %d\n", num1, num2, num1 * num2);
    printf("%d / %d = %.2f\n", num1, num2, division);

return 0;
}