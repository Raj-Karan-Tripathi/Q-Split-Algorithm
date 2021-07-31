#include<stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
	int n;
	printf("Enter the maximum capacity of the array \n");
	scanf("%d", &n);
	int i;
	
int A[n];
for(i=0;i<n;i++)
	{
		//printf("Enter the element(only number) at %d position \n",i);
		//scanf("%d", &A[i]);
		A[i]= rand();
	}

		int ele;
printf("Enter the element to search: \n");
scanf("%d", &ele);
		
	
clock_t t;
t= clock();		
int f=0;
int l=n-1;

int mid = (f+l)/2;
int mid1 = (f+mid)/2;
int mid2 = (mid+l)/2;

int back = mid-1;
int back1 = mid1-1;
int back2 = mid2-1;



//int length=(mid1/2)+1;f=0;
int c=0;

for(f=0;f<=back1 && mid1<=back  && mid<=back2 && mid2<=l;f++)

{	
  if(A[f] == ele){
  printf("Element found at index %d \n",f);c++;
 
  }
       
  if(A[mid] == ele)
   {
    printf("Element found at index %d\n",mid);c++;
   }
   

  if(A[mid1] == ele)
   {
    printf("Element found at index %d\n",mid1);c++;
   }
          
  if(A[mid2] == ele)
   {
     printf("Element found at index %d\n",mid2);c++;
     
    }

  if(A[back] == ele)
   {
         printf("Element found at index %d\n",back);c++;
         
    }
	
  if(A[back1] == ele)
{
printf("Element found at index %d\n",back1);c++;

}

  if(A[back2] == ele)
{
printf("Element found at index %d\n",back2);c++;

}
 
  if(A[l] == ele)
{
printf("Element found at index %d\n",l);c++;
}

mid++;
mid1++;
mid2++;
back--;
back1--;
back2--;
l--; 

}
if(c==0)
{
	printf("Element not found in the array \n");
	t=clock() - t;
	double time_taken = 00;
   time_taken = ((double)t)/CLOCKS_PER_SEC;
printf("it took %f seconds to execute \n", time_taken); 
exit(1);
}
t=clock() - t;
double time_taken = 00;
time_taken = ((double)t)/CLOCKS_PER_SEC;
printf("it took %f seconds to execute \n", time_taken);
exit(0);
}
