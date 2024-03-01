#include <stdio.h>
#include <string.h>
void input_string(char *a);
void str_reverse(char *str, char *rev_str);
void output(char *a, char *reverse_a);
int main()
{
    char str[100], reverse_str[100];
    input_string(str);
    str_reverse(str,reverse_str);
    output(str,reverse_str);
    return 0;
}
void input_string(char *a)
{
    printf("enter the word:");
    scanf("%s",a);
}
void str_reverse(char *str, char *rev_str)
{
    int length=0;
    for (int i =0; str[i] != '\0';i++)
    {
        length++;
    }
    int j=length-1;
    for (int i = 0; i <length; i++, length--) 
    { 
        rev_str[i] = str[length]; 
        // str[i] = str[j]; 
        // str[j] = rev_str[i];
    }

}
void output(char *a, char *reverse_a)
{
    printf("the reversed string is %s ",reverse_a);
}