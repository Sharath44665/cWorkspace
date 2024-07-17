#include<stdio.h>

void main(int argc, char const *argv[])
{
    // for(int i=6;i<=19;i++){
    //     printf("%d, ",i);
    // }
    // return 0;

    int a[11]={6, 7, 8,  10, 11, 12,  15, 16, 17, 18, 19};
    int missing_difference;
    int difference=a[0]-0;

    for(int i=0;i<11;i++){
        if((a[i]-i) !=difference){ 
            
            while(difference < (a[i]-i)){ 
                missing_difference=(a[i]-i) -difference; 
                printf("%d ",a[i]-missing_difference);
                difference+=1; 
            }

        }
    }


    /*
    [7, 11, 18, 19, 6, 10, 8, 15, 17, 12, 16]


** Process exited - Return Code: 0 **
Press Enter to exit terminal
    */

    
}
