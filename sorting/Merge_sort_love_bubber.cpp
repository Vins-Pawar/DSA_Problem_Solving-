#include <iostream>
using namespace std;

void merge(int arr[], int left, int mid, int right) {
    int i, j, k;
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // create temporary arrays
    int left_arr[n1], right_arr[n2];

    // copy data to temporary arrays
    for (i = 0; i < n1; i++)
        left_arr[i] = arr[left + i];
    for (j = 0; j < n2; j++)
        right_arr[j] = arr[mid + 1 + j];

    cout << "UnSorted left array: ";
    for (int i = 0; i < n1; i++) {
        cout << left_arr[i] << " ";
    }
    cout << endl;

    cout << "UnSorted right array: ";
    for (int i = 0; i < n2; i++) {
        cout << right_arr[i] << " ";
    }
    cout << endl ;
    // merge the temporary arrays back into arr[left..right]
    i = 0; // initial index of left subarray
    j = 0; // initial index of right subarray
    k = left; // initial index of merged subarray

    while (i < n1 && j < n2) {
        if (left_arr[i] <= right_arr[j]) {
            arr[k] = left_arr[i];
            i++;
        }
        else {
            arr[k] = right_arr[j];
            j++;
        }
        k++;
    }

    // copy remaining elements of left_arr[] if any
    while (i < n1) {
        arr[k] = left_arr[i];
        i++;
        k++;
    }

    // copy remaining elements of right_arr[] if any
    while (j < n2) {
        arr[k] = right_arr[j];
        j++;
        k++;
    }

    cout << "Sorted array: ";
    for (int i = left; i < k; i++) {
        cout << arr[i] << " ";
    }
    cout << endl << endl;
}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        // sort first and second halves
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        // merge the sorted halves
        merge(arr, left, mid, right);
    }
}

int main() {
    int arr[] = { 12, 11, 13, 5, 6, 7 };
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    mergeSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
