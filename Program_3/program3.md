```CPP
// Program to read two 3x3 matrices and add them.

#include <iostream>
using namespace std;
int main(){
int m,n,i,j;
cout<<"Umesh Patel\nEnrollment Number: 0126AL231140\n";
cout<<"Enter the number of rows and columns of the matrix: ";
cin>>m>>n; 
int a[m][n],b[m][n],c[m][n];
cout<<"Enter the elements of the first matrix: \n";
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
cout<<"Enter element "<<i+1<<","<<j+1<<": ";
cin>>a[i][j];
}
}
cout<<"Enter the elements of the second matrix: \n";
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
cout<<"Enter element "<<i+1<<","<<j+1<<": ";
cin>>b[i][j];
}
}
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
c[i][j]=a[i][j]+b[i][j];
}
}

cout<<"The sum of the two matrices is: \n"; 
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
cout<<c[i][j]<<" ";
}
cout<<endl;
}
return 0;
}

```
---
<h3>Output image </h3>

![image](https://github.com/UmeshCode1/DSA_LAB_COLLEGE/blob/01d2b46b353c59e37cff76e59b2120fa7d3a1bac/Program_3/Screenshot%202024-12-31%20100412.png)

