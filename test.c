#include <stdio.h>
int main() {
    int a,b = 1;
    
    printf("a를 입력하세요 : ");
    scanf("%d",&a);
    
    if (a%2 == 0) {
        for (int i = 0; i<a+1; i++) {
            b += i;
        }
        printf("%d",b);
    }
    
    else{
        for (int i = 0; i<a+1; i++) {
            b *= i;
        }
        printf("%d",b);
    }
    return 0;
}

// Q1. a에 4가 저장되었을때 출력값은?

// Q1. a에 5가 저장되었을때 출력값은?
