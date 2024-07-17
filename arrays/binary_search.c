

// following code will use loop for binary serach
#include<stdio.h>
#include<stdlib.h>
struct array
{
    int a[20];
    int length,size;

};
void show(struct array ar){
    printf("\n");
    for(int i=0;i<ar.length;i++){
        printf("%d ",ar.a[i]);
    }
}

int binary_search(struct array ar, int search_item){
    int low=0,height=ar.length-1,mid=0;

    while (low<=height)
    {
        mid=(low+height)/2;
        if (search_item < ar.a[mid]){
            height=mid-1;
        }
        else if (search_item >ar.a[mid])
        {
            low=mid+1;
        }
        if (ar.a[mid]==search_item){
            return mid;
        }
       
    }
    if (ar.a[mid]!=search_item){
        return -1;
    }
}

// recursive call for binary_search
int binary_search_recursive(struct array ar, int low, int high, int search_item){
    int mid=0;
    if (low<= high){
        mid=(low+high)/2;
        if (ar.a[mid]==search_item){
            return mid;
        }
        else if(search_item< ar.a[mid]){
            high=mid-1;
            // binary_search()
            binary_search_recursive(ar,low, high,search_item);
        }
        else{
            low=mid+1;
            binary_search_recursive(ar,low,high,search_item);
        }
    }
    else{
        return -1;
    }
    
}

void main(){
    struct array ar={{4,8,10,15,18,21,24,27,29,33,34,37,39,41,43},15,20};
    show(ar);
    int search_item=24, value=0;
    // value=binary_search(ar,search_item);
    value=binary_search_recursive(ar,0,15,search_item);
    if (value==-1){
        printf("\nNOt %d found",search_item);
    }
    else{
        printf("\n%d Found @ position: %d",search_item,value);
    }


}