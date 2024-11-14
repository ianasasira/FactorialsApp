#include <stdio.h>

int factorial(unsigned int num, int num_break_array[], int new_num);
int num_break(unsigned int num, int num_break_array[], int new_num);
int return_next_no(unsigned int num, int num_break_array[], int new_num);
int main()
{
    // program to calculate the factorial of a number

    unsigned int num;
    unsigned int new_num;
    int num_break_array[num];
    printf("Dear User Enter a Number: ");
    scanf("%d", &num);

    factorial(num, num_break_array, new_num);
    return 0;
}

int factorial(unsigned int num, int num_break_array[], int new_num)
{
    // num = num * num_break(num);
    //  printf("%d", num);
    num_break(num, num_break_array, new_num);
}
int num_break(unsigned int num, int num_break_array[], int new_num)
{

    for (int i = 1; i <= num; i++)
    {
        num_break_array[i] = i;
    }

    unsigned answer = return_next_no(num, num_break_array, new_num);

    printf("Array %d", answer);
    printf("Array %d", num);
}
int return_next_no(unsigned int num, int num_break_array[], int new_num)
{
    for (int i = 1; i <= 6; i += 2)
    {

        printf("%d \n", new_num = num_break_array[i] * num_break_array[i + 1]);
    }
}