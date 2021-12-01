#include<stdio.h>  
 

int main()  

    {  

        float PA , R , T , SI ;  //Principle amount, Rate of interest, Duration in months, Simple interest

        printf("Enter the Principle Amount"); 

        scanf("%f\n", &PA);

        printf("Enter the Rate of Interest");

        scanf("%f\n", &R);

        printf("Enter the Duration in months");

        scanf("%f\n", &T);

        SI  = (PA*R*T)/100;  

        printf("\n\n Simple Interest is : %f", SI);  

        return (0);  

    }  