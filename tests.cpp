#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "caesar.h"
#include "decrypt.h"
#include "vectorutilities.h"
#include <cmath>

// add your tests here
TEST_CASE("Task B: shiftChar")
{
   CHECK(shiftChar('W', 5) == 'B');
   CHECK(shiftChar('!', 5) == '!');
   CHECK(shiftChar('a', 10) == 'k');
   CHECK(shiftChar('z', 2) == 'b');

   CHECK(shiftChar('B', -5) == 'W');
   CHECK(shiftChar('k', -10) == 'a');
   CHECK(shiftChar('b', -2) == 'z');
}

TEST_CASE("Task B: encryptCaesar")
{
   CHECK(encryptCaesar("Way to Go!", 5) == "Bfd yt Lt!");
   CHECK(encryptCaesar("", 1) == "");
   CHECK(encryptCaesar("Bfd yt Lt!", -5) == "Way to Go!");
}

TEST_CASE("Task D: decryptCaesar")
{
   CHECK(decryptCaesar("Bfd yt Lt!", 5) == "Way to Go!");
   CHECK(decryptCaesar("", 1) == "");
}

TEST_CASE("vectorutilities - calculateDistance")
{
   double arr1[] = {2, 4};
   double arr2[] = {8, 16};

   CHECK(calculateDistance(arr1, arr2, 2) == sqrt(180));

   double arr3[] = {1, 2, 4, 8};
   double arr4[] = {16, 32, 64, 128};

   CHECK(calculateDistance(arr3, arr4, 4) == sqrt(19125));
}