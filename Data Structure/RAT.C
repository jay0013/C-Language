typedef struct Rational
{
   int numerator;
   int denominator;
}Rational;
void Read(Rational *x)
{
   char slash;
   scanf("%d%c%d",&x->numerator,&slash,&x->denominator);
//   scanf("%d%c%d",&x.numerator,&slash,&x.denominator);
}
Rational Sub(const Rational x,const Rational y)
{
   Rational tmp;
   tmp.numerator=x.numerator*y.denominator-y.numerator*x.denominator;
   tmp.denominator=x.denominator*y.denominator;
   return tmp;
}
Rational Division(const Rational x,const Rational y)
{
   Rational tmp;
   tmp.numerator=x.numerator*y.denominator;
   tmp.denominator=x.denominator*y.numerator;
   return tmp;
}
Rational Multi(const Rational x,const Rational y)
{
   Rational tmp;
   tmp.numerator=x.numerator*y.numerator;
   tmp.denominator=x.denominator*y.denominator;
   return tmp;
}
Rational Add(const Rational x,const Rational y)
{
   Rational tmp;
   tmp.numerator=x.numerator*y.denominator+y.numerator*x.denominator;
   tmp.denominator=x.denominator*y.denominator;
   return tmp;
}
void Print(Rational x)
{
   printf("\n%d/%d",x.numerator,x.denominator);
}
void main()
{
   Rational x,y,z;
   clrscr();
   printf("\nEnter First Rational number");
   Read(&x);
   printf("\nFirst Rational number is ");
   Print(x);
   printf("\nEnter Second Rational number");
   Read(&y);
   printf("\nSecond Rational number is ");
   Print(y);
   z=Add(x,y);
   printf("\nAddtion of two Rational number is ");
   Print(z);
   z=Sub(x,y);
   printf("\nSubtraction of two Rational number is ");
   Print(z);
   z=Multi(x,y);
   printf("\nMultiplication of two Rational number is ");
   Print(z);
   z=Division(x,y);
   printf("\nDivision of two Rational number is ");
   Print(z);
   getch();
}
