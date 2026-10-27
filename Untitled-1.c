//Assignment-2
//deletion of an element in an array
#include<stdio.h>
main(){
    int LA[]={1,3,5,7,8};
    int k=3,n=5;
    int i, j;
    printf("the orignal array element are:\n" );
    for(i=0;i<n;i++){
        printf("LA[%d]=%d\n",i,LA[i]);

    }
    j=k;
    while(j<n){
        LA[J-1]=LA[j];
        j=j=1;
    }
    n=n-1;
    printf("the array elent after deletion:\n");
    for(i=0;i<n;i++){
        printf("LA[%d]=%d\n",i,LA[i]);
    }
}