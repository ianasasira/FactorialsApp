#include <stdio.h>

int factorial(unsigned int num, int num_break_array[]);
int num_break(unsigned int num, int num_break_array[]);
int main()
{
    // program to calculate the factorial of a number

    unsigned int num;
    int num_break_array[num];
    printf("Dear User Enter a Number: ");
    scanf("%d", &num);

    factorial(num, num_break_array);
    return 0;
}

int factorial(unsigned int num, int num_break_array[])
{
    // num = num * num_break(num);
    //  printf("%d", num);
    num_break(num, num_break_array);
}
int num_break(unsigned int num, int num_break_array[])
{

    for (int i = 1; i <= num; i++)
    {
        num_break_array[i] = i;
    }
    for (int i = 1; i <= num; i++)
    {
        unsigned new_num = num_break_array[i] * num_break_array[i + 1];
        printf("Array %d", num_break_array[i]);
    }
}
