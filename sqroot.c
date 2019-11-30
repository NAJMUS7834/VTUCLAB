/******************************************************************************

http://getwayssolution.com/

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
   float a,b,c,real,imaginary,determinant;
   printf("Enter The Coefficient a,b,c of Quadratic Equation");
   scanf("%f %f %f",&a,&b,&c);
   if(a==0)
   {
       printf("Invalid Quadratic Equation\n");
   }
   else
   {
       determinant=b*b-4*a*c;
       if(determinant==0)
       {
           printf("Roots are real and equal = %f",-b/2*a*c);
       }
       else if(determinant>0)
       {
           printf("Roots real and distinct root1=%f \t root2=%f\n",-b+sqrt(abs(determinant))/2*a*c,-b-sqrt(abs(determinant))/2*a*c);
       }
       else
       {
           real=-b/2*a*c;
           imaginary=sqrt(abs(determinant))/2*a*c;
            printf("Roots imaginary\n real part=%f \n imaginary part=(%f)i\n",real,imaginary);
       }
   }

    return 0;
}
