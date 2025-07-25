#include<stdio.h>
#include<conio.h>
void main()
{
    
     int num = 3724;
     int sum = 0;
     while (num>0)
    {
        
        int rem = num % 10; 
        sum+=rem;
        num=num/10;
        
    }
    printf("sum of all digitas are : %d", sum);
    
    
    getch();
}