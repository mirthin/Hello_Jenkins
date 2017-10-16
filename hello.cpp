//File: hello.cpp
#include "gtest/gtest.h"
#include <iostream>
using namespace std;


double m_pow(double in) {
  return in*in;
}

TEST (SquareRootTest, PositiveNos) { 
    EXPECT_EQ (4.0, m_pow (2));
    EXPECT_EQ (9.0, m_pow (3));
    EXPECT_EQ (4.0, m_pow (-2));
}


int main(int argc, char **argv) {
{
  cout << "Hello, World\n";
  cout << "Hello, Jenkins\n";

  cout << "I have successfully built and run\n";
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
  
  return 0;
}
