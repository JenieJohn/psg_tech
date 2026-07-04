#include <stdio.h>

int main(){
    float ft, in, cm;
    printf("enter the height in ft/in: ");
    scanf("%f", &ft);
    cm=ft*30.48;
    printf("%.2f",cm);
    return 0;
}