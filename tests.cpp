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

   std::vector<double> vec5 = {};
   std::vector<double> vec6 = {};

   CHECK(calculateDistance(vec5, vec6) == 0);
}

TEST_CASE("vectorutilites - generateVectorFromFrequency")
{
   std::vector<double> vec1 = {3 / 43., 0, 1 / 43., 7 / 43., 6 / 43., 0, 2 / 43., 1 / 43., 4 / 43., 0, 0, 2 / 43., 0, 2 / 43., 5 / 43., 0, 0, 4 / 43., 0, 4 / 43., 0, 0, 1 / 43., 0, 1 / 43., 0};

   std::vector<double> vec2 = generateVectorFromFrequency("Little Red Riding Hood decided to wear orange today.");

   CHECK(vec1 == vec2);

   std::vector<double> vec3(26);

   for (int i = 0; i < vec3.size(); i++)
   {
      vec3.at(i) = 0;
   }

   std::vector<double> vec4 = generateVectorFromFrequency(".");

   CHECK(vec3 == vec4);
}