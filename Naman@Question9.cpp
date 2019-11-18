 #include<iostream>
 void triangle(int); 
using namespace std; 
int main() 
{ 
    int N;
	cout<<"Enter the number of lines\n";
	cin>>N; 
    triangle(N); 
    return 0; 
}
void triangle(int n) 
{  
    int k=2*n-2;
    for (int i=0; i<n; i++) 
    {
        for (int j=0; j<k; j++) 
        cout <<" "; 
        k=k-1;
        for (int j=0; j<=i; j++ ){
        cout << "* "; 
        } cout<<"\n"; 
} }
