#include <stdio.h>
#include <stdlib.h>

/*
Question : 
You're given an integer N. Write a program to calculate the sum of all the digits of N.
*/

int sumofDigits(int num){
    int sum = 0, unit = 0;
    while(num > 0){
        unit = num % 10;
        sum += unit;
        num -= unit;
        num /= 10;
    }
    return sum;
}

int main(){
    int t;
    int *nums;
    scanf("%d", &t);

    nums = (int *)malloc(t * sizeof(int));

    for (int i = 0; i < t; i++){
        scanf("%d", nums + i);
    }

    for (int i = 0; i < t; i++){
        printf("%d\n", sumofDigits(nums[i]));
    }
    return 0;
}
