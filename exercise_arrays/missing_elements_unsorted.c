/*
we need to find missing element(s) from unsorted array
*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a[11]={3,7,4,9,12,6,1,11,2,10};
    int h[13]={};
    for (int i = 0; i < 10; i++)
    {
        h[a[i]]=1;
    }
    printf("missing elements are: ");
    for(int i=1;i<13;i++){
        if(h[i]==0){
            printf("%d ",i);
        }
    }
    

    return 0;
}
