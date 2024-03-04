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
    // void slice(const char* str, char* result, size_t start, size_t end)
    // strncpy(result, str + start, end - start);
    // int i=0;
    int substr_len=0;
    int i=0;
    int j=0;
    for ( j = 0; substring[j] != '\0'; j++)
    {
        substr_len++;
    }
    printf("%d\n",substr_len);
    j =0;
    // for ( i = 0; string[i] != '\0'; i++)
    
    for ( i = 0; string[i] != '\0';i++)
    {
        if (substr_len -1 == j)
                {
                   printf("%d\n",i);
                   return i-j+1;
                }  
       if(substring[j] == string[i])
            {
                j++; 
            } 
          
    }
    return -1;
   
    
}
void output(char* string, char* substring, int index)
{

    printf("the index of the substring %s is %d",substring,index);
    
}