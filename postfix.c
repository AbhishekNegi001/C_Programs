/*
Q2 Write a program to evaluate a postfix expression.
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct stack {
    int top;
    int pf;
    int *arr;
};
int operation(int a , int b, char ch){
    if(ch == '+')
    return a+b;
    if(ch == '*')
    return a*b;
    if(ch == '-')
    return a-b;
    if(ch == '/')
    return a/b;
    return 0;
}
int Postfixeval(const char *exp,struct stack *s){
	int i;
    for( i=0; exp[i]!= '\0' ;i++){
        if(exp[i]=='+' || exp[i]=='-' || exp[i]=='/' || exp[i]=='*' ){
            s->pf=operation(s->arr[s->top-1] , s->arr[s->top] ,exp[i] );
            s->top--;
            s->arr[s->top] = s->pf;
        }
        else{
            s->top++;
            s->arr[s->top]=exp[i] - '0';
            
        }
    }
    return s->arr[s->top];
}
int main(){
    const char *exp="882/+5-";
    printf("Abhishek Negi Section D Student ID : 20011740\n\n");
    printf("expression is %s\n",exp);
    struct stack *s=(struct stack *)malloc(sizeof(struct stack));
    s->arr=(int *)malloc((strlen(exp)/2+1) * sizeof(char));
    s->top=-1;
    int result=Postfixeval(exp,s);
    printf("result is is %d\n",result);
    return 0;
}
