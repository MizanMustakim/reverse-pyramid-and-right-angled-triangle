#include <stdio.h>
#include <math.h>
int iterated_value (int);
int main()
{
    int data;
    iterated_value(data);
    return 0;
}
int iterated_value(int final_value)
{
    int iteration, initial, iterated_line, number = 9, space, square_part, number_series;
    for (initial = 1; initial <= number; initial++)
    {
        printf("  %d ", initial);
    }
    printf("\n--------------------------------------\n");

    for (iteration = 1; iteration <= number; iteration++)
    {
        for (space = 2; space <= iteration ; space++)
        {
            printf("    ");
        }
        for(iterated_line = iteration, number_series = 0; iterated_line <= number, number_series <= number - iteration ; iterated_line++, number_series++)
        {
            square_part = pow(iteration, 2);
            iterated_line = square_part + number_series * iteration;
            printf(" %2d ", iterated_line);
        }
        printf("\n");
    }
}
