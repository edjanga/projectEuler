#ifndef PAGE1_H
#define PAGE1_H
#include <map>
#pragma once

class Solutions{
    public:
        Solutions();
        ~Solutions();
        void id1();
        int fibNumber(unsigned int& n, std::map<int,int>& memo = std::map<int,int>()); // Method needed to solve other problems.
        //void id2();
};

#endif