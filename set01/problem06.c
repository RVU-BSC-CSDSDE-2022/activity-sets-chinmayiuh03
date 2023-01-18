#include <stdio.h>
 int input();
void compare(int a, int b, int c, int* l);
Void output(int a, int b, int c, int l);
Int main()
{
   int a,b,c,l;
  printf("enter the n umbers:");
  a = input();
  b = input();
  c = input();
 compare(a,b,c,&l);
 output(a,b,c,l);
}
Int input()
{ 
  Int x;
 scanf("%d",&x);
 return(x);
}
Void compare(int a, int b, int c, int*l)
{
   if (int a > b && a>c){
      *l = a;}
  else if (int b>c){
     *l = b;}
  else if{
   *l = c;}
  else
{printf("invalid output");}
Void output(int a. int b, int c , int l)
{ 
   if(l == a)
{ printf("the largest among %d,%d and %d is %d/n" a, b, c ,l);}
    else if (l == b)
{ printf("the largest among %d,%d and %d is %d/n" a, b, c ,l);}
  else   if (l == c )
{ printf("the largest among %d,%d and %d is %d/n" a, b, c ,l);}
    else
{ printf("sorry invalid output/n");}
}

