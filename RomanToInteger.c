#include <stdio.h>

int romanToInt(char* s) {
    int result_sum = 0;

    while (*s != '\0') {
        switch (*s) {
            case 'I':
            if (*(s+1) == 'V') {
                result_sum += 4; s+=2; break;
            }
            if (*(s+1) == 'X') {
                result_sum +=9; s+=2; break;
            }
            else {
                result_sum +=1; s++; break;
            }

            case 'V':
            result_sum +=5; s++;break;

            case 'X':
            if (*(s+1) == 'L') {
                result_sum += 40; s+=2; break;
            }
            if (*(s+1) == 'C') {
                result_sum +=90; s+=2; break;
            }
            else {
                result_sum +=10; s++; break;
            }

            case 'L':
            result_sum +=50; s++;break;

            case 'C':
            if (*(s+1) == 'D') {
                result_sum += 400; s+=2; break;
            }
            if (*(s+1) == 'M') {
                result_sum +=900; s+=2; break;
            }
            else {
                result_sum +=100; s++; break;
            }

            case 'D':
            result_sum +=500; s++;break;

            case 'M':
            result_sum +=1000; s++;break;

        }
    }

    return result_sum;
}

int main () {

printf("Enter Roman numerals (I,V,X,L,C,D,M): ");
char s[200]; // max
scanf("%199s", s); //for buffer overflow, take 199 numerals
printf("%d",romanToInt(s));


return 0;
}

