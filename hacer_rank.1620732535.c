#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char x[10];
    int i;
    scanf("%s",&x);
    for(i=0;i<=strlen(x);i++){
    	printf("%d",x[i]);
	}
    
    
    return 0;
}

