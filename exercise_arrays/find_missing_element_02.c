#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a[11]={6, 7, 8, 9, 10, 11,  13, 14, 15, 16, 17};

    // for(int i=6;i<=17;i++){
    //     printf("%d, ",i);
    // }

    int difference=a[0]-0;

    for(int i=0;i<11;i++){
        if((a[i]-i)!=difference){
            printf("Missing value: %d ",a[i]-1);
            break;
        }
    }

    
    // int count=a[0];
    // for(int i=0;i<11;i++){
    //     if(a[i]!= count){
    //         printf("missing value: %d",count);
    //         break;
    //     }
    //     count+=1;
    // }
    return 0;
}
