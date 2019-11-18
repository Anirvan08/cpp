#include<iostream>

using namespace std;

void reverse(int*ptr)
{int *p=ptr+4;
for(int i=0;i<2;i++)
 {   int temp=*ptr;
 	*(ptr)=*(p);
 	*(p)=temp;
 	ptr++;
 	p--;
 }
 
 
}
int main()


{
	
int ar[5]={1,2,3,4,5};
	int *ptr=ar;
	cout<<"\n the original array is : ";
	for(int i=0;i<=4;i++)
     cout<<*(ptr+i)<<" ";
	reverse(ar);
	cout<<"\n the reversed array is : ";
	for(int i=0;i<=4;i++)
     cout<<*(ptr+i)<<" ";	
    return 0;
}

