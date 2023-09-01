#include<stdio.h>

int main(){
    int a[50],size,pos,value,i;
    printf("enter the size of array: ");
    scanf("%d", &size);
    printf("enter the value of array: ");
    for(int i=0;i<size;i++){
    scanf("%d", &a[i]);
    }
    printf("enter the location of array: ");
    scanf("%d", &pos);
    printf("enter the value to be inserted: ");
    scanf("%d", &value);

    for(int i=size-1;i>=pos-1;i--);
        a[i+1]=a[i];
        a[pos-1]=value;

    printf("resultant array is: ");
    for(int i=0;i<=size;i++)
        printf("%d\n", a[i]);
return 0;
}
