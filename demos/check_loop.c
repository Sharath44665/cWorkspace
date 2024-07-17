#include <stdio.h>
int main(int argc, char const *argv[])
{
    
    for(int i=0,j=10;i<=10,j>=0;i++,j--){
        printf("i= %d,j= %d \n",i,j);
    }
    int i=0,j=100,k=200;
    while(i<5 && j<110 && k<210){
        printf("%d %d %d",i,j,k);
        i++;
        j++;
        k++;
        printf("\n");
    }
    return 0;
}
