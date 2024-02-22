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
    // printf("%s\n", string); 
    // int l1 =0;
    // l1 = strlen(string); 
    int i;
    printf("%s",substring[i]);
    printf("%s",string[i]);
    
    for (i=0;string[i];i++)
    {
        printf("%s",string[i]);
        if (string[i] == substring[0])
           {
             return (string[i] :: substring[0]);
           }
    }
    return 0;
    // int l2 = strlen(substring);
    
}
void output(char* string, char* substring, int index)
{
     printf("the index of the string %s is %d",substring,index);
}