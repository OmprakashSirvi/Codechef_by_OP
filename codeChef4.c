#include <stdio.h>

int main(){
    unsigned int t = 0;
    scanf("%d", &t);

    while(t--){
        unsigned int num, rev = 0;
        scanf("%d", &num);
        while(num > 0){
            rev = rev * 10 + num%10;
            num /= 10;
        }
        printf("%d\n", rev);
    }
    return 0;
}
