#include<stdio.h>

struct array{
    int a[20];
    int size,len;
};
void show(struct array arr){
    printf("\nprinting all elements: ");
    for(int i=0;i<arr.len;i++){
        printf("%d ",arr.a[i]);
    }
}
void append(struct array *arr){
    int value;
    if(arr->len==arr->size){
        printf("\n\narray is full, cannot insert!");
    }
    else{
        printf("\ninsert data: ");
        scanf("%d",&value);
        arr->a[arr->len]=value;
        arr->len=arr->len+1;
        printf("\ninserted!");

    }
}

void insert(int location, struct array *arr){
    if(location>=arr->size || location>arr->len){
        printf("\n\nLocation or size not found :(");
    }
    else{
        int value;
        printf("\nenter data: ");
        scanf("%d",&value);
        for(int i=arr->len-1; i>=location; i--){
            arr->a[i+1]=arr->a[i];
        }
        arr->a[location]=value;
        arr->len=arr->len+1;
    }
}
void main(){
    struct array arr={{10,20,30,40,50},20,5};
    show(arr);

    append(&arr);
    show(arr);

    insert(1,&arr);
    show(arr);
}
