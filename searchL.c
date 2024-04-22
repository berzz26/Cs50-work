#include <stdio.h>
int main(void)
{
    int num[] = {1,200,500,300,50};
    int find = 3;

    for(int i = 0 ; i < 5; i ++){
       if (num[i] == find)
       {
        printf("found\n");
        return 0;
        
       }
      
       
    }
    printf("Not found \n");
    return 9;



}