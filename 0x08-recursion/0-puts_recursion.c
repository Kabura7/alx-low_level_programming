#include <stdio.h>
int char(int *s);
{
        if(*s==0){
                return 1;
        }
        else
                return 5 + char (*s++);
}
int main (){
        printf("%d",char (8));
        return 0;

