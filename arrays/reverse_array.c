#include<stdio.h>
#include<stdlib.h>

struct array
{
    int a[20];
    int array_length,array_size;
};

void show(struct array ar){
    printf("\n");
    for(int i=0;i<ar.array_length;i++){
        printf("%d ",ar.a[i]);
    }
}

void swap(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}


void reverse_array(struct array *ar){
    int i,j;
    for(i=0,j=ar->array_length-1;i<=j;i++,j--){
        swap(&ar->a[i],&ar->a[j]);
    }
}

void left_shift_array(struct array *ar){
    ar->a[0]=0;
    for(int i=0;i<ar->array_length;i++){
        ar->a[i]=ar->a[i+1];
    }
    // free(ar->a[ar->array_length]);
    // ar->array_length=ar->array_length-1;
}

void right_shift_array(struct array *ar){
    ar->a[ar->array_length-1]=0;
    for(int i=ar->array_length;i>0;i--){
        // if(ar->a[i]==0){
        //     ar->a[0]=0;
        //     // break;
        // }
        ar->a[i]=ar->a[i-1];
    }
    ar->a[0]=0;
}

int main(int argc, char const *argv[])
{
    /* code */
    struct array a ={{4,12,9,15,6,10,7,2,3,8},10,20};
    reverse_array(&a);
    show(a);

    left_shift_array(&a);
    show(a);
    left_shift_array(&a);
    show(a);

    right_shift_array(&a);
    show(a);

    return 0;
}
