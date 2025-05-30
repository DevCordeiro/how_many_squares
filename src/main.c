#include <stdio.h>
#include "squares.h"

int main()
{
    int input_number;

    printf("Enter with size of the square (n): ");
    if (scanf("%d", &input_number) != 1 || input_number <= 0)
    {
        printf("Invalid input, Please enter a positive integer > 0. \n");
        return 1;
    }

    int total = count_squares(input_number);
    printf("You can see %d square(s) in a %d x %d. \n", total, input_number, input_number);

    return 0;
}