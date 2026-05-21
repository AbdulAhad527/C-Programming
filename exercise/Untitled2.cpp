# include <stdio.h>
# include<conio.h>
void swap ( int &, int &);
int main()
{

  int a,b;
  printf("Enter first value: ");
  scanf("%d", &a);
  printf("Enter second value: ");
  scanf("%d", &b);
  printf("\nValues before swapping\n\n");
  printf("a = %d\n",a);
  printf("b = %d\n",b);
 swap(a,b);
  printf("\nValues after swapping\n\n");
  printf("a = %d\n",a);
  printf("b = %d\n",b);
  getch ();
}
void swap( int &x, int &y)
{
    int t;
    t=x;
    x=y;
    y=t;
}
