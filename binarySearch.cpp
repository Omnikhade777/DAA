#include <iostream>
using namespace std;

int binarySearch(int array[], int x, int LOW, int UP) {
    if (UP >= LOW) {
        int mid = (LOW +UP)/ 2;
        // If found at mid, then return it
        if (array[mid] == x)
            return mid;
        // Search the left half
        if (array[mid] > x)
            return binarySearch(array, x, LOW, mid - 1);
        // Search the right half
        return binarySearch(array, x, mid + 1, UP);
    }
    return -1; // Element not found
}

int main() {
    int array[50];
    
    int i,n;
    cout<<"Enter size of array:\n";
    cin>>n;
    cout<<"Enter the elements in array:\n";
    for(i=0;i<n;i++)
        cin>>array[i];
    int x;
    cout << "Enter the element you want to search: ";
    cin >> x;
    int result = binarySearch(array, x, 0, n - 1);
    if (result == -1)
        cout << "Element not found";
    else
        cout << "Element is found at index " << result;
    return 0;
}
/*PS C:\Users\om.nikhade\OneDrive\Desktop\DAA> g++ binary.cpp
PS C:\Users\om.nikhade\OneDrive\Desktop\DAA> ./a.exe
Enter size of array:
5
Enter the elements in array:
2   
3
5
9
11
Enter the element you want to search: 5
Element is found at index 2
PS C:\Users\om.nikhade\OneDrive\Desktop\DAA> ./a.exe
Enter size of array:
10
Enter the elements in array:
2
3
5
7
8
10 
12
15
18
20
Enter the element you want to search: 9
Element not found
PS C:\Users\om.nikhade\OneDrive\Desktop\DAA>*/