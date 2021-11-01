/**
 * Utilities for working with the vectors in this lab
 * */

#include <iostream>
#include <vector>
#include "vectorutilities.h"
#include <cmath>

/**
 * Calculates the distance between 2 supplied vectors
 * 
 * @param vector1  The first vector
 * @param vector2  The second vector
 * @returns  The distance between the 2 vectors
 * */
double calculateDistance(std::vector<double> vector1, std::vector<double> vector2)
{
    double sum = 0;

    for (int i = 0; i < vector1.size(); i++)
    {
        sum += pow(vector1.at(i) - vector2.at(i), 2);
    }

    return sqrt(sum);
}

/**
 * Vector based on the frequency of alphabetical characters in `string`
 * 
 * @param string  The string to calculate frequency from
 * @returns  Vector that represents a vector of the frequencies
 * */
std::vector<double> generateVectorFromFrequency(std::string string)
{
    //initializations and declarations
    const int CHAR_SET_SIZE = 26;
    std::vector<double> frequencies(CHAR_SET_SIZE);
    int numberOfCharacters = 0;

    for (int i = 0; i < CHAR_SET_SIZE; i++)
    {
        frequencies.at(i) = 0;
    }

    //counting
    for (int i = 0; i < string.length(); i++)
    {
        char current = string[i];

        if (isalpha(current))
        {
            numberOfCharacters++;
            current = std::tolower(current);
            frequencies.at(current - 97)++;
        }
    }

    //proportions
    for (int i = 0; i < CHAR_SET_SIZE; i++)
    {
        frequencies.at(i) /= numberOfCharacters;
    }

    return frequencies;
}