#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,j,k=0;
    scanf("%d",&n);
    if(n>=1 && n<=50){
        int input[n];
        //printf("%d",n);
        for(int i=0;i<n;i++){
            scanf("%d",&input[n]);
            if(input[n]>1){
                for(j=2;j<input[n];j++){
                    if(input[n]%j==0){
                        k=0;
                        break;
                    }
                    else{
                    k=1;
                    }
                }
                if(k==0){
                    printf("NO ");
                }
                else if(k==1){
                    printf("YES ");

                }
            }
        }
    }
return 0;
}
