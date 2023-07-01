#include "header.h"

/*******************************************************************************
* FUNCTION matrixFill
*_______________________________________________________________________________
* This function inputs a matrix from the user.
*_______________________________________________________________________________
* PRE-CONDITIONS
*  The following need previously defined values:
*       v: 2D vector that will be filled by the user input.
*
* POST-CONDITIONS
*       fills the vector with the values entered by the user.
*******************************************************************************/

void matrixFill(vector< vector<int> > &v)  // IN - 2D Vector
{
    // PROCESSING - assign user inputs to vector
    for (unsigned int i = 0; i < v.size(); i++)
    {
        for (unsigned int j = 0; j < v.at(0).size(); j++)
        {
            int num; // IN - the value being added to the matrix

            // INPUT - user input number for matrix
            cin >> num;
            // PROCESSING - assign num to matrix at current i and j
            v.at(i).at(j) = num;
        }
    }
}

/*******************************************************************************
* FUNCTION displayMatrix
*_______________________________________________________________________________
* This prints a 2D vector.
*_______________________________________________________________________________
* PRE-CONDITIONS
*  The following need previously defined values:
*       v: 2D vector that will be filled by the user input.
*
* POST-CONDITIONS
*       outputs the vector as a matrix.
*******************************************************************************/

void displayMatrix(const vector< vector<int> > &v) // IN - 2D Vector
{
    // PROECSSING - print out each element of 2D vector
    for (unsigned int i = 0; i < v.size(); i++)
    {
        for (unsigned int j = 0; j < v.at(0).size(); j++)
        {
            // OUTPUT - print element at current i and j
            cout << v.at(i).at(j) << " ";
        }
        cout << endl;
    }
}

/*******************************************************************************
* FUNCTION matrixAddition
*_______________________________________________________________________________
* This adds two matrices (2D vectors) and stores the value in a third.
*_______________________________________________________________________________
* PRE-CONDITIONS
*   The following need previously defined values:
*       a: a 2D vector which will be added to another.
*       b: a 2D vector which will be added to another.
*       c: a 2D vector which will store the sum of the first two vectors.
*
* POST-CONDITIONS
*       stores the sum of the two matrices in a third matrix.
*******************************************************************************/

void matrixAddition(const vector< vector<int> > &a, // IN - 1st 2D Vector
                    const vector< vector<int> > &b, // IN - 2nd 2D Vector
                    vector< vector<int> > &c)       // IN - 3rd 2D Vector
{
    // PROCESSING - add 2D Vector a and 2D Vector b and assign to 2D Vector c
    for (unsigned int i = 0; i < a.size(); i++)
    {
        for (unsigned int j = 0; j < a.at(0).size(); j++)
        {
            // PROCESSING - assign sum of vector a and vector b to vector c
            c.at(i).at(j) = a.at(i).at(j) + b.at(i).at(j);
        }
    }
}

/*******************************************************************************
* FUNCTION matrixMultiplication
*________________________________________________
* This multiplies two matrices (2D vectors) and stores the value in a third.
*________________________________________________
* PRE-CONDITIONS
*  The following need previously defined values:
*       x: a 2D vector which will be multiplied by another.
*       y: a 2D vector which will be multiplied by another.
*       z: a 2D vector which will store the sum of the first two vectors.
*
* POST-CONDITIONS
*       stores the product of the two matrices in a third matrix.
*******************************************************************************/

void matrixMultiplication(const vector< vector<int> > &a, // IN - 1st 2D Vector
                          const vector< vector<int> > &b, // IN - 2nd 2D Vector
                          vector< vector<int> > &c)       // IN - 3rd 2D Vector
{
    int rows = 0;       // CALC - the number of rows for new mult matrix
    int columns= 0;     // CALC - the number of columns for new mult matrix
    int number = 0;     // CALC - the number being added to the new mult matrix

    // PROCESSING - sets rows to the smaller row size of a and b
    if (a.size() < b.size())
        rows = a.size();
    else
        rows = b.size();

    // PROECSSING - sets columns to the smaller column size of a and b
    if (a.at(0).size() < b.at(0).size())
        columns = a.at(0).size();
    else
        columns = b.at(0).size();

    // PROCESSING - adds the product of a and b's current index to number
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            for (int k = 0; k < columns; k++)
            {
                number += (a.at(i).at(k) * b.at(k).at(j));
            }
            // PROCESSING - assign number to the current index of the new matrix
            c.at(i).at(j) = number;
            // PROCESSING - reset number to 0
            number = 0;
        }
    }

    // PROCESSING - erase unused rows
    if (rows < columns)
    {
        for (int i = 0; i < (columns - rows); i++)
            c.pop_back();
    }
}
