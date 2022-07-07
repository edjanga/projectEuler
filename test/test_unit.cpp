#include "acutest.h"
#include "functions.h"

void test_isPrime(void){
    TEST_CHECK_(isPrime(2)==true, "isPrime(%d)==%d", 2,true);
}

TEST_LIST = {
    {"bool isPrime(const unsigned int& n)", test_isPrime},
    {0}
};
