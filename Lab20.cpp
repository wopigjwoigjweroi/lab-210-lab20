#include <iostream> 
#include <iomanip> 
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

         Chair(int l, double a[]) {

            prices = new double[SIZE]; 

            legs = l; 

            for (int i = 0; i < SIZE; i++) {

                prices[i] = a[i]; 
            } 
        }

        ~Chair() {

            delete[] prices; 
        }

        void setLegs(int l) {

            legs = 1; 
        }

        int getLegs() {

            return legs; 
        }

        void setLegs(int l) {

            legs = 1; 
        }

        int getLegs() {

            return legs; 
        }

        void setPrice(double p1, double p2, double p3) {

            prices[0] = p1; 

            prices[1] = p2;

            prices[2] = p3; 
        }

        double getAveragePrice() {

            double sum = 0; 

            for (int i = 0; i < SIZE; i++)

            sum+= prices[i]; 

            return sum / SIZE; 
        }

         void print() {

            cout << "CHAIR DATA - legs: " << legs << endl; 

            cout << "Price history: ";

            for (int i = 0; i < SIZE; i++)

            cout << "$" << fixed << setprecision(2) << prices[i] << " " << endl;

            cout << "Historical avg price: " << fixed << setprecision(2) << getAveragePrice() << endl << endl; 

        }
};

int main() {

return 0; 
}
