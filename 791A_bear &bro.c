#include <stdio.h>

int main() {
    // Write C code here
    int a,b;
    int c=0;
    scanf("%d %d",&a,&b);
    while(a<=b){
        a=a*3;
        b=b*2;
        c++;
    }
    printf("%d",c);

    return 0;
}