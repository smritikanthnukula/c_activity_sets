#include <stdio.h>
#include <string.h>
void input_string(char *a);
void str_reverse(char *str, char *rev_str);
void output(char *a, char *reverse_a);
int main()
{
    char str[100], rev_str[100];
    input_string(str);
    printf("String = %s\n",str);
    str_reverse(str,rev_str);
    output(str,rev_str);
    return 0;
}
void input_string(char *a)
{
    printf("enter the word:");
    scanf("%[^\n]s\n",a);

}
void str_reverse(char *str, char *rev_str)
{
   int length =0;
   for (int i =0;str[i] != '\0';i++ )
   {
    // if (str[i] =='\0')
    length++;
   }
   printf("%d\n",length);
   int t = length;
   for (int i=0;i<length;i++)
   {
    rev_str[i] = str[(t-i)-1];
    // rev_str[i]=str[i];
    // printf("-%c  %c\n",str[i],str[(t-i)-1]);     

   }
}
void output(char *a, char *reverse_a)
{
    printf("the reversed string is %s ",reverse_a);
}