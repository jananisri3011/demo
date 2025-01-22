/*
#include<stdio.h>
int main(){
    int a,b;
    char c = 'a';

    printf("Enter the 1st number\n");
    scanf("%d",&a);
    printf("Enter the 2nd number\n");
    scanf("%d",&b);

    a=a++;
    printf("Value of A after post increment is %d\n",a);
    a=++a;
    printf("Value of A after pre incrememnt is %d\n", a);
    b=b++;
    printf("Value of B after post increment is %d\n",b);
    b=++b;
    printf("Value of B after pre incrememnt is %d\n",b);
    c=c++;
    printf("Value of c after post increment is %c\n",c);
    c=++c;
    printf("Value of c after pre increment is %c\n",c);


    return 0;

}

#include<stdio.h>
int main(){
    int a= 5;
    int b= 10;
    printf("a+b = %d\n",a+b);
    printf("a-b = %d\n",a-b);
    printf("a*b = %d\n",a*b);
    printf("a/b = %d\n",a/b);
    printf("a%b = %d\n",a%b);
    printf("a++ = %d\n",a++);
    printf("b++ = %d\n",b++);
    printf("++a = %d\n",++a);
    printf("++b = %d\n",++b);
    printf("--a = %d\n",--a);
    printf("--b = %d\n",--b);

}

#include <stdio.h>

int main()
{
    int a ,b;
    printf("Enter the value of a:");
    scanf("%d", &a);
    printf("Enter the value of b:");
    scanf("%d", &b);
    // using operators and printing results
    printf("a < b  : %d\n", a < b);
    printf("a > b  : %d\n", a > b);
    printf("a <= b: %d\n", a <= b);
    printf("a >= b: %d\n", a >= b);
    printf("a == b: %d\n", a == b);
    printf("a != b : %d\n", a != b);

    return 0;
}
//find the element position
#include<stdio.h>

void findelement(int arr[],int size,int key){
    for (int i=0;i<size;i++){
        if (arr[i]==key){
            printf("The element found at position : %d",i+1);
            break;
        }

    }
}

int main(){
    int arr[] = {1,2,4,5,3};
    int size=5;
    int key=3;
    findelement(arr,size,key);
    return 0;
}

#include <stdio.h>

int main()
{
    int gfg = 0; // local variable for main
    printf("Before if-else block %d\n", gfg);
    if (1) {
        int gfg = 100; // new local variable of if block
        printf("if block %d\n", gfg);
    }
    printf("After if block %d", gfg);
    return 0;
}

//Check odd or even 
#include<stdio.h>
int main(){
    int num=23453221;

    if(num%2==0){
        printf("Number is even");
    }else{
        printf("Number is odd");
    }

    return 0;
}

//check whether the number is +ve or -ve or 0
#include<stdio.h>
int main(){
    int num;
    printf("Enter the num");
    scanf("%d",&num);
    if (num>0){
        printf("num is +ve");
    }else if (num<0){
        printf("num is -ve");
    }else{
        printf("num is 0");
    }
}*/

#include<stdio.h>
unsigned int (unsigned int num,int pos1,int pos2){
    int count =0;
    for(int i=pos1;i<pos2;i++){
        if(num&(1<<i)){
            count++;
        }
    }
}
int main() {
    unsigned int num = 0b11011101; // Example number
    int pos1 = 4;
    int pos2 = 7;
    unsigned int result = countSetBitsInRange(num, pos1, pos2);
    printf("Number of set bits between positions %d and %d: %u\n", pos1, pos2, result);
    return 0;
}
