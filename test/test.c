#include <stdio.h>
#include <math.h>
int main() {
    char a[3] = "Aa\0";

    char b[3];

    scanf("%s", b);

    for(int i=2;i>-1;i--){
        printf("%d ", b[i]);
    }
    
    
    return 0;
}

// Q1. a에 4가 저장되었을때 출력값은?

// Q1. a에 5가 저장되었을때 출력값은?
