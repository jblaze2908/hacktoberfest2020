#include <stdio.h>
int main()
{
   char s[50], r[50];
   int start, end, count = 0;

   printf("Input a string (max size 50)\n");
   gets(s);

   // Calculating string length

   while (s[count] != '\0')
      count++;

   // start reversing

   end = count - 1;

   for (start = 0; start < count; start++) {
      r[start] = s[end];
      end--;
   }

   r[start] = '\0';

   printf("%s\n", r);

   return 0;
}
