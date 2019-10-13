#include "add.h"
#include <gtest/gtest.h>

int main() {
    testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}

int add(int firstNumber,int secondNumber){
    return firstNumber+secondNumber;
}