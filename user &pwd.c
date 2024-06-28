#include<string.h>

int main() {
    // Write C code here
    int i;
    char u[50],p[50];
    printf("enter user name\t");
    scanf("%s", &u);
    if (strcmp(u,"user")!=0){
        printf("account blocked");
    }
    else{
        printf("enter password\t");
        for (i=2; i>=0; i--){
            scanf("%s",&p);
            if (strcmp(p,"skm")!=0){
                printf("try again %d times \n",i);
            }
        else{
                printf("login");
            }
        }
    }

    return 0;
}