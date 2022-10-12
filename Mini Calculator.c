#include<stdio.h>
int sum(int a,int b);
int sub(int a,int b);
int mul(int a,int b);
int divi(int a,int b);

int main(){
    int a,b;
    char ch;
    printf("Enter your choice\n1.Addition\n2.Substraction\n3.Multiplication\n4.Division\n");
    scanf("%c",&ch);
    if(ch=='1'){
        printf("Enter two numbers\n");
        scanf("%d%d",&a,&b);
        printf("Sum is %d",sum(a,b));
    }else if(ch=='2'){
        printf("Enter two numbers\n");
        scanf("%d%d",&a,&b);
        printf("Substraction is %d",sub(a,b));
    }else if(ch=='3'){
        printf("Enter two numbers\n");
        scanf("%d%d",&a,&b);
        printf("multiplication is %d",mul(a,b));
    }else if(ch=='4'){
        printf("Enter two numbers\n");
        scanf("%d%d",&a,&b);
        printf("Division is %d",divi(a,b));
    }else{
        printf("Wrong Input");
    }
    
}
int c;
int sum(int a,int b){
    c=a+b;
    return c;
}
int sub(int a,int b){
    c=a-b;
    return c;
}
int mul(int a,int b){
    c=a*b;
    return c;
}
int divi(int a,int b){
    c=a/b;
    return c;
}



