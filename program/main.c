#include<stdio.h>
#include<stdlib.h>

int main(void){

	int i, k, j;


	scanf ("%d", &i);
    i = 4 * i;
    int a[i];
    for ( k=0; k<i; k++){
        scanf ("%d", &a[k]);
    }

    for ( j=0; j<i; j++){
        printf ("%d ", a[j]);
        if ( j % 4 == 3){
            if (a[j]-a[j-1] == a[j-1]-a[j-2]){
                printf ("%d\n", 2*a[j]-a[j-1]);
            }else if (a[j]/a[j-1] == a[j-1]/a[j-2]){
                printf ("%d\n", a[j]*a[j]/a[j-1]);
            }

        }
    }


	return 0;
}
