#include <stdio.h>

int main(){

    int input, b, i = 0;
    char output[100];

    scanf("%d %d", &input, &b);

    while(input>0){
        if(output[i] = input % b < 10)
            output[i] = input % b + 48;
        else
            output[i] = input % b - 10 + 'A';
        
        input /= b;
        i++;
    }
    
    for(i=i-1;i>=0;i--){
        
        printf("%c", output[i]);
    }

    return 0;
}