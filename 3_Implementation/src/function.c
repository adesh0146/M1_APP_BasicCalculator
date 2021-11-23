#include "header.h"
int sum(calculate *compute){
   int result=compute->value1+compute->value2;
   printf("%d + %d = %d\n",compute->value1,compute->value2,result);
   return result;
}
int substraction(calculate *compute){
    int result=(compute->value1)-(compute->value2);
    printf("%d - %d = %d\n",compute->value1,compute->value2,result);
    return result;
}
int multiplication(calculate *compute){
    int result=compute->value1*compute->value2;
     printf("%d * %d = %d\n",compute->value1,compute->value2,result);
     return result;}
int division(calculate *compute){
    if(compute->value2!=0){
    int result= compute->value1/compute->value2;
      printf(" quotient when %d / %d = %d\n",compute->value1,compute->value2,result);
      printf(" remainder when %d / %d = %d\n",compute->value1,compute->value2,compute->value1%compute->value2);
      return result;}
    else
      {
         printf("ERROR!! -- divisor can't be ZERO\n"); 
         printf("Try other operations\n");
         return -1;
      }  
}
int squareroot(trigonometric *tri){
   if(tri->value3 < 0)
    {printf("negative numbers don't have real square roots\n");
      return -1;}  
     float result=sqrt(tri->value3);
     printf("squareroot of %d = %.3f\n",tri->value3,result);
     return result;
}
int power(calculate *compute){
int result= pow(compute->value1,compute->value2);
 printf("%d ^%d = %d\n",compute->value1,compute->value2,result);
 return result;
}
int sine(trigonometric *tri){
float result= sin(tri->value3);
 return result;
}
int cosine(trigonometric *tri){
float result=cos(tri->value3);
 printf("cos %d = %.3f\n",tri->value3,result);
  return result;
}
int ttan(trigonometric *tri){
float result= tan(tri->value3);
 printf("tan %d = %.3f\n",tri->value3,result);
 return result;
}
int cosec(trigonometric *tri){
float result=1/sin(tri->value3);
 printf("cosec %d = %.3f\n",tri->value3,result);
 return result;
}
int sec(trigonometric *tri){
float result=1/cos(tri->value3);
 printf("sec %d = %.3f\n",tri->value3,result);
 return result;
}
int cot(trigonometric *tri){
float result= 1/tan(tri->value3);
 printf("cot %d = %.3f\n",tri->value3,result);
 return result;
}
int exponent(trigonometric *tri){
float result= exp(tri->value3);
 printf("e ^%d = %.3f\n",tri->value3,result);
 return result;
}
int factorial(trigonometric *tri){
  /* Return -1 for negative numbers */
  if(tri->value3 < 0)
    {printf("factorial for negative numbers not possible\n");
      return -1;}

  /* Return 1 for 0 */
  if(tri->value3 == 0)
   { return 1;}
    long long int fact=1;
    for (int i = 1; i <= tri->value3;i++) {
            fact *= i;
        }
 printf("%d!= %lld\n",tri->value3,fact);
 return fact;
}
int logbase10(trigonometric *tri){
if(tri->value3 <=0)
    {printf("Don't use zero and negative value for value\n");
      return -1;}
    float result=log10(tri->value3);
    printf("log %d = %.3f\n",tri->value3,result);
    return result;
    }