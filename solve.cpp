/**
 * Solving encrypted ciphers
 * */

#include <iostream>
#include <vector>
#include "solve.h"
#include "decrypt.h"
#include "vectorutilities.h"

/**
 * Attempts to decrypt an English message encrypted using Caesar cipher.
 * 
 * @param encrypted_string  The encrypted string
 * @return  The decrypted string
 * */
std::string solve(std::string encrypted_string)
{
    const std::vector<double> TARGET_FREQUENCY = {0.08167, 0.01492, 0.02782, 0.04253, 0.12702, 0.02228, 0.02015, 0.06094, 0.06966, 0.00153, 0.00772, 0.04025, 0.02406, 0.06749, .07507, 0.01929, 0.00095, 0.05987, 0.06327, 0.09056, 0.02758, 0.00978, 0.02360, 0.00150, 0.01974, 0.00074};

    double shortestDistance = calculateDistance(generateVectorFromFrequency(encrypted_string), TARGET_FREQUENCY);
    std::string closestString = encrypted_string;

    for (int i = 1; i < TARGET_FREQUENCY.size(); i++)
    {
        std::string currentString = decryptCaesar(encrypted_string, i);
        double currentDistance = calculateDistance(generateVectorFromFrequency(currentString), TARGET_FREQUENCY);

        if (currentDistance < shortestDistance)
        {
            shortestDistance = currentDistance;
            closestString = currentString;
        }
    }

    return closestString;
}