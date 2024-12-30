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



// Output:      
// Program to read two 3x3 matrices and add them.

// Umesh Patel
// Enrollment Number: 0126AL231140
// Enter the number of rows and columns of the matrix: 3 3
// Enter the elements of the first matrix:
// Enter element 1,1: 1
// Enter element 1,2: 2
// Enter element 1,3: 3
// Enter element 2,1: 4
// Enter element 2,2: 5
// Enter element 2,3: 6
// Enter element 3,1: 7
// Enter element 3,2: 8
// Enter element 3,3: 9
// Enter the elements of the second matrix:
// Enter element 1,1: 9
// Enter element 1,2: 8
// Enter element 1,3: 7
// Enter element 2,1: 6
// Enter element 2,2: 5
// Enter element 2,3: 4
// Enter element 3,1: 3
// Enter element 3,2: 2
// Enter element 3,3: 1
// The sum of the two matrices is:
// 10 10 10
// 10 10 10
// 10 10 10

