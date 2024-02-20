# Array Functions

This repository contains a C++ class named `Array` that provides functionality for handling matrices, including setting elements, transposing matrices, and printing submatrices.

## Array Class Functions

1. **Constructor:**
   - Initializes the matrix by reading data from a file named "matrix.txt". The file contains the size of the matrix followed by its elements.

2. **setElement:**
   - Sets the value of a specific element in the matrix at position (i, j).

3. **getElement:**
   - Retrieves the value of a specific element in the matrix at position (i, j).

4. **printMatrix:**
   - Prints the entire matrix.

5. **transpose:**
   - Transposes the matrix.

6. **printSubMatrix:**
   - Prints a submatrix specified by the row and column range.

## Example Usage

```cpp
#include <iostream>
using namespace std;

template <class T>
int main()
{
    Array<int> a1; // Creates an instance of the Array class

    // Sets an element at position (2, 3) to 5
    a1.setElement(2, 3, 5);

    // Transposes the matrix
    a1.transpose();

    // Prints the transposed matrix
    a1.printMatrix();

    // Transposes the matrix back to its original form
    a1.transpose();

    // Prints the original matrix
    a1.printMatrix();

    return 0;
}
