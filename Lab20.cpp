#include <iostream> 
#include <cstdlib> 
using namespace std; 

const int SIZE = 3; 

class Chair {

    private: 

        int legs; 
        double *prices; 

    public:

        Chair() {

            legs = (rand() % 2) + 3; 

            prices = new double[SIZE]; 

            for (int i = 0; i < SIZE; i++) {

                prices[i] = (rand() % (9999 - 100 + 1) + 10000) / 100.0; 
            } 
        }
};
