/**
 * Author: Steven Hsui
 * Course: CSCI 135
 * Instructor: Mike Zamansky
 * Assignment: Cipher lab
 * 
 * Caesar cipher encryption
 * */

#include <iostream>
#include "caesar.h"

/**
 * Shifts `c` by `rshift`. 
 * Preserves the casing. 
 * Doesn't affect non-alphabets.
 * 
 * @param c  The character to shift
 * @param rshift  The amount to shift by
 * @returns  The resulting character
 * */
char shiftChar(char c, int rshift)
{
   if (!isalpha(c))
   {
      return c;
   }

   if ((c <= 90 && c + rshift > 90) || (c <= 122 && c + rshift > 122))
   {
      return c + rshift - 26;
   }

   if ((c >= 65 && c + rshift < 65) || (c >= 97 && c + rshift < 97))
   {
      return c + rshift + 26;
   }

   return c + rshift;
}

/**
 * Encrypts `plaintext` using Caesar cipher
 * 
 * @param plaintext  The plaintext to encrypt
 * @param rshift  The shift
 * @returns  The encrypted text
 * */
std::string encryptCaesar(std::string plaintext, int rshift)
{
   for (int i = 0; i < plaintext.length(); i++)
   {
      plaintext[i] = shiftChar(plaintext[i], rshift);
   }
   return plaintext;
}