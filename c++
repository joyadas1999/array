#include <iostream>

using namespace std;

//Question 1
void reverseArray(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void rotateArray(int arr[], int d, int n)
{
    reverseArray(arr, 0, d-1);
    reverseArray(arr, d, n-1);
    reverseArray(arr, 0, n-1);
}

//Question 2
void pushZerosToEnd(int arr[], int m)
{
    int count = 0;

    for (int i = 0; i < m; i++)
        if (arr[i] != 0)
            arr[count++] = arr[i];

    while (count < m)
        arr[count++] = 0;
}

//function to print array
 void printArray(int theArray[], int sizeOfArray) {

	for(int x = 0; x<sizeOfArray; x++) {
		cout << theArray[x] << " ";
	}
}

int main()
{
    //Test Case for Question 1
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int d = 2;

    rotateArray(arr, d, n);
    printArray(arr, n);
    cout << endl;

    //Test Case for Question 2
    int arr2[] = {1, 2, 0, 4, 3, 0, 5, 0};
    int m = sizeof(arr2) / sizeof(arr2[0]);
    pushZerosToEnd(arr2, m);
    cout << "Array after pushing all zeros to end of array: " << endl;
    printArray(arr2, m);
    return 0;
}
