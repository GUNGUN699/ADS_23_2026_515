#include <iostream>
using namespace std;

void MergeArray(int arr1[], int arr2[], int n1, int n2)
{
    int merge[n1 + n2];

    // Copy first array
    for (int i = 0; i < n1; i++)
    {
        merge[i] = arr1[i];
    }

    // Copy second array
    for (int i = 0; i < n2; i++)
    {
        merge[n1 + i] = arr2[i];
    }

    // Print merged array
    cout << "Merged Array: ";
    for (int i = 0; i < n1 + n2; i++)
    {
        cout << merge[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr1[5] = {1, 8, 5, 7, 9};
    int arr2[5] = {3, 5, 9, 2, 6};

    MergeArray(arr1, arr2, 5, 5);

    return 0;
}