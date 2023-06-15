#include <iostream>
#include<cstdlib> 
using namespace std;

void reverseArray(int* arr, int size) {
    int start = 0;
    int end = size - 1;

    while (start < end) {
        int temp = *(arr + start);
        *(arr + start) = *(arr + end);
        *(arr + end) = temp;

        ++start;
        --end;
    }
}

int main() {
    const int size = 5;
    int arr[size] = { 1, 2, 3, 4, 5 };

    reverseArray(arr, size);

    cout << "Reversed array: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    system("pause>nul");
    return 0;
}
