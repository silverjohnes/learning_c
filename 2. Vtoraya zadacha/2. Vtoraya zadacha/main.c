#include <stdio.h>


int main() {
    printf("Вводите неотрицательные числа. Отрицательное прервет ввод.\n");
    
    
    int a,Count=0,Last=-1,NoFourth=0;
    int OverallSum=0,ZerosCounter=0,MaxValue=0,MinValue=0;
        
    do {
    
        printf("> ");
        scanf("%d",&a);
		
		if (a > -1) OverallSum+=a;	// Здесь в (a>-1) корректируется выход из программы по отрицательному
		if (a == 0) ZerosCounter++;
		// Ищем максимум
		if (a > MaxValue) MaxValue=a;
		// Ищем мнимум
		if (a > -1 && a <= MinValue) MinValue=a;
		else if (MinValue == 0) { MinValue=a; }
		//  Уникальные при условии возрастания
		if (a >= 0) {
		if (a < Last)
		{
			Last=a; NoFourth++;
		}
		else if (a == Last) Last=a;
		else
			{
				Last=a; Count++;
			}
		}
		
		}
    while(a>=0);
	
	//Коррекция логических ошибок:
	if (MinValue < 0) MinValue = 0;
	if (MaxValue == 0) NoFourth = 0;
	
	printf("\nСумма введенных чисел:		%d\n",OverallSum);
	printf("Введено нулей:				%d\n",ZerosCounter);
	printf("МИНимум:						%d\n",MinValue);
	printf("MАКСимум:					%d\n",MaxValue);
if (NoFourth == 0) {
	printf("Уникальных возрастающих:		%d\n",Count);
}
else {
	printf("Подсчет уникальных чисел не\nпроизводился, так как после-\nдовательность не была строго\nвозрастающей");
}
    
        
        //
    

 
    
    printf("\n\n");
    return 0;
}