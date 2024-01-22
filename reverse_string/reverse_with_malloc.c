#include <stdio.h>
#include <string.h>  // for the strlen
#include <stdlib.h>  // for the malloc

char *reverse_string(char *input_string){

    // Detect the length of the input string
    int str_length = strlen(input_string);

    //Allocate memory in the heap for the reversing op.
    char *temp = (char *)malloc((str_length+1) * sizeof(char));

    // Reverse the string
    for(int i = 0; i < str_length; i++){
        temp[str_length-i-1] = input_string[i];
    }

    // Put the null string to the end of the reversed str.
    temp[str_length] = '\0';

    return temp;
}

int main(){

    char *result = reverse_string("ABC");
    printf("Reversed string: %s\n", result);
    
    // Free the allocated memory
    free(result);

    return 0;
}