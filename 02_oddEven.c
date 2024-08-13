#include<stdio.h>


int main(){
int num1,num2;

printf("Enter Number 1 : ");
scanf("%d", &num1);

printf("Enter Number 2 : ");
scanf("%d", &num2);

int add = num1+num2;
int sub = num1-num2;
int multiply = num1*num2;
int divide = num1/num2;
int modu = num1%num2;

printf(" YOUR SUM :%d\n",add);
printf(" YOUR Subtracted value :%d\n",sub);
printf(" YOUR multiplied :%d\n",multiply);
printf(" YOUR division :%d\n", num1/ num2);
printf(" YOUR Modulus :%d\n",num1%num2);




return 0;



}