#include<stdio.h>  
 

int main()  

    {  

        float PA , Rate , Time , SI ;  //Principle amount, Rate of interest, Duration in months, Simple interest

        printf("Enter the Principle Amount"); 

        scanf("%f\n", &PA);

        printf("Enter the Rate of Interest");

        scanf("%f\n", &Rate);

        printf("Enter the Duration in months");

        scanf("%f\n", &Time);

        SI  = (PA*Rate*Time)/100;  

        printf("\n\n Simple Interest is : %f", SI);  

        return (0);  

    }  