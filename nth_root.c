#include<stdio.h>
#include<math.h>


int main()
{
    double b= 0.0;
    double a=0.001;
    double r=0;
    printf("Type the number and root value (e.g 2 for square root)\n");
    scanf ("%lf %lf", &b,&r);
    while(pow (a,r)<(b + 0.05)){
        a += 0.001 ;
    }
    printf ("The %f root of %f is = %f\n", r,b,a );

    return 0;
}

