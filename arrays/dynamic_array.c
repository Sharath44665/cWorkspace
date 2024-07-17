#include<stdio.h>
#include<stdlib.h>

struct array
{
    int *a;
    int size,len;
};

void show(struct array arr){
    printf("\nprinting all elements: ");
    for(int i=0;i<=arr.len;i++){
        printf("%d ",arr.a[i]);
    }
}
void main(){
    struct array arr;
    int max_size,length,i;
    printf("Enter max size of array\n");
    scanf("%d",&max_size);
    arr.size=max_size;

    arr.a=(int*)malloc(max_size*sizeof(int));

    printf("\nHow many elements do you wish to fill? ");
    scanf("%d",&length);
    arr.len=length-1;
    
    printf("\n Enter all elements: ");
    for(i=0;i<=arr.len;i++){
        scanf("%d",&arr.a[i]);
    }
    show(arr);
}
