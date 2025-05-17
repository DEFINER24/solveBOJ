#include <stdio.h>

int main(){

    int n, count, times;
    long long output=0;

    scanf("%d", &n);

    while(n){

        scanf("%d %d", &count, &times);

        
        output+=count*times;
    

        n--;
    }

    printf("%d", output);

    return 0;
}