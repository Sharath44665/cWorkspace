// following code will find the duplicates and counts the duplicates of 
// sorted array using hashing technique


#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a[]={3,6,8,8,10,12,15,15,15,20};
    int x[20]={};
    int size_a=10;
    int size_x=20;

    for(int i=0;i<size_a;i++){
        x[a[i]] +=1;

    }
    for(int i=0;i<size_x;i++){
        if (x[i]>1){
            printf("\n%d is repeated %d times", i,x[i]);
        }
    }

    return 0;
}
