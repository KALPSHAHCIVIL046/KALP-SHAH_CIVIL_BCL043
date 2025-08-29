#include<stdio.h>
int main (){
 float p,q;
    printf("Enter two numbers: ");
    scanf("%f%f",&p,&q);
    printf("Add=%f\n",p+q);
    printf("Sub=%f\n",p-q);
    printf("Mul=%f\n",p*q);
    if(q!=0)
    printf("Div=%f\n",p/q);

    return 0 ;
    
}  
