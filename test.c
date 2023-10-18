#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char **strs = split("a1a2a3a4a5a6a7a8a9a10a11a12a13a", 'a');
    for(int i = 0; i < 5; i++){
        printf("%s", strs[i]);
    }
}