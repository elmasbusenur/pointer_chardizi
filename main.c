#include <stdio.h>

int main() {
    char *a="1234567890"; //a pointeri bu elemanı gösteriyor
    char x[10]; //10 elemanlı bir x dizisi
    char *p1, *p2; // pointerlar
    printf("x=%s\n", x[0]);
    printf("%s\n", a); //a yı yazdırıyor
    p1=a;// a yı p1 e atıyor p1=1234567890
    printf("p1=%s\n", p1);

    p2=x; // x in ilk elamanını p2 ye atıyor
    printf("p2=%s\n", p2);
    printf("x=%s\n", x);

    while(*p1!='\0'){
        *p2=*p1; //p2=1234567890

        p1++;
        p2++;

    }

    //printf("*p2=%s\n", *p2);
    *p2=*p1;
    printf("%s\t", x);
    getchar();
    return 0;
}