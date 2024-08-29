struct Point
   {
     int y;
     int x;//member of structure
   }tmp={10,20};
void main()
{
  struct Point mno={20,10};
  struct Point *p;
  struct Point t[3]={{1,2},{3,4},{5,6}};
  int i;
  p=&mno;
  clrscr();
  printf("\ntmp.x= %d and tmp.y= %d",tmp.x,tmp.y);
  printf("\nmno.x= %d and mno.y= %d",mno.x,mno.y);
  printf("\np->x= %d and p->y= %d",p->x,p->y);
  p=t;
  for(i=0;i<3;i++)
  {
    //printf("\nt[%d].x= %d and t[%d].y= %d",i,i,t[i].x,t[i].y);
    printf("\nt[%d].x= %d and t[%d].y= %d",i,i,p->x,p->y);
    p++;

  }
  getch();


}




