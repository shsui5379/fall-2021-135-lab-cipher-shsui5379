/**
 * Author: Steven Hsui
 * Course: CSCI 135
 * Instructor: Mike Zamansky
 * Assignment: Cipher lab
 * 
 * Decryption for Caesar
 * */

#include <iostream>
#include "decrypt.h"
#include "caesar.h"

/**
 * Decrypts text encrypted with Caesar algorithm
 * 
 * @param ciphertext  The text to decrypt
 * @param rshift  The shift to decrypt with
 * @returns  Decrypted text
 * */
std::string decryptCaesar(std::string ciphertext, int rshift)
{
    return encryptCaesar(ciphertext, -1 * rshift);
}
