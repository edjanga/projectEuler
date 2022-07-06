#ifndef PAGE1_H
#define PAGE1_H
#include <map>
#include "functions.h"

#pragma once

class Solutions{

    public:
        Solutions();
        ~Solutions();
        Functions getFunctionsObj();
        void id1(const unsigned int& num_id1);
        int fibNumberModified(const int& n); // Method needed to solve other problems.
        void id2(const long int& num_id2);
        void id3(const long int& num_id3);
        void id5(const unsigned int& lower_bound,const unsigned int& upper_bound);
        void id6(const unsigned int& lower_bound,const unsigned int& upper_bound);
        void id7(const long int& num_id7);
        void id10(const unsigned int& id10);

    private:
        // Unique copy across all class instances
        static Functions functions_obj;
};

#endif