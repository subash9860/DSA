#include<stdio.h>
void toh(int n , char sou, char aux , char des){
    if (n==1)
    printf("move tower %c to %c \n",sou,des);
    else{
        toh(n-1,sou,des,aux);
        toh(1,sou,aux,des);
        toh(n-1,aux,sou,des);
    }
}
int main(){
    int x;
    printf("Enter the number of disk\n");
    scanf("%d",&x);
    toh(x,'S','A','D');
}