void abc()
{
  printf("\nIn abc");
}
void xyz()
{
  printf("\nIn xyz");
}
#pragma startup  abc
#pragma exit  xyz

void main()
{
  printf("\nIn main");
  getch();
}