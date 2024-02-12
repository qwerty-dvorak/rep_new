#include <stdio.h> 
#include <string.h>
int main() 
{ 
int size; 
char str1[] = "welcome"; 
char str2[] = "cg"; 
size = strcspn(str1, str2); 
printf("The unmatched characters before first matched character : %d\n", 
size);
}
