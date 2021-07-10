#include <stdio.h>
#include <stdlib.h>


void main(){
    unsigned int t;
  /* we cannot use int beacuse the input number is too big..
  so instead we use array to deal with this issue..
  */
    char number[100];
    char four = '4';

    scanf("%d", &t);

    while(t--){
        int count = 0;
        scanf("%s", number);

        for (int i = 0; i < strlen(number); i++){
          // form here the logic is same ..
            if(number[i] == four) count++;
        }
        printf("%d\n", count);
    }
}
