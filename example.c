
/*
//malloc calloc
#include<stdio.h>
#include<stdlib.h>

int num;
int a,b;

int main(){\
    printf("enter the number");
    scanf("%d",&num);
    int *ptr1=(int*)malloc(5*sizeof(int));
    int *ptr2=(int*)calloc(5,sizeof(int));
    
    printf("value of malloc and calloc is %p , %p",ptr1,ptr2);
    
    free(ptr1);
    free(ptr2);
}

//struct and union
#include<stdio.h>

struct Person{
    int age;
    char name[50];
    float weight;
};

union Books{
    int bookid;
    char bookname[50];
};

struct Person person1={23,"JANANI",68.9};
union Books book1={123,"Poooja"};

int main(){
    printf("\nPerson1 details:");
    printf("\nAge :%d",person1.age);
    printf("\nName :%s",person1.name);
    printf("\nWeight : %f",person1.weight);
    printf("\naddr of age %p ,name %p , weight %p",&person1.age,&person1.name,&person1.weight);
    
    printf("\nBook1 details:");
    printf("\nBookID :%d",book1.bookid);
    printf("\nBookName :%s",book1.bookname);
    printf("\naddr of bookid %p ,bookname %p",&book1.bookid,&book1.bookname);
    
    return 0;
}

//switch case exp
#include<stdio.h>

int main(){
    int choice;
    printf("/nList of Operations:");
    printf("/n1.Addition");
    printf("/n2.subtraction");
    printf("/n3.multiplication");
    printf("/n4.Division");
    printf("/nEnter your choice from 1-4");
    scanf("%d",&choice);

switch(choice){
    case 1:
    printf("/nAdd");
    break;
    
    case 2:
    printf("/nsub");
    break;
    
    case 3:
    printf("/nmulti");
    break;
    
    case 4:
    printf("/ndiv");
    break;
    
    default:
    printf("/nEnter the valid choice from 1-4");
    break;
}

}
//factorial
#include<stdio.h>

int factorial(int n){
    if (n==0){
        return 1;
    }
    else{
        return(n*factorial(n-1));
    }
}
int main(){

    printf("%d\n",factorial(3));
}

//list array and each elemnts of array
#include<stdio.h>
int main(){
    int num;
    
    printf("Enter the number of elements in array\n");
    scanf("%d",&num);
    
    int arr[num];
    
    printf("Enter the elements of the array\n");
    for(int i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    
    printf("The listed array is\n");
    for(int i=0;i<num;i++){
        printf("%d",arr[i]);
    }
    
    printf("\nDisplaying each elements of array\n");
    for(int i=0;i<num;i++){
        printf("Element %d:%d\n",i+1,arr[i]);
    }
    return 0;
}

//strcmp
#include<stdio.h>
#include<string.h>

int main(){

    char str1[50],str2[50];
    printf("Enter the string 1");
    scanf("%s",str1);
    printf("Enter the string 2");
    scanf("%s",str2);
    if (strcmp(str1,str2) ==0){
        printf("string are equal");
    }else{
        printf("strings aare not equal");
    }
    return 0;
}

//reverse array
#include<stdio.h>

void reversearray(int arr[],int size){
    int start=0,end=size-1;
    while(start<end){
        int temp = arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        
        start ++;
        end --;
    }
}

int main(){
    
    int arr[]={1,2,3,4,5};
    int size =sizeof(arr)/sizeof(arr[0]);
    //printf("Array is:%d",arr[i]);
    reversearray(arr,size);
    
    printf("Reverse array is:");
    for(int i =0;i<size;i++){
        printf("%d",arr[i]);
    }
    
    printf("\n");

}



//reverse strings

#include<stdio.h>
#include<string.h>
void reversestring(char str[]){
    int start=0,end=strlen(str)-1;
    while(start<end){
        int temp = str[start];
        str[start]=str[end];
        str[end]=temp;
        
        start ++;
        end --;
    }
}
int main(){
    
    char str[]="JANANI";
    
    reversestring(str);
    
    printf("Reverse string is :%s",str);
    
    printf("\n");

}

// function pointer 

#include <stdio.h>

// Function declaration
void greet() {
    printf("Hello, world!\n");
}

int main() {
    // Function pointer declaration
    void (*funcPtr)() = greet;
    
    // Call the function via pointer
    funcPtr();
    
    return 0;
}*/
