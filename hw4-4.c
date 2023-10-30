#include <stdio.h>
#include <stdlib.h>

int main(){

    int n;

    scanf("%d", &n);

    int a[n][n];

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &a[i][j]);
        }
    }

    for(int k=0; k<n; k++){
        int max_value = a[0][0];
        int max_i = 0;
        int max_j = 0;

        
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(a[i][j] > max_value){
                    max_value = a[i][j];
                    max_i = i;
                    max_j = j;
                }
            }
        }
        printf("boy %d pair with girl %d\n", max_i+1, max_j+1);

        
        for(int i=0; i<n; i++){
            a[max_i][i] = 0;
            a[i][max_j] = 0;
        }

        
        //for(int i=0; i<n; i++){
            //for(int j=0; j<n; j++){
                //printf("%d ", a[i][j]);
            //}
            //printf("\n");
        //}
    }

    return 0;
}
