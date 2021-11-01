#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <iostream>
#include <vector>
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
   std::vector<double> vec1 = {2, 4};
   std::vector<double> vec2 = {8, 16};

   CHECK(calculateDistance(vec1, vec2) == sqrt(180));

   std::vector<double> vec3 = {1, 2, 4, 8};
   std::vector<double> vec4 = {16, 32, 64, 128};

   CHECK(calculateDistance(vec3, vec4) == sqrt(19125));
}

TEST_CASE("vectorutilites - generateVectorFromFrequency")
{
   std::vector<double> vec1 = {3 / 44, 0, 1 / 44, 7 / 44, 6 / 44, 0, 2 / 44, 1 / 44, 4 / 44, 0, 0, 2 / 44, 0, 2 / 44, 5 / 44, 0, 0, 4 / 44, 0, 4 / 44, 0, 0, 1 / 44, 0, 1 / 44, 0};

   CHECK(generateVectorFromFrequency("Little Red Riding Hood decided to wear orange today.") == vec1);
}