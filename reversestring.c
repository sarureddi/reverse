#include<stdio.h>
#include<conio.h>
int main()
{
char arr[100];
printf("Enter the string to reverse");
gets(arr);
strrev(arr);
printf("reverse of the string is\n%s\n",arr);
return 0;
}
