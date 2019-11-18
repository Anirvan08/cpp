#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
int A[1000],N,c,max=0,min=0,p=0;
float sum=0,avg=0;
cout<<" Enter the no of elements in array:\n";
cin>>N;
cout<<"\nEnter  the elements of array :\n";
for( int i=0;i<N;i++)
cin>>A[i];
start:
cout<<" \n1. Print Even valued Element.";
cout<<" \n2. Print Odd valued Elemets.";
cout<<" \n3. Print Sum and Average of Elements.";
cout<<" \n4. Print Max. and Min. valued Elements.";
cout<<" \n5. Remove  Duplicate Elements.";
cout<<" \n6. Print Array in Reverse Order.";
cout<<" \n7. To Re-enter Array Elements.";
cout<<" \n8. To Quit the Program.\n";
cin>>c;
if(c==1)
{
for(int i=0;i<N;i++)
if(A[i]%2==0)
cout<<A[i]<<"  ";
}
else if(c==2)
{
for(int i=0;i<N;i++)
if(A[i]%2!=0)
cout<<A[i]<<"  ";
}
else if(c==3)
{
for(int i=0;i<N;i++)
sum+=A[i];
avg=sum/N;
cout<<" \nSum of array is:"<<sum;
cout<<" \nAverage of array is :"<<avg;
}
else if(c==4)
{    max=A[0];
    for(int i=0;i<N;i++)
    {
        if(max<A[i])
            max=A[i];
    }
    min=A[0];
    for(int i=0;i<N;i++)
    {
        if(min>A[i])
            min=A[i];
    }
    cout<<"\nLargest Element is : " << max;
    cout<<"\nSmallest element is: " << min;

}
else if(c==5)
{for(int i=0;i<N;i++)
	{	
	for(int j=i+1;j<N;j++)
	{ if(A[i]==A[j])
	{for(int k=j;k<N;k++)
	
	A[k]=A[k+1];
	N--;
	j--;
	}
}
}
cout<<"\n Array After Removing Duplicate Elements is :\n";
for(int i=0;i<N;i++)
cout<<A[i]<<" , ";

}
else if(c==6)
{int temp;
cout<<"\nArray in Reverse Order is:\n";
for( int i=0;i<N;i++)
{for(int j=i+1;j<N;j++)
{if(A[j]<A[i])
{temp=A[i];
A[i]=A[j];
A[j]=temp;
}
}
} 
cout<<"\n Array After Sorting Elements: \n";
for(int i=0;i<N;i++)
cout<<A[i]<<" ";
cout<<"\n Array in Reverse order Is:\n";
for(int i=N-1;i>0;i--)
cout<<A[i]<<"  ";
}
else if(c==7)
{int s;
cout<<"\n Enter the number of Elements of Array\n";
cin>>s;
cout<<"\nEnter the Elements of the Array";
for(int j=0;j<s;j++)
cin>>A[j];
}
else if(c==8)
exit(0);
cout<<endl;
cout<<"\nPress any number key to do it again:\n";
cin>>p;
if(p)
goto start;
return 0;
}
