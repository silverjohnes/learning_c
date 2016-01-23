/*
 
 
#include <stdio.h>

int main() {
    
    
    int Numbers[] = { 1, 3, 0, 11, 0 };
    int OverallSum=0,ZerosCounter,MaxValue=0,a;
    int n=sizeof(Numbers)/sizeof(*Numbers); // Откуда взялось _*_Numbers?

    
    for (a=0;a<n;a++){
    OverallSum+=Numbers[a];
    if (Numbers[a]==0) ZerosCounter++;
    if (Numbers[a]>MaxValue) MaxValue=Numbers[a];
    }
        
    
    printf("The SUM of entered values is:  %d\n",OverallSum);
    printf("The number of zeroes is:       %d\n",ZerosCounter);
    printf("The maximum value was:         %d\n\n\n",MaxValue);
        
        
    
    return 0;
}

*/