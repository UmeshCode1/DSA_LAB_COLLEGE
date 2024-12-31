# DSA Lab Programs (Semester 3)

This repository contains my college DSA lab programs from Semester 3. Below is the list of programs included in this collection.

---

## List of Programs

| S.No | Program Description |
|------|----------------------|
| 1 | Program to input marks of 5 subjects and print the total and percentage using arrays. |
| 2 | Program to find the highest and lowest element in an array. |
| 3 | Program to read two 3×3 matrices and add them. |
| 4 | Program to create a linked list and implement insertion and deletion operations on it. |
| 5 | Program to generate the Fibonacci series using recursion. |
| 6 | Program to create a stack and implement "Push" and "Pop" operations on it. |
| 7 | Program to create a queue and implement insertion and deletion operations on it. |
| 8 | Program to create a circular queue and implement insertion and deletion operations on it. |
| 9    | Program to traverse a binary tree in:<br>  a. Pre-order<br> b. In-order<br>  c. Post-order |
| 10 | Program to implement binary search. |
| 11 | Program to implement sorting of data using:<br> a. Bubble Sort<br> b. Selection Sort<br> c. Insertion Sort |
| 12 | Program to implement a graph and traverse it using:<br>    Breadth First Search (BFS) <br>   Depth First Search (DFS) |

---

## How to Use

1. Clone the repository:
   ```bash
   git clone <https://github.com/UmeshCode1/DSA_LAB_COLLEGE.git>

---





### Connect with Me:
- **GitHub**: [github.com/Umesh.Code1](https://github.com/UmeshCode1)
- **LinkedIn**: [linkedin.com/in/UmeshPatel](https://www.linkedin.com/in/umesh-patel-5647b42a4/)
- **Email**: umesh.code1@gmail.com

---

_"Learning never stops, and neither does coding."_ 😊

---

<h1 align="center">PROGRAMS CODE AND OUTPUT PREVIEW</h1>

---
<h2.align="center">PROGRAM 1</h2>

--

```cpp

// Program to input marks of 5 subjects and print the total and percentage using arrays.

#include <iostream>
using namespace std;
int main()
{
    int marks[5], i, total = 0;
    float percentage;
    cout << "Umesh Patel\nEnrollment Number: 0126AL231140\n";
    cout << "Enter marks of 5 subjects: \n";
        for (i = 0; i < 5; i++)
    {
      cout<<"Subject "<<i+1<<": ";
      cin >> marks[i];
      total += marks[i];
    }
    percentage = (float)total / 5;
    cout << "Total marks = " << total << endl;
    cout << "Percentage = " << percentage << "%" << endl;
    return 0;
}


```
--
<h1 align="center"> Output image</h1>


![image](https://github.com/UmeshCode1/DSA_LAB_COLLEGE/blob/01a6763714c483190c5be88793fad6adedf5f20f/Program_1/Screenshot%202024-12-31%20095542.png)

---
<h2.align="center">PROGRAM 2</h2>

--
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

--

<h3 align="center">output image </h3>

![image ](https://github.com/UmeshCode1/DSA_LAB_COLLEGE/blob/708cc5d24dfa5e1d0ad081cfa7e76d7e88ed8a49/Program_2/Screenshot%202024-12-31%20095915.png)

---