#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include <math.h>
#include <graphics.h>
int large(int x[],int n)
{
  int i,max;
  max=x[0];
  for(i=0;i<n;i++)
  {
     if(max<x[i])
     max=x[i];
  }
  return max;
}

int noofdigit(int x)
{
    int i=0;
     while(x>0)
     {
       i++;
       x=x/10;
     }
     return i;
}


void init(int *x[],int r,int c)
{
   int i,j;
    for(i=0;i<r;i++)
    for(j=0;j<c;j++)
    x[i][j]=NULL;
}

int getPosition(int a,int k)
{
  int pos;
  int c=1;
  while(c<=k)
  {
   pos=a%10;
   a=a/10;
   c++;
  }
  return pos;
}


void RadixSort(int x[],int n)
{
  int *sa[10];
  int max=large(x,n);
  int dig=noofdigit(max);
  int y,z,pos,i,k,s,r,c;
  int counter[10];
  for(i=0;i<10;i++)
  {
     sa[i]=(int *)malloc(n*sizeof(int *));
     counter[i]=0;
  }
  for(k=1;k<=dig;k++)
  {
     for(i=0;i<n;i++)
     {
      pos=getPosition(x[i],k);
      sa[pos][counter[pos]++]=x[i];
     }
      s=0;
     for(r=0;r<10;r++)
       for(c=0;c < n && counter[r]!=0 ;c++)
	 {
	     x[s++]=sa[r][c];
	     counter[r]--;
	 }
  }
}

void Merge(int numbers[], int temp[], int left, int mid, int right)
{
  int i, left_end, num_elements, tmp_pos;

  left_end = mid - 1;
  tmp_pos = left;
  num_elements = right - left + 1;

  while ((left <= left_end) && (mid <= right))
  {
    if (numbers[left] <= numbers[mid])
	  temp[tmp_pos++] = numbers[left++];
    else
      temp[tmp_pos++] = numbers[mid++];

  }

  while (left <= left_end)
    temp[tmp_pos++] = numbers[left++];


  while (mid <= right)
    temp[tmp_pos++] = numbers[mid++];



  for (i=0; i <= num_elements; i++)
  {
    numbers[right] = temp[right];
    right = right - 1;
  }
}
void MergeSort(int numbers[], int temp[], int left, int right)
{
  int mid;

  if (right > left)
  {
    mid = (right + left) / 2;
    MergeSort(numbers, temp, left, mid);
    MergeSort(numbers, temp, mid+1, right);
    Merge(numbers, temp, left, mid+1, right);
  }
}
void showValue(float x,float y,float r,float val)
{
  char ss[80];
  circle(x,y,r);
  sprintf(ss,"%2.0f",val);
  outtextxy(x-8,y-4,ss);
}

void dispHeap(float xa[], float n)
{

  float k=0,i;
  float y,r,x,j,px;
  float midx,midy;
  char ss[80];
  char ssp[80];
  midx = getmaxx() / 2;
 // midy = getmaxy() / 2;
  y=12,r=12;
  x=midx;
  px=x;
  cleardevice();
  for(i=0;i<n;i++)
  {
    j=pow(2,k)-1;
    if(i==j)
    {
     if(i==0)
       showValue(x,y,r,xa[i]);
     else
     {
       y+=50;
       x=(px-( (2*r) + (30+j) ));
       showValue(x,y,r,xa[i]);
       px=x;
     }
     k++;

    }
    else
    {
      x+=(4*r)+(300/j);
      showValue(x,y,r,xa[i]);
    }
  }
  getch();
}

void buildHeap(float x[], float n)
{
 float i,elt,s,f;
 for(i=1;i<n;i++)
 {
   elt=x[i];
   s=i;
   f=(s-1)/2;
   while(s>0&& x[f] < elt)
   {
     x[s]=x[f];
     s=f;
     f=(s-1)/2;
     //itr++;
   }
   x[s]=elt;
   dispHeap(x,i);
   //itr++;
 }
}

void heapsort(float x[], float n)
{
 float i,elt,s,f,ivalue;
 buildHeap(x,n);
 dispHeap(x,n);
 for (i=n-1;i>0;i--)
 {
   ivalue=x[i];
   x[i]=x[0];
   f=0;
   if(i==1)
     s=-1;
   else
     s=1;
   if(i>2 && x[2] > x[1])
     s=2;
   while (s>=0 && ivalue < x[s])
   {

    x[f]=x[s];
    f=s;
    s=2*f+1;
    if ((s+1 <= i-1) && (x[s] < x[s+1]))
      s++;
    if (s>i-1)
      s=-1;
   }
   x[f]=ivalue;

   dispHeap(x,n);
 }
}
void QuickSort(int a[],int left,int right)
{
   int pivot,left_r,right_r;
   left_r=left;
   right_r=right;
   pivot=a[left];
   while(left<right)
   {
       while(a[right]>=pivot && left!=right)
       right--;
       if(left!=right)
       {
	 a[left]=a[right];
	 left++;
       }
       while(a[left]<pivot && left!=right)
       left++;
       if(left!=right)
       {
	 a[right]=a[left];
	 right--;
       }
   }
   a[left]=pivot;
   pivot=left;
   left=left_r;
   right=right_r;
   if(left<pivot)
   QuickSort(a,left,pivot-1);
   if(pivot<right)
   QuickSort(a,pivot+1,right);
}
void ShellSort(int numbers[], int array_size)
{
  int i, j, increment, temp;

  increment = 3;
  while (increment > 0)
  {
    for (i=0; i < array_size; i++)
    {
      j = i;
      temp = numbers[i];
 while ((j >= increment) && (numbers[j-increment] > temp))
      {
	numbers[j] = numbers[j - increment];
	j = j - increment;
      }
      numbers[j] = temp;
    }

      increment = increment/2;

  }
}

int MinPos(int *a,int start,int end)
{
      int i,min=start;
      for(i=start+1;i<end;i++)
      {
	    if(a[i]<a[min])
	    min=i;
      }
      return min;
}
void SelectionSort(int *a,int size)
{
      int i,min,tmp;
      for(i=0;i<size;i++)
      {
	 min=MinPos(a,i,size);
	 tmp=a[i];
	 a[i]=a[min];
	 a[min]=tmp;
      }
}
void InsrtionSort(int *a,int size)
{
     int i,j,index;
     for(i=1;i<size;i++)
     {
	 j=i;
	 index=a[i];
	 while(j>=0 && a[j-1]>index)
	 {
	    a[j]=a[j-1];
	    j=j-1;
	 }
	 a[j]=index;
     }
}
void BubbleSort(int *a,int size)
{
   int i,j,t;
   for(i=0;i<size;i++)
   {
      for(j=0;j<size-i-1;j++)
      {
	  if(a[j]>a[j+1])
	  {
	     t=a[j];
	     a[j]=a[j+1];
	     a[j+1]=t;
	  }
      }
   }
}
int BinarySearch(int a[],int low,int high,int item)
{
   int mid;
   while(low<high)
   {
       mid=(low+high)/2;
       if(a[mid]==item)
	 return mid+1;
       else if(a[mid]>item)
       {
	  high=mid-1;
       }
       else if(a[mid]<item)
       {
	  low=mid+1;
       }
   }
   return -1;

}
int RBinarySearch(int a[],int low,int high,int item)
{
   int mid;
   if(low<high)
   {
       mid=(low+high)/2;
       if(a[mid]==item)
	 return mid+1;
       else if(a[mid]>item)
       {
	  return RBinarySearch(a,low,mid-1,item);
       }
       else if(a[mid]<item)
       {
	  return RBinarySearch(a,mid+1,high,item);
       }
   }
   return -1;

}
void ReadArray(int *a,int size)
{
   int i;
   for(i=0;i<size;i++)
   {
     scanf("%d",&a[i]);
   }
}
void PrintArray(int *a,int size)
{
   int i;
   printf("\n");
   for(i=0;i<size;i++)
   {
     printf("%5d",a[i]);
   }
}
int LinearSearch(int *a,int size,int ele)
{
     int i;
     for(i=0;i<size;i++)
     {
	if(a[i]==ele)
	return i+1;
     }
     return 0;
}
void Menu()
{
   printf("\n1..Linear Search");
   printf("\n2..Binary Search(recursive)");
   printf("\n3..Binary Search(non recursive)");
   printf("\n4..Bubble Sort");
   printf("\n5..Selection Sort");
   printf("\n6..Insersion Sort");
   printf("\n7..Shell Sort");
   printf("\n8..Quick Sort");
   printf("\n9..Heap Sort");
   printf("\n10..Merge Sort");
   printf("\n11..Radix Sort");
   printf("\n12..Exit");
   printf("\n\nEnter your choice");
}
void main()
{
   int ch,i,ele;
   int *a,*tmp,size;
   float arr[]={25,57,48,37,12,92,86,33};
   //int gdriver = DETECT, gmode, errorcode;
 /* initialize graphics mode */
    //initgraph(&gdriver, &gmode, "c:\\tc\\bgi");

   do
   {
       clrscr();
       Menu();
       scanf("%d",&ch);
       switch(ch)
       {
       case 1://Linear Search
       printf("\nEnter size of array");
       scanf("%d",&size);
       a=(int *)malloc(size*sizeof(int));
       printf("\nEnter elements of an array");
       ReadArray(a,size);
       printf("\nElements of an array are");
       PrintArray(a,size);
       printf("\nEnter element to search");
       scanf("%d",&ele);
       i=LinearSearch(a,size,ele);
       if(i!=0)
       printf("\n%d found in %d position",ele,i);
       else
       printf("\n%d is not found",ele);

       break;
       case 2://recursive Binary Search
       printf("\nEnter size of array");
       scanf("%d",&size);
       a=(int *)malloc(size*sizeof(int));
       printf("\nEnter elements of an array");
       ReadArray(a,size);
       BubbleSort(a,size);
       printf("\nElements of an array are");
       PrintArray(a,size);
       printf("\nEnter element to search");
       scanf("%d",&ele);
       i=RBinarySearch(a,0,size-1,ele);
       if(i!=-1)
       printf("\n%d found in %d position",ele,i);
       else
       printf("\n%d is not found",ele);
       break;
       case 3://non recursive Binary Search
       printf("\nEnter size of array");
       scanf("%d",&size);
       a=(int *)malloc(size*sizeof(int));
       printf("\nEnter elements of an array");
       ReadArray(a,size);
       BubbleSort(a,size);
       printf("\nElements of an array are");
       PrintArray(a,size);
       printf("\nEnter element to search");
       scanf("%d",&ele);
       i=BinarySearch(a,0,size-1,ele);
       if(i!=-1)
       printf("\n%d found in %d position",ele,i);
       else
       printf("\n%d is not found",ele);
       break;
       case 4://Bubble Sort
       printf("\nEnter size of array");
       scanf("%d",&size);
       a=(int *)malloc(size*sizeof(int));
       printf("\nEnter elements of an array");
       ReadArray(a,size);
       printf("\nElements of an array before sorting are");
       PrintArray(a,size);
       BubbleSort(a,size);
       printf("\nElements of an array before sorting are");
       PrintArray(a,size);
       break;
       case 5://Selection Sort
       printf("\nEnter size of array");
       scanf("%d",&size);
       a=(int *)malloc(size*sizeof(int));
       printf("\nEnter elements of an array");
       ReadArray(a,size);
       printf("\nElements of an array before sorting are");
       PrintArray(a,size);
       SelectionSort(a,size);
       printf("\nElements of an array before sorting are");
       PrintArray(a,size);
       break;
       case 6://Insertion Sort
       printf("\nEnter size of array");
       scanf("%d",&size);
       a=(int *)malloc(size*sizeof(int));
       printf("\nEnter elements of an array");
       ReadArray(a,size);
       printf("\nElements of an array before sorting are");
       PrintArray(a,size);
       InsrtionSort(a,size);
       printf("\nElements of an array after sorting are");
       PrintArray(a,size);
       break;
       case 7://Shell Sort
       printf("\nEnter size of array");
       scanf("%d",&size);
       a=(int *)malloc(size*sizeof(int));
       printf("\nEnter elements of an array");
       ReadArray(a,size);
       printf("\nElements of an array before sorting are");
       PrintArray(a,size);
       ShellSort(a,size);
       printf("\nElements of an array after sorting are");
       PrintArray(a,size);
       break;
       case 8://Quick Sort
       printf("\nEnter size of array");
       scanf("%d",&size);
       a=(int *)malloc(size*sizeof(int));
       printf("\nEnter elements of an array");
       ReadArray(a,size);
       printf("\nElements of an array before sorting are");
       PrintArray(a,size);
       QuickSort(a,0,size-1);
       printf("\nElements of an array after sorting are");
       PrintArray(a,size);
       break;
       case 9://Heap Sort
	heapsort(arr,8);
       break;
       case 10://Merge Sort
       printf("\nEnter size of array");
       scanf("%d",&size);
       a=(int *)malloc(size*sizeof(int));
       tmp=(int *)malloc(size*sizeof(int));
       printf("\nEnter elements of an array");
       ReadArray(a,size);
       printf("\nElements of an array before sorting are");
       PrintArray(a,size);
       MergeSort(a,tmp,0,size-1);
       printf("\nElements of an array after sorting are");
       PrintArray(a,size);
       break;
       case 11://Radix Sort
       printf("\nEnter size of array");
       scanf("%d",&size);
       a=(int *)malloc(size*sizeof(int));
       printf("\nEnter elements of an array");
       ReadArray(a,size);
       printf("\nElements of an array before sorting are");
       PrintArray(a,size);
       RadixSort(a,size);
       printf("\nElements of an array after sorting are");
       PrintArray(a,size);
       break;
       case 12://Exit
       break;
       default:
       printf("\nWrong choice");
       }
       if(ch!=12)
       getch();
   }while(ch!=12);
}