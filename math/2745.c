#include <stdio.h>
#include <math.h>
#include <string.h>
int main(){

    int b,j=0;
    int afternum;
    long long int output=0;
    char n[100];

    scanf("%s %d", &n, &b);

    int i = strlen(n)-1;

    while(i>-1){

        if((int)n[i]>64){
            output += (n[i] - 55) * pow(b,j);
        }
        else{
            output += (n[i] - 48) * pow(b,j);
        }
        
        i--, j++;
    }

    printf("%lld",output);

    return 0;
}