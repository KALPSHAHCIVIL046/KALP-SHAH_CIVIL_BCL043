 #include<stdio.h>
int main (){
   int s1,s2,s3,total;
    float avg;
    printf("Enter 3 subjects: ");
    scanf("%d %d %d",&s1,&s2,&s3);
    total=s1+s2+s3;
    avg=total/3.0;
    printf("Total=%d Average=%.2f\n",total,avg);



    
    return 0 ;
    
}  
    
