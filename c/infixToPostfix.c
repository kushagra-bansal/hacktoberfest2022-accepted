#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct stack
{
  int size;
  int top;
  int *s;
}st;

void push(struct stack *st,int x)
{
    st->top++;
    st->s[st->top]=x;

}

int pop(struct stack *st)
{
    int x;
    x=st->s[st->top];
    st->top--;
    return x;
}

int isEmpty(struct stack st)
{
    if(st.top==0)
        return 1;
    else
        return 0;
}

char stackTop(struct stack *st)
{
    return st->s[st->top];
}

int isOperand(char x)
{
    if(x=='+' || x=='-' || x=='*' || x=='/')
        return 0;
    else
        return 1;
}

int pre(char x)
{
    if(x=='+' || x=='-')
        return 1;
    else if(x=='*' || x=='/')
        return 2;
    else
        return 0;
}

char * Convert(char *infix)
{
    char *postfix = malloc((strlen(infix)+1)*sizeof(int));
    int i=0,j=0;
    while(infix[i]!='\0')
    {
        if(isOperand(infix[i]))
            postfix[j++] = infix[i++];
        else
        {
            if(pre(infix[i])>pre(stackTop(&st)))
                push(&st,infix[i++]);
            else
                postfix[j++] = pop(&st);
        }
    }
    while(!isEmpty(st))
    {
        postfix[j++] = pop(&st);
    }
    postfix[j] = '\0';
    return postfix;
}
int main()
{
    char *infix,*postfix;
    int i;
    infix = (char *)malloc(100*sizeof(char));
    postfix = (char *)malloc(100*sizeof(char));
    st.top=0;
    st.s = (int *) malloc(strlen(infix) * sizeof(int));
    printf("Infix:");
    scanf("%[^\n]%*c",&infix);
    postfix = Convert(&infix);
    printf("Postfix:");
    while(postfix[i]!='\0')
        printf("%c",postfix[i++]);
    printf("\n");
    return 0;
}
