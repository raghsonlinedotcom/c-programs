#include<stdio.h>
int main(){
    int add,sub,mul,div,a,b,c=1,choice;
    printf("\nThamilMani SImple Calculator program ...");
    printf("\nEnter The Value For A : ");
    scanf("%d",&a);
    printf("\nEnter The Value For B : ");
    scanf("%d",&b);
    while(c){
        printf("\n1.Addition \t2.subtraction\t 3.multiplication \t4.division \t5.exit\n");
        printf("\nEnter Your Choice : ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                add=a+b;
                printf("\nThe Addition Value Of %d and %d : %d",a,b,add);
                break;
            case 2:
                sub=a-b;
                printf("\nThe Subtraction Value Of %d and %d : %d",a,b,sub);
                break;
            case 3:
                mul=a*b;
                printf("\nThe Multiplication Value Of %d and %d : %d",a,b,mul);
                break;
            case 4: 
                div=a/b;
                printf("\nThe Division Value Of %d and %d : %d",a,b,div);
                break;
            case 5:
                c=0;
                printf("\nThank You For Using This Calculator ...");
                break;
            default:
                printf("\nPlease Enter The Valid Choice ...\n");
                break;
        }
    }
    return 0;
}