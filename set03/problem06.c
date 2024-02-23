#include <stdio.h>
#include <string.h>
void input_string(char* a, char* b);
int sub_str_index(char* string, char* substring);
void output(char *string, char *substring, int index);
int main()
{
    char a[100],b[100];
    input_string(a , b);
    int index=sub_str_index(a, b);
    
    output(a, b, index);
    return 0;
}
void input_string(char* a, char* b)
{
    printf("enter the sentence:");
    scanf("%s",a);
    
    printf("enter the substring:");
    scanf("%s",b);
}
int sub_str_index(char* string, char* substring)
{
    int string_length;
    int substring_length;
    for (int i =0; substring[i] !='\0' && string_length[i]!='\0' ;i++)
    {
        substring_length++;
        string_length++;
        printf("%d",substring_length);
        printf("%d",string_length);
    }
    int False = -1;
    for (int i = 0; i <= string_length - substring_length; i++) {
        int j;
        for (j = 0; j < substring_length; j++) {
            if (string[i + j] != substring[j]) {
                break;
            }
        }
        if (j == substring_length) {
            return i; 
        }
    }
    return False; 
}


void output(char* string, char* substring, int index)
{
    printf("the index of the string %s is %d",substring,index);
}