#include <bits/stdc++.h> 
using namespace std; 
  
void swap(int *first, int *last)  
{  
    int temp = *first;  
    *first = *last;  
    *last = temp;  
}  
  
void selectionSort(int arr[], int n)  
{  
    int i, j, min_idx;  
  
    // One by one move boundary of unsorted subarray  
    for (i = 0; i < n-1; i++)  
    {  
        // Find the minimum element in unsorted array  
        min_idx = i;  
        for (j = i+1; j < n; j++)  
        if (arr[j] < arr[min_idx])  
            min_idx = j;  
  
        // Swap the found minimum element with the *first element  
        swap(&arr[min_idx], &arr[i]);  
    }  
}  
  
/* Function to print an array */
void printArray(int arr[], int size)  
{  
    int i;  
    for (i=0; i < size; i++)  
        cout << arr[i] << " ";  
    cout << endl;  
}  
  
// Driver program to test above functions  
int main()  
{  

int i, k[30];
int j,small, big;
cout<<"Enter the number of items you wish to demonstrate selection sort with\n"<<endl;
//for (i=0; i<j; i++)
  cin >>j;

cout<<"Enter the items you wish to demonstrate selection sort with\n"<<endl;
for (int t =0; t<j; t++)
  cin >>k[t];
    
  
  cout<<"You have " <<j <<" elements in your array"<<endl;


    selectionSort(k, j);  
    cout << "Sorted array: \n";  
    printArray(k, j);  
    return 0;  
}  
