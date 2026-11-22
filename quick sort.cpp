#include <iostream>
using namespace std;

void quickSort(int a[], int low, int high) {
    int i = low, j = high;
    int pivot = a[(low + high) / 2];

    while (i <= j) {
        while (a[i] < pivot)
            i++;
        while (a[j] > pivot)
            j--;

        if (i <= j) {
            swap(a[i], a[j]);
            i++;
            j--;
        }
    }

    if (low < j)
        quickSort(a, low, j);
    if (i < high)
        quickSort(a, i, high);
}

int main() {
    int n, a[100];

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    quickSort(a, 0, n - 1);

    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}
