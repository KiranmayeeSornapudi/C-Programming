#include<stdio.h>
int main()
 {
    int n;
    //printf("Enter Number of Events:");
    scanf("%d", &n);
    int p = 0;
    int c = 0;
    int events[n];
    //printf("Enter the events:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&events[i]);
    }
    for (int i = 0; i < n; i++) 
    {
        if (events[i] == -1)
        {
            if (p > 0) 
            {
                p--;
            } 
            else 
            {
                c++;
            }
        } 
        else
        {
            p += events[i];
        }
    }
    //printf("Number of Untreated Crimes:");
    printf("%d\n", c);
    
    return 0;
}