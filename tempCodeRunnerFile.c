#include<stdio.h>

int operations(int a, int b)
{
    char ops;
    printf("Enter your operation: ");
    scanf(" %c", &ops);  // add a space before %c to consume any leftover '\n' in the input buffer

    switch(ops){
        case '+':  // use single quotes for char literals
            return a+b;
        case '-':
            return a-b;
        case '/':
            if(b != 0)  // check for division by zero
                return a/b;
            else {
                printf("Error: Division by zero is undefined.\n");
            }
        case '*':
            return a*b;
        default:
            printf("Operator invalid\n");
            return 0;  // return a value in all cases to avoid a warning
    }
}

int main()
{
    int a,b;
    printf("Enter your first number: ");
    scanf("%d",&a);
    printf("Enter your second number: ");
    scanf("%d",&b);  // use %d for int

    int ans=operations(a,b);
    printf("Result: %d\n", ans);  // add %d to print the result
    return 0;
}
