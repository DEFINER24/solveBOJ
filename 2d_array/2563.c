#include <stdio.h>

int main(){
    
    int base[100][100] = {0,};
    int n, x,y, output=0;

    scanf("%d", &n);

    while(n){
        scanf("%d %d", &x, &y);
        
        for(int i=y; i<y+10; i++){
            for(int j=x; j<x+10; j++){
                if(base[i][j]==0) output++;
                base[i][j] = 1;
            }
        }
        n--;
    }

    printf("%d",output);

    return 0;
}