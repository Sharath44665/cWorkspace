#include <stdio.h>
#include <stdlib.h>

struct array
{
    int a[10];
    int array_length, array_size;
};

struct array result = {{}, 0, 20};

void union_array(struct array x, struct array y)
{

    int flag = 0;
    for (int i = 0; i < x.array_length; i++)
    {
        result.a[i] = x.a[i];
        result.array_length += 1;
    }

    for (int j = 0; j < y.array_length; j++)
    {
        for (int k = 0; k < result.array_length; k++)
        {
            if (y.a[j] == result.a[k])
            {
                flag = 1;
                break;
            }
        }
        if (flag != 1)
        {
            result.a[result.array_length] = y.a[j];
            result.array_length += 1;
        }
        flag = 0;
    }
}

void show()
{
    printf("\n");
    for (int i = 0; i < result.array_length; i++)
    {
        printf("%d ", result.a[i]);
    }

}

void union_sorted_array(struct array x, struct array y)
{
    result.array_length = 0;
    int k = 0, i = 0, j = 0;

    while (i < x.array_length && j < y.array_length)
    {
        
    
        if (x.a[i] == y.a[j])
        {
            result.a[k] = x.a[i];
            i = i + 1;
            j = j + 1;
            k = k + 1;
            result.array_length = k;
            // break;
        }
        else if (x.a[i] < y.a[j])
        {
            // printf("whats wrong next");
            result.a[k] = x.a[i];
            i = i + 1;
            k = k + 1;
            result.array_length = k;
            // break;
        }
        else
        {
            result.a[k] = y.a[j];
            j += 1;
            k += 1;
            result.array_length = k;
            // break;
        }
    }
   while (i< x.array_length){
       result.array_length=k+1;
       result.a[k]=x.a[i];
       i++;
   }

   while(j<y.array_length){
       result.array_length=k+1;
       result.a[k]=y.a[j];
       j++;
   }
    // result.array_length = k + 1;
}
int main(int argc, char const *argv[])
{
    // struct array x ={{3,5,10,4,6}, 5, 10};
    // struct array y ={{12,4,7,2,5}, 5, 10};

    // union_array(x,y);
    // show();

    struct array sort_x = {{3, 4, 5, 6, 10}, 5, 10};
    struct array sort_y = {{2, 4, 5, 7, 12}, 5, 10};

    union_sorted_array(sort_x, sort_y);
    show();

    return 0;
}
