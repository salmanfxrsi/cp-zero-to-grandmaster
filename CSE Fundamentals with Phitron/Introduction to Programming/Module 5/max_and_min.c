#include<stdio.h>

int main() 
{
    int A, B, C, max, min;
    scanf("%d %d %d", &A, &B, &C);

    // check minumum
    if(A <= B && A <= C){
        min = A;
    }
    if(B <= C && B <= A){
        min = B;
    }
    if(C <= A && C <= B){
        min = C;
    }

    // check maximum
    if(A >= B && A >= C){
        max = A;
    }
    else if(B >= C && B >= A){
        max = B;
    }
    else if(C >= A && C >= B){
        max = C;
    }

    
    printf("%d %d", min, max);

    return 0;
}