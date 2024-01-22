#include <stdio.h>
#include <string.h>  // for the strlen

char *reverse_str(char *inp_str){

    int str_len = strlen(inp_str);

    // Define the start and end pointers
    char *start = inp_str;
    char *end = inp_str + str_len - 1;
    char temp;

    while(start < end){
        temp = *start;
        *start = *end;
        *end = temp;
        start = start + 1;
        end = end - 1;
    }
    
    return inp_str;
}

int main(){

    char inp_string[] = "ABC";
    printf("Result: %s", reverse_str(inp_string));
    return 0;

}