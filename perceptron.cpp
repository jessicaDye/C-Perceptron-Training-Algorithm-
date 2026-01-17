    /* Perceptron Algorithm Implementation
    By Jessica Dye, Niagara University  */
    
    #include <iostream>
    #include <vector>
    #include <cstdlib>
    #include <ctime>
    #include <cmath>
    #include <iomanip>
    #include <fstream>
    #include <string>
    #include <sstream>

    using namespace std;


    class Perceptron {
    private:
        vector<double> weights;
        double bias;
        double learningRate;

        public:
        Perceptron(int inputSize, double lr) {
            bias = 0.0;
            learningRate = lr;

            srand(time(0));
            weights.resize(inputSize);
            for (int i = 0; i < inputSize; i++) {
                weights[i] = (rand() % 200 - 100) / 100.0; // Random weights between -1 and 1

            }
        }

        int predict(const vector<double> &inputs) {
            double sum = bias;
            for (int i = 0; i <weights.size(); i++) {
                sum += weights[i] * inputs[i];
            }
        }
        return (sum >= 0) ? 1 : 0;
           

    
        
    }

int main() {

    cout<<"Perceptron Algorithm Source Code" << endl;

    return 0;
}
