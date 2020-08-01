#include<stdio.h>
int main()
{
 int a, b, c;
 scanf("%d\n %d\n %d", &a, &b, &c);
 
 if(a==b && b==c && c==60)
 {
  printf("Equilateral");
 
 }
 else if(a+b+c==180)
 {
  if(a==b||b==c||c==a)
  {
   printf("Isosceles");
  }
  else if(a!=b && b!=c && a!=c)
  {
  	printf("Scalene");
  }
 }
 
 else if(a+b+c!=180)
 {
  printf("Error");
 }
 return 0;
}
