#include<stdio.h>
#include<stdlib.h>
/*
this program only does linear search with improvements
*/
struct array{
    int a[20];
    int length,size;
};



void show(struct array arr){
    printf("\nShowing elemnts: ");
    int i=0;
    while (i<arr.length)
    {
        printf("%d ",arr.a[i]);
        i+=1;
    }
    printf("\n\n");
}
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int linear_search(struct array *ar, int search_item){
    for (int i = 0; i < ar->length; i++)
    {
        if ( ar->a[i]==search_item ){
            // swap(&(ar->a[i]),&(ar->a[i-1]));
            swap(&(ar->a[i]),&(ar->a[0])); //move to head or front
            return i;
        }
        
    }
    return -1;
}
int main(int argc, char const *argv[])
{
    struct array ar={{10,7,3,5,8},5,20};
    show(ar);
    printf("%d",linear_search(&ar,3));
    return 0;
}
