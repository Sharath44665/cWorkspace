#include <stdio.h>
#include <stdlib.h>
struct my_array
{
    int a[10];
    int array_length, array_size;
};

struct my_array result_arr = {{}, 0, 10};

void difference_array(struct my_array x, struct my_array y)
{
    int i = 0, j = 0, k = 0;
    while (i < x.array_length && j < y.array_length)
    {

        if (x.a[i] < y.a[j])
        {
            result_arr.a[k] = x.a[i];
            k += 1;
            result_arr.array_length = k;
            i += 1;
            j += 1;
        }
        else if (x.a[i] == y.a[j])
        {
            i += 1;
            j += 1;
        }
        else
        {
            j += 1;
        }
    }
    while (i < x.array_length)
    {
        if (x.a[i] == y.a[y.array_length - 1])
        {
            i += 1;
        }
        else
        {
            result_arr.a[k] = x.a[i];
            i += 1;
            k += 1;
            result_arr.array_length = k;
        }
    }
}

void show()
{
    printf("\n");
    for (int i = 0; i < result_arr.array_length; i++)
    {
        printf("%d ", result_arr.a[i]);
    }
}
int main(int argc, char const *argv[])
{
    // following code is for sorted array
    // i m not interested to do unsorted array because its time and space consuming

    struct my_array p = {{3, 7, 11, 15, 17}, 5, 10};
    struct my_array q = {{2, 6, 7, 10, 15}, 5, 10};

    difference_array(p, q);
    show();
    return 0;
}
