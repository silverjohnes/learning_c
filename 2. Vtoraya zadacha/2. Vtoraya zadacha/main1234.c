/*

 #include <stdio.h>
 
 int main() {
 printf("Vvodite polozhitelnie 4isla. Dlya zaversheniya vvoda vvedite otricatelnoe 4islo (naprimer -1).\n");
 
 
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
	
	printf("SUM of the entered values:	%d\n",OverallSum);
	printf("0s entered:					%d\n",ZerosCounter);
	printf("MINimum value was:			%d\n",MinValue);
	printf("MAXimum value was:			%d\n",MaxValue);
 if (NoFourth == 0) {
	printf("Unique ascended numbers:	%d\n",Count);
 }
 else {
	printf("Unique numbers' count is disabled if ascending was not strict.");
 }
 
 
 
 
 
 
 
 printf("\n\n");
 return 0;
 }

*/