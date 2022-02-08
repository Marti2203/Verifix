/*numPass=7, numTotal=7
Verdict:ACCEPTED, Visibility:1, Input:"3 4 5", ExpOutput:"Right Triangle", Output:"Right Triangle"
Verdict:ACCEPTED, Visibility:1, Input:"3 4 3", ExpOutput:"Acute Triangle", Output:"Acute Triangle"
Verdict:ACCEPTED, Visibility:1, Input:"3 3 7", ExpOutput:"Invalid Triangle", Output:"Invalid Triangle"
Verdict:ACCEPTED, Visibility:1, Input:"3 3 5", ExpOutput:"Obtuse Triangle", Output:"Obtuse Triangle"
Verdict:ACCEPTED, Visibility:0, Input:"1 2 3", ExpOutput:"Invalid Triangle", Output:"Invalid Triangle"
Verdict:ACCEPTED, Visibility:0, Input:"3 6 2", ExpOutput:"Invalid Triangle", Output:"Invalid Triangle"
Verdict:ACCEPTED, Visibility:0, Input:"12 13 5", ExpOutput:"Right Triangle", Output:"Right Triangle"
*/
#include<stdio.h>

int main()
{
    // Fill this area with your code.
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    // taking integer inputs
    if (a+b<=c || b+c<=a || c+a<=b)
    { printf ("Invalid Triangle");}//condition of valid triangle
    else
    {
    if (a*a==b*b + c*c || b*b==a*a+c*c || c*c==a*a+b*b)
        {printf("Right Triangle");}
    if (a*a>b*b+c*c || b*b>a*a+c*c || c*c>a*a+b*b)
    {printf("Obtuse Triangle");}
    if (a*a<b*b+c*c && b*b<a*a+c*c && c*c<a*a+b*b)
      {printf("Acute Triangle");}
    }
    return 0;
}