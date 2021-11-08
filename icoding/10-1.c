#include <stdbool.h> /* C99 only */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define STACK_SIZE 100

/* external variables */
char contents[STACK_SIZE];
int top = 0;

void stack_overflow(void)
{
    printf("Stack overflow\n");
    exit(EXIT_FAILURE);
}

void stack_underflow(void)
{
    printf("Stack underflow\n");
    exit(EXIT_FAILURE);
}

void make_empty(void)
{
    top = 0;
}

bool is_empty(void)
{
    return top == 0;
}

bool is_full(void)
{
    return top == STACK_SIZE;
}

void push(char ch)
{
    if (is_full())
        stack_overflow();
    else
        contents[top++] = ch;
}

char pop(void)
{
    if (is_empty())
        stack_underflow();
    else
        return contents[--top];

    return '\0'; /* prevents compiler warning due to stack_underflow() call */
}

int main(void)
{
    char c, s[1005];
    gets(s);
    bool ans = 1;
    int l = strlen(s);
    for (int i = 0; i < l; i++)
    {
        c = s[i];
   //     printf("%c\n", c);
        if (c == '{' || c == '(')
            push(c);
        else
        {
            //判断栈顶
            if (is_empty())
            {
                ans = 0;
                break;
            }
            char top_char = pop();
            if (c == '}' && top_char != '{')
            {
                ans = 0;
                break;
            }
            if (c == ')' && top_char != '(')
            {
                ans = 0;
                break;
            }
        }
    }
    if(!is_empty()) ans = 0;
    if (ans)
        printf("Parentheses/braces are nested properly\n");
    else
        printf("Parentheses/braces are NOT nested properly\n");
    return 0;
}
