#include<stdio.h>
#include<conio.h>
void main()
{
    
    float pi = 3.14;
    int radius;
    
    printf("enter radius:");
    scanf ("%d", &radius);
    
    float ans = pi*radius*radius;
    printf("area of circul is : %f", ans);
    
    getch();
}