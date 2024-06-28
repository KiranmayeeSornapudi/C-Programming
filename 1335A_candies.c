#include<stdio.h>
int main(){
    int t,i,x;
    scanf("%d ", &t);
    for (i=0;i<t;i++){
        scanf("%d",&x);
        if (x<2 || x==2){
            printf("0 \n");
        }
        else if(x%2==0){
            printf("%d \n",(x/2)-1);
        }
        else{
            printf("%d \n",x/2);
        }
    }
    
    return 0;
}