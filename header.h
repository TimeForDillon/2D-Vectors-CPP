#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <vector>

using namespace std;

/*******************************************************************************
* matrixFill
* This function inputs a matrix from the user.
* - returns nothing.
*******************************************************************************/
void matrixFill(vector< vector<int> > &v);  // IN - 2D Vector

/*******************************************************************************
* displayMatrix
* This prints a 2D vector.
* - returns nothing.
*******************************************************************************/
void displayMatrix(const vector< vector<int> > &v); // IN - 2D Vector

/*******************************************************************************
* matrixAddition
* This adds two matrices (2D vectors) and stores the value in a third.
* - returns nothing.
*******************************************************************************/
void matrixAddition(const vector< vector<int> > &a, // IN - 1st 2D Vector
                    const vector< vector<int> > &b, // IN - 2nd 2D Vector
                    vector< vector<int> > &c);      // IN - 3rd 2D Vector

/*******************************************************************************
* matrixMultiplication
* This multiplies two matrices (2D vectors) and stores the value in a third.
* - returns nothing.
*******************************************************************************/
void matrixMultiplication(const vector< vector<int> > &a, // IN - 1st 2D Vector
                          const vector< vector<int> > &b, // IN - 2nd 2D Vector
                          vector< vector<int> > &c);      // IN - 3rd 2D Vector


#endif // HEADER_H
