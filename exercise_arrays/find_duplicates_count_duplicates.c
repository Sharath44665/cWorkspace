#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a[]={3,6,8,8,8,8,10,12,15,15,15,20};
    int n=12;
    int j=0;
    // int repeated=0;
    // following returns the repeated items in a list
    /*
    for(int i=0;i<n-1;i++){
        
        if(a[i]==a[i+1] && a[i]!=repeated){
            printf("%d ", a[i]);
            repeated=a[i];
        }
    }
    */

   for(int i=0;i<n-1;i++){
       if(a[i]==a[i+1]){
           j=i+1;
           while (a[j]==a[i])
           {
               j+=1;
           }
        // here we are calculating the difference of indices,
        // which gives us repeated counts
           printf("%d is repeated %d times\n",a[i],(j-i) );
           i=j;
       }
   }

    return 0;
}
