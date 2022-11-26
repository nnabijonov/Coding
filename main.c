#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int son, char **harf) {
    int kamron=1;
    int sardor=0;
    int nurik[128]={0};

    while(kamron != son){
        int java =0;

        while(harf[kamron][java] !='\0'){
            nurik[(int)harf[kamron][java]]++;
            java++;
        }
        kamron++;
    }
    for (sardor=0; sardor<128; sardor++)
    if(nurik[sardor])
    printf("%c:%d\n", sardor, nurik[sardor]);
    return 0;
}