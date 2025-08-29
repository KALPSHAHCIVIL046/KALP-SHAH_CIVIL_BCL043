  #include<stdio.h>
int main (){

    int aa,bb,temp;
    printf("Enter two values: ");
    scanf("%d %d",&aa,&bb);
    temp=aa;
    aa=bb;
    bb=temp;
    printf("After swap: %d %d\n",aa,bb);



    
    return 0 ;
    
}  
    
