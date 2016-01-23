/*

#include <stdio.h>

int main() {
    printf("Vvodite polozhitelnie 4isla. Dlya zaversheniya vvoda vvedite otricatelnoe 4islo (naprimer -1).\n");
    
    
    int a;
    int OverallSum=0,ZerosCounter=0,MaxValue,MinValue;
        
    do {
    
        printf("> ");
        scanf("%d",&a);
        if (a>0) OverallSum+=a;
        if (a==0) ZerosCounter++;
        if (a>MaxValue) MaxValue=a;
		if (a >= 0) MinValue=a;
		if (a<MinValue && a>=0) MinValue=a;
    
    }
    
    while(a>=0);


 printf("\n");
 printf("SUM of entered values was:	%d\n",OverallSum);
 printf("Number of 0's:				%d\n",ZerosCounter);
 printf("MINimum value was:			%d\n",MinValue);
 printf("MAXimum value was:			%d\n",MaxValue);

 
 
    
    printf("\n\n\n");
    return 0;
}


 
 */