#include <iostream>

int main() {
    int n; // The size of the array
    std::cout << "Enter the size of the array: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Invalid array size. Exiting." << std::endl;
        return 1;
    }

    // Dynamically allocate an integer array of size 'n'
    int* dynamicArray = new int[n];

    // Check if memory allocation was successful
    if (dynamicArray == nullptr) {
        std::cout << "Memory allocation failed. Exiting." << std::endl;
        return 1;
    }

    // Initialize the array elements
    for (int i = 0; i < n; i++) {
        dynamicArray[i] = i * 2;
    }


      // Print the array elements
    std::cout << "Array elements before resizing:" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << dynamicArray[i] << " ";
    }
    


   // The size of the array
    std::cout << "Enter the size of array to resize it :  ";
    std::cin >> n;


 // Dynamically allocate an integer array of size 'n'
    dynamicArray = new int[n];

    // Check if memory allocation was successful
    if (dynamicArray == nullptr) {
        std::cout << "Memory allocation failed. Exiting." << std::endl;
        return 1;
    }

    // Initialize the array elements
    for (int i = 0; i < n; i++) {
        dynamicArray[i] = i * 2;
    }
    // Print the array elements
    std::cout << "Array elements:" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << dynamicArray[i] << " ";
    }

    // Deallocate the dynamically allocated memory
    delete[] dynamicArray;

    return 0;
}
