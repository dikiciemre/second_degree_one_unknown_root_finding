//
//  main.c
//  ikinci_dereceden_bir_bilinmyenli_kok_bulma (second_degree_one_unknown_root_finding)
//
//  Created by Emre Dikici on 17.09.2023.
//

#include <stdio.h>
#include <math.h>


int main(int argc, const char * argv[]) {
    
          float root1, root2;
          int a,b,c,delta;
    
          printf("Welcome to the program that finds the root of a second degree equation with one unknown.\n\n");
     
          printf("\nPlease enter the coefficient of x^2 : ");
          scanf("%d",&a);
    
          printf("\nPlease enter the coefficient of x : ");
          scanf("%d",&b);
    
          printf("\nplease enter the coefficient of the constant value : ");
          scanf("%d",&c);
    
          printf("\nequation : %dx^2 + %dx + %d",a,b,c);
     
          delta = pow(b,2) - 4*a*c; // in this line ı calculated the delta .
     
          // ın this line ı calculated the roots
          root1 = (-b + sqrt(delta))/(2*a);
          root2 = (-b - sqrt(delta))/(2*a);
     
    //If the value of a is less than zero, there is no solution set
    if (delta < 0){
        printf("\nThere is no solution set.\n");
    }
    
    // If the value of delta is equal to zero, the solution set has a single element
    else if (delta == 0){
        printf("The equation has two equal roots.\n");
        printf ("Root 1 = Root 2 = %.2f",root1);
    }
    
    //If delta value is greater than zero, the solution set has two elements
    else
    {
        printf("\n\nRoots of the equation");
        printf("\n-----------------\n");
        printf("Root 1 = %.2f\n",root1);
        printf("Root 2 = %.2f\n",root2);
    }
    return 0;
}
