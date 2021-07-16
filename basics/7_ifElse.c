#include<stdio.h>
int main(){
    int age;
    printf("enter your age : \n");
    scanf("%d", &age);
    if(age <18){
        printf("\nyou are too young");
    }else if (age > 100){
        printf("\nyou are too old");
    }
    printf("\nyour age is %d",age);
    return 0;
}