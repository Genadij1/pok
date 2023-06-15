#include <iostream>
#include <cstdlib>
using namespace std;

void reverseCopy(int* source, int* destination, int size) {
    int* sourcePtr = source + size - 1;
    int* destPtr = destination;

    for (int i = 0; i < size; ++i) {
        *destPtr = *sourcePtr;
        --sourcePtr;
        ++destPtr;
    }
}

int main() {
    const int size = 5;
    int source[size] = { 1, 2, 3, 4, 5 };
    int destination[size];

    reverseCopy(source, destination, size);

    cout << "Reversed copy: ";
    for (int i = 0; i < size; ++i) {
        cout << destination[i] << " ";
    }
    cout << endl;

    system("pause>nil");
    return 0;
}
