#include<stdio.h>
#include<stdlib.h>
void main(){
    int n=rand()%3;
    char b,r,s,p;
    if (n==1){
        b=r;
    }
    else if (n==2){
        b=p;
    }
    else if (n==3){
        b=s;
    }
    printf("%c",b);
}