#include <stdio.h>
int main(int argc, char const *argv[])
{
    // int n=11;
    int a[11] = {1, 2, 3, 4, 5, 6, 7, 9, 10, 11, 12};
    int sum = 0, array_size = 11, sum_of_natural_nos, n = 12;

    sum_of_natural_nos = n * (n + 1) / 2;
    for (int i = 0; i < array_size; i++)
    {
        sum += a[i];
    }
    int missing_no = sum_of_natural_nos - sum;
    printf("%d", missing_no);
    return 0;
}
