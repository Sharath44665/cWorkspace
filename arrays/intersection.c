#include<stdio.h>
#include<stdlib.h>

struct array_intersection
{
    int a[10];
    int array_length, array_size;
};


struct array_intersection result_array={{},0,10};

void intersection_demo(struct array_intersection p, struct array_intersection q){

    int k=0;
    for(int i=0;i<p.array_length;i++){
        for(int j=0;j<q.array_length;j++){
            if(p.a[i]==q.a[j]){
                result_array.a[k]=p.a[i];
                k+=1;
                result_array.array_length =k;
                break;
            }
        }
    }
}

void intersection_sort(struct array_intersection x, struct array_intersection y){

    int i,j,k;
    i=j=k=0;
    while (i<x.array_length && j<y.array_length)
    {
        if(x.a[i] ==y.a[j]){

            result_array.a[k]=x.a[i];
            
            k+=1;
            i+=1;
            j+=1;
            result_array.array_length=k;
        }
        else if(x.a[i]<y.a[j]){
            i+=1;
        }
        else{
            j+=1;
        }
    }
    while(i<x.array_length){
        if(y.a[j]==x.a[i]){
            result_array.a[k]=x.a[i];
            k+=1;
            result_array.array_length=k;
        }
        i+=1;
    }
    while(j<y.array_length){
        if(x.a[i]==y.a[j]){
            result_array.a[k]=x.a[j];
            k+=1;
            result_array.array_length=k;
        }
        j+=1;
    }
    
}

void show(){
    printf("\n");
    for(int i=0;i<result_array.array_length;i++){
        printf("%d ",result_array.a[i]);
    }
}

int main(int argc, char const *argv[])
{   
    // struct array_intersection a={{ 17,2,5,3,50},5,10};
    // struct array_intersection b={{ 8,2,3,1,5},5,10};

    // intersection_demo(a,b);
    // show();
    
    struct array_intersection a1={{2,5,6,8},4,10};
    struct array_intersection a2={{4,5,7,7,7,8},6,10};

    intersection_sort(a1,a2);
    show();
    return 0;
}

