
#include <stdio.h>
#include<string.h>

int main()
{
    int A;
    int a, b, c, fact = 1,odd=0,n,even=0,i=0;
    int N[5]={10,20,30,40,50};
    char str[100];
    char str1[]="hello";
    int matrix[2][3]={{1,2,3},{4,5,6}};
    int len;                
    float F, C;
    printf("The value of a is: ");
    scanf("%d", &a);
    printf("The value of b is: ");
    scanf("%d", &b);
    printf("The value of c is: ");
    scanf("%d", &c);
    printf("The value of CHOICE is: ");
    scanf("%d", &A);

    switch (A)
    {
    case  0:
        printf("FROM HERE MENU BASED OPERATION ARE BEEN EXECUTED");
        break;
    case 1:
        printf("The sum of two values is a+b = %d\n", a + b);
        printf("The difference of two values is a-b = %d\n", a - b);
        printf("The product of two values is a*b = %d\n", a * b);
        printf("The division of two values is a/b = %.2f\n",(float)a / b);
        printf("the modulus of two values is a%%b=%d\n",a%b);
        break;
      
    case 2:
        if (a > b && a > c)
        {
            printf("a is greater\n");
        }
        else if (b > a && b > c)
        {
            printf("b is greater\n");
        }
        else
        {
            printf("c is greater\n");
        }
        break;
    case 3:
        for (int d = 1; d <= c; d++)
        {
            fact = fact * d;
        }
        printf("The factorial of %d is %d\n", c, fact);
        break;
    case 4:
        printf("AND: a&&b = %d\n", a && b);
        printf("OR: a||b = %d\n", a || b);
        printf("NOT: !a = %d, !b = %d\n", !a, !b);
        break;
    case 5:
        printf("The average of three values = %.2f\n",
               (a + b + c) / 3.0);
        break;
    case 6:
        while (a <= c)
        {
            printf("HELLO WORLD\n");
            a++;
        }
        break;
    case 7:
        for (int i = 0; i < c; i++)
        {
            printf("This code runs using a FOR loop.\n");
        }
        break;
    case 8:
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &F);
        C = (F - 32) * 5 / 9;
        printf("Fahrenheit to Celsius = %.2f C\n", C);
        break;
    case 9:
        printf("Enter temperature in Celsius: ");
        scanf("%f", &C);

        F = (C * 9 / 5) + 32;
        printf("Celsius to Fahrenheit = %.2f F\n", F);
        break;
    case 10:
        printf("BIT AND:a&b=%d\n",a&b);
        printf("BIT OR:a|b=%d\n",a|b);
        printf("BIT XOR:a^b=%d\n",a^b);
        printf("BIT FIRST COMPLEMENT:~a=%d\n,~b=%d\n",~a,~b);
        printf("BIT RIGHT SHIFT:a>>b=%d\n",a>>b);
        printf("BIT LEFT SHIFT:a<<b=%d\n",a<<b);
        break;
    case 11:
        printf("ONE DIMENSIONAL ARRAY");
        for (int u=0;u<5;u++)
        {
            printf("\nINDEX OF THIS ARRAY IS %d=%d\n",u,N[u]);
        }
          
        break;
    case 12:
        printf("ENTER THE MAX NUMBER");
        scanf("%d",&n);
        for(int i=0;i<=n;i++)
        {
           if(i%2==0)
           {
             even+=i;
           } 
           else
           {
            odd+=i;
           }
    
        }
        printf("the sum of even is %d:%d\n",n,even);
        printf("the sum of odd is %d:%d",n,odd);
        break;
    case 13:
        for(int N=0;N<=5;N++)
        {
            printf("\n HELLO WORLD ");
        }
        break;
    case 14:
      len=strlen(str1);
      strrev(str1);
      printf("%s\n",str1);
      printf("%d\n",len);
      strrev(str1);

      break;
    case 15:
      printf("2D MATRIX \n");
      for(int p=0;p<2;p++)
      {
        for(int q=0;q<3;q++)
        {
            printf("%d",matrix[p][q]);
        }
        printf("\n");
      }
      break; 
     
    default:
      printf("AN INVALID CHOICE HAS BEEN MADE BY THE USER PLEASE ENTER THE CORRECT CHOICE FROM THE GIVEN CHOICE AND TRY AGAIN");
      break;
    }  
    return 0;
}

