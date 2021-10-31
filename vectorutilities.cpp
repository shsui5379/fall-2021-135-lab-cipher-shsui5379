/**
 * Utilities for working with the array-vectors in this lab
 * */

#include "vectorutilities.h"
#include <cmath>

/**
 * Calculates the distance between 2 supplied vectors
 * 
 * @param vector1  The first vector
 * @param vector2  The second vector
 * @param size  The size of the 2 vectors
 * @returns  The distance between the 2 vectors
 * */
double calculateDistance(double vector1[], double vector2[], int size)
{
    double sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += pow(vector1[i] - vector2[i], 2);
    }

    return sqrt(sum);
}