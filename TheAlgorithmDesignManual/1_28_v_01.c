//Write a function to perform integer division without using either the / or * operators. Find a fast way to do it
#include <stdio.h>
#include <stdlib.h>

void divide(int a, int b, int *result, int *reminder)
{
	if(a < b)
		exit(1);
	if (a == 0 && b == 0)
		exit(1);
        *result = 0;
        *reminder = a;
        while(*reminder >= b){
                *reminder = *reminder - b;
                *result = *result + 1;
        }
}

int main()
{
        int a, b, result, reminder;
        scanf("%d%d", &a, &b);
        divide(a, b, &result, &reminder);
        printf("%d\t%d\n", result, reminder);
        return 0;
}
