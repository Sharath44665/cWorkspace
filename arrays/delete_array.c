#include<stdio.h>
#include<stdlib.h>

struct array{
    int a[20];
    int length,size;
};

void insert(struct array *arr, int location, int value ){
    if(location>=arr->length || location >=arr->size){
        printf("\nSorry cannot insert, memory is full or length is not valid");
    }
    else{
        int i=arr->length-1;
        arr->length+=1;
        
        while (location<=i)
        {
            arr->a[i+1]=arr->a[i];
            i-=1;
        }
        arr->a[location]=value;
    }

}

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

void delete(struct array *arr, int location){
    if (location>= arr->length || location>arr->size){
        printf("\nCannot delete. location is greater than length or size");
    }
    else{
        while (location<arr->length)
        {
            arr->a[location]=arr->a[location+1];
            location+=1;
        }
        arr->length-=1;
    }
}
int main(int argc, char const *argv[])
{
    struct array arr={{10,20,30,40,50},5,20};
    
    show(arr);

    insert(&arr,4,110);
    show(arr);

    delete(&arr,4);
    show(arr);

    // delete(&arr,11);
    // show(arr);

    return 0;
}
