```cpp

// Program to find highest and lowest element in an array.

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Umesh Patel\nEnrollment Number: 0126AL231140\n";
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }
    int max = arr[0], min = arr[0];
    for(int i = 1; i < n; i++)
    {
        if(arr[i] > max)
            max = arr[i];
        if(arr[i] < min)
            min = arr[i];
    }
    cout << "The highest element in the array is: " << max << endl; 
    cout << "The lowest element in the array is: " << min << endl;
    return 0; 
}

```

---
<h3>output image </h3>

![image ](https://github.com/UmeshCode1/DSA_LAB_COLLEGE/blob/708cc5d24dfa5e1d0ad081cfa7e76d7e88ed8a49/Program_2/Screenshot%202024-12-31%20095915.png)