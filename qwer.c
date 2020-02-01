#include<stdio.h>
#include<time.h>
#include<sys/time.h>
#include<sys/resource.h>

void qs(int a[],int low,int high);
int parti(int a[],int low,int high);
void swap(int *a, int *b);

int main()
{
 struct timeval tv1,tv2;
 int n,a[10],i=0;
printf("Enter number of elements\n");
fflush(stdout);
 scanf("%d",&n);
 printf("Enter elements\n");
 for(i=0;i<6;i++)
 {
printf("hello");
	scanf("%d",&a[i]);
	//i++;
 }
 gettimeofday(&tv1,NULL);
 qs(a,0,n);
 gettimeofday(&tv2,NULL);
 printf("After sorting\n");
 for(i=0;i<n;i++)
 printf("\t%d\t",a[i]);
 printf("Time usage=%f microsec\n",(double)(tv2.tv_usec-tv1.tv_usec));
return 0;
}
void swap(int *a,int *b)
{
	int t=*a;
 	*a=*b;
 	*b=t;
}

void qs(int a[],int low,int high)
{
int p;
 if(low<high)
   p=parti(a,low,high);
	qs(a,low,(p-1));
	qs(a,(p+1),high);
}

int parti(int a[],int low,int high)
{
 int p=a[low];
 int i=1,j=high+1;
	 while(i<j)
{
		for(i=1;a[i]>p;i++)
		{
		 for(j=high;a[j]<p;j--)
		 {
		   swap(&a[i],&a[j]);
			}
		}
				
}
	swap(&a[i],&a[j]);
	swap(&p,&a[j]);

return (i+1);
} 

