#include <stdio.h>  
#include <stdlib.h>  
  
int main()  
{  
    int a, b, c = -1;  
    double PI = 0, d;  
  
    scanf ("%d", &a);  
  
    for (b=1; b<=a; b++){  
        if (b % 2 == 1){  
            d = (c + 2 * b);  
        }else{  
            d = - (c + 2 * b);  
        }  
  
        PI = PI + 4 / d;  
    }  
    printf ("%.9lf\n", PI);  
  
    return 0;  
}  
