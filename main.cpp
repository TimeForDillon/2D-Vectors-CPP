/*******************************************************************************
 * AUTHOR        : Dillon Welsh, David Berry
 * LAB08         : 2D VECTORS
 * CLASS         : CS3A
 * SECTION       : 71206
 * DUE DATE      : 09/26/2020
 ******************************************************************************/

#include "header.h"

/*******************************************************************************
* 2D Vectors
*_______________________________________________________________________________
* This program adds and multiplies matrices in the form of 2D vectors
* (vector of vectors).
*_______________________________________________________________________________
* INPUT:
*   a: a 2D vector enered by the user.
*   b: a 2D vector enered by the user.
*   x: a 2D vector enered by the user.
*   y: a 2D vector enered by the user.
*
* OUTPUT:
*  a: a 2D vector enered by the user.
*  b: a 2D vector enered by the user.
*  c: the sum of vectors a and b.
*  x: a 2D vector enered by the user.
*  y: a 2D vector enered by the user.
*  z: The product of vectors x and y.
*******************************************************************************/

int main()
{
    int rows;       // CALC & IN - number of rows in a given vector
    int columns;    // CALC & IN - number of columns in a given vector
    int rows2;      // CALC & IN - number of rows in a given vector
    int columns2;   // CALC & IN - number of columns in a given vector

    // INPUT - user input rows and columns
    cout << "Enter the number of rows and columns of the matrices to add: "
         << endl;
    cin >> rows >> columns;

    // PROECSSING - initialize 2D vectors
    vector<vector<int>> a(rows, vector<int>(columns));
    // CALC & IN - 2D vector which will be added to another
    vector<vector<int>> b(rows, vector<int>(columns));
    // CALC & IN - 2D vector which will be added to another
    vector<vector<int>> c(rows, vector<int>(columns));
    // CALC & OUT - 2D vector which will store the sum of a and b

    // INPUT - user populates matrix A
    cout << "Enter matrix A: \n";
    // matrixFill - collects user input and assigns to 2D vector
    matrixFill(a);

    // OUTPUT - outputs users matrix
    cout << "For matrix A you entered: \n";
    // displayMatrix - prints out 2D vector
    displayMatrix(a);

    // INPUT - user populates matrix B
    cout << "Enter matrix B: \n";
    // matrixFill - collects user input and assigns to 2D vector
    matrixFill(b);

    // OUTPUT - outputs users matrix
    cout << "For matrix B you entered: \n";
    // displayMatrix - prints out 2D vector
    displayMatrix(b);

    // matrixAddition - adds two 2D vectors and stores in last 2D vector
    matrixAddition(a, b, c);

    // OUTPUT - outputs new sum matrix
    cout << "sum of A and B is: \n";
    // displayMatrix - prints out 2D vector
    displayMatrix(c);
    cout << endl << endl;

    // OUTPUT - multiplication
    cout << "Now for multiplication.\n";

    // PROCESSING - execute until the # of columns in a = # of rows in b
    do
    {
        // INPUT - user enters number of rows and columns for two matricies
        cout << "Enter the number of rows and columns of matrix A: \n";
        cin >> rows >> columns;
        cout << "Enter the number of rows and columns of matrix B: \n";
        cin >> rows2 >> columns2;

        // OUTPUT - if the # of columns in a = # of rows in b
        if (columns != rows2)
            cout << "The number of columns of matrix A must be the same "
                    "as the number of rows of matrix B.\n";
    } while (columns != rows2);

    // PROECSSING - initialize 2D vectors
    vector<vector<int>> x(rows, vector<int>(columns));
    // CALC & IN - 2D vector
    vector<vector<int>> y(rows2, vector<int>(columns2));
    // CALC & IN - 2D vector
    vector<vector<int>> z(rows2, vector<int>(columns2));
    // CALC & OUT - sum of 2 2D vectors


    // INPUT - user populates matrix A
    cout << "Enter matrix A: \n";
    // matrixFill - collects user input and assigns to 2D vector
    matrixFill(x);

    // OUTPUT - outputs users matrix
    cout << "For matrix A you entered: \n";
    // displayMatrix - prints out 2D vector
    displayMatrix(x);

    // INPUT - user populates matrix B
    cout << "Enter matrix B: \n";
    // matrixFill - collects user input and assigns to 2D vector
    matrixFill(y);

    // OUTPUT - outputs users matrix
    cout << "For matrix B you entered: \n";
    // displayMatrix - prints out 2D vector
    displayMatrix(y);

    // matrixMultiplication - stores the product of 2 2D vectors in a 2D vector
    matrixMultiplication(x, y, z);

    // OUTPUT - output the product of two 2D vectors
    cout << "product of A and B is: " << endl;
    // displayMatrix - prints out 2D vector
    displayMatrix(z);
}
