#include<stdio.h>
#include<stdlib.h>
int main()
{
int a,b,c;
printf("Enter the three sides of traingle");
scanf("%d%d%d",&a,&b,&c);
if((a<1||a>10)||(b<1||b>10)||(c<1||c>10))
{
printf("Out of range values");
exit(0);
}
if((a<b+c)&&(b<a+c)&&(c<a+b))
{
if((a==b)&&(b==c))
printf("Equilateral traingle");
else
if((a!=b)&&(b!=c)&&(a!=c))
printf("Scalene traingle");
else
printf("Isosceles traingle");
}
else
printf("Traingle cannot be formed");
return 0;
}




// TC
// Id Test Case Description
// Input Data Expected
// Output
// Actual
// Output
// Status
// a b C
// 1 Since a>10 the values of one
// variable is greater
// than the range
// 11 3 2 Out of range Out of range Pass
// 2 Since b>10 the values of one
// variable is greater than the
// range
// 3 11 2 Out of range Out of range Pass
// 3 Since c>10 the values of one
// variable is greater
// than 10
// 3 2 11 Out of range Out of range Pass
// 4 Since a<1the value of one
// variable is lesser than
// the range
// 0 4 5 Out of range Out of range Pass
// 5 Since b<1the value of one
// variable is
// lesser than the range
// 4 0 5 Out of range Out of range Pass
// 6 Since c<1the value of one
// variable is lesser than
// the range
// 4 5 0 Out of range Out of range Pass


// Since a, b>10 the values of
// two variables is greater than
// the range
// 11 11 5 Out of range Out of range Pass
// 2 Since b, c>10
// the values of two variables
//  is greater than the range
// 5 11 11 Out of range Out of range Pass

// Since a, c>10 the values of
// two variables is greater than
// range
// 11 5 11 Out of range Out of range Pass
// 4 Since a, b<0 the value of two
// variablesis lesser than the range 0 0 5 Out of range Out of range Pass
// 5 Since b, c<0the value of two
// variables islesser than the
// range
// 5 0 0 Out of range Out of range Pass
// 6 Since a, c<0 the value of
// two variables is lesser than
// the range
// 0 5 0 Out of range Out of range Pass
// 7 Since all the values greater than
// 10 i.e greater than the range 11 11 11 Out of range Out of range Pass
// 8 Since all the values lesser
// than 0 i.e lesser than the range 0 0 0 Out of range Out of range P

