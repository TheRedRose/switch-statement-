#include<stdio.h>
#include<conio.h>
main ()
{
    int choice,n;
    printf("\nEnter any number:\n");
    scanf("%d",&n);
    printf("choice is as follows:\n\n");
    printf("1.To find square of the number\n");
    printf("2.To find square-root -_- of the number\n");
    printf("3.To find cube of the number\n");
    printf("4.To find cube-root |-_-| of the number\n\n");
    printf("\nEnter your choice:\n");
    scanf("%d",&choice);
    switch (choice)
   {
     case 1:printf("The square of the number is %d\n",n*n);
            break;
     case 2:printf("The square-root -_- of the number is %f\n",sqrt(n));
            break;
     case 4:printf("The cube-root |-_-| of the given number is %f",cbrt(n));
            break;
     case 3:printf("The cube of the given number is %d",n*n*n);
            break;
     default:printf("The number you had given is %d",n);
            break;
   }
return 0;
}
