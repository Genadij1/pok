#include <iostream>
#include <cstdlib>  
using namespace std;

void copyArray(int* source, int* destination, int size) {
    for (int i = 0; i < size; ++i) {
        *(destination + i) = *(source + i);
    }
}

int main() {
    const int size = 5;
    int source[size] = { 1, 2, 3, 4, 5 };
    int destination[size];

    copyArray(source, destination, size);

    cout << "Copied array: ";
    for (int i = 0; i < size; ++i) {
        cout << destination[i] << " ";
    }
    cout << endl;

    system("pause>nul");
    return 0;
}
