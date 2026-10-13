#include<stdio.h>
int main(){
    int a,b;
    float c,d,e,f;
    printf("Enter 1st number: ");
    scanf("%d", &a);
    printf("Enter 2nd number: ");
    scanf("%d", &b);
    c = a + b;
    d = a - b;
    e = a * b;
    f = a / b;
    int opt;
    printf("1. Addition  2. Subtraction  3. Multiplecation  4. Division\n");
    printf("Enter you operator: ");
    scanf("%d",&opt);
    switch (opt)
    {
    case 1:
        printf("Addition %.2f",c);
        break;
    case 2:
        printf("Addition %.2f",d);
        break;
    case 3:
        printf("Addition %.2f",e);
        break;
    case 4:
        printf("Addition %.2f",f);
        break;
    
    default:
        break;
    }


    return 0;
}