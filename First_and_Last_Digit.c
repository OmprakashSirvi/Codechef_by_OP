#include <stdio.h>
#include <stdlib.h>

/*
If Give an integer N . Write a program to obtain the sum of the first and last digits of this number.
*/

int main(){
    int t = 0, sum = 0, num;
    scanf("%d", &t);

    while(t--){
        scanf("%d", &num);
        sum += num%10;
        while(num > 0){
        if (num < 10) {
            sum += num;
            break;
        }
        num -= num%10;
        num /= 10;
        }
        printf("%d\n", sum);
        sum = 0;
    }
    return 0;
}
