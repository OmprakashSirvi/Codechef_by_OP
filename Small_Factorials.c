#include <stdio.h>
#include <stdlib.h>

/*
calculate factorials of some small positive integers.

For every integer here, we have to calculate the factorial. This is very simple in languages like python or java which have built-in support for big integer types. 
It proves to be a hassle for people using C / C++ or languages that do not have a built-in biginteger type. Let’s think about how we can store the the result.

Now, the maximum number that we can store in an unsigned 32 bit integer is 2 ^ 32 – 1 and in an unsigned 64 bit integer is 2 ^ 64 – 1. 
Something like 100!(‘!’ is the notation for factorial) has over 150 decimal digits. The data types mentioned earlier can store numbers having 
at most 9 and 19 decimal digits respectively. So, we need to find a way to store the 150+ digits that we will get as the answer. 
The simplest data structure that we can use is an integer array of size of about 200 to be on the safe side.
*/

void main(){
    int t;
    scanf("%d", &t);

    while(t--){
        int num, mul, temp;
        int arr[1000] = {1};
        scanf("%d", &num);
        int elements = 1;

        for (int i = 1; i <= num; i++){
            // multiply i with array...
            for (int j = 0; j < elements; j++){
                // iterating j from 0 to the number of elements present in the array..
                mul = (arr[j] * i) + temp;
                arr[j] = mul%10;
                temp = mul/10;
            }
            while(temp > 0){
                // adding remaining digits of temp in my array..
                arr[elements++] = temp%10;
                temp /= 10;
            }
        }
        while(elements--){
            // finally printing my ans..
            printf("%d", arr[elements]);
        }

        printf("\n");
    }
}
