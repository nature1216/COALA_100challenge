#include<stdio.h>
#include<string.h>

char poly[24];

int main()
{
   int i;
   char tmp[9];
   scanf("%s",poly);
   char* result;
   
   result = strchr(poly,'x');
    
   if(poly[0]=='x')
   {
      printf("1");
      return 0;
   }
   else if(poly[0]=='-'&&poly[1]=='x')
   {
      printf("-1");
      return 0;
   }
   else if(result == NULL)
   {
      printf("0");
      return 0;
   }
   else
   {
      for(i=0;i<6;i++)
      {
         if(poly[i]=='x')
         {
            break;
         }
         else
         {
            tmp[i]=poly[i];
         }
      }
      printf("%s",tmp);

   }
   

   return 0;
}