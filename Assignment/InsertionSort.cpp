#include <bits/stdc++.h>
using namespace std;

void Insertion(char A[], int n)
{
    int i, j, x;
    for (i = 1; i < n; i++)
    {
        j = i - 1;
        x = A[i];
        while (j > -1 && A[j] > x)
        {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = x;
    }
}

int main()
{
    int n;

    cout << "How many elements : ";

    cin >> n;

    char A[n];

    cout << "Input array elements : ";

    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    cout << "\nUnsorted array : " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }

    cout << endl;

    Insertion(A, n);

    cout << "Sorted array : " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }

    cout << endl;

    return 0;
}