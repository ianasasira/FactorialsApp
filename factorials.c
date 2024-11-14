#include <stdio.h>

int factorial(unsigned int num, int num_break_array[]);
int num_break(unsigned int num, int num_break_array[]);
int return_next_no(unsigned int num, int num_break_array[], int j);
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
    for (int j = 1; j <= num; j += 2)
    {
        unsigned new_num = num_break_array[j] * return_next_no(num, num_break_array, j);

        printf("Array %d", new_num);
    }
}
int return_next_no(unsigned int num, int num_break_array[], int j)
{
    for (int i = j; i <= num; i++)
    {
        return num_break_array[j + 1];
    }
}
