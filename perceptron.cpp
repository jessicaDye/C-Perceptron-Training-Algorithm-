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
                //safety check
            if (inputs.size() != weights.size()) {
        cerr << "Input size mismatch!" << endl;
        exit(1); //stop execution
                        
            double sum = bias;
            for (int i = 0; i <weights.size(); i++) {
                sum += weights[i] * inputs[i];
            }
        }
        return (sum >= 0) ? 1 : 0;

         void train(const vector<vector<double>> &trainingData, const vector<int> &labels, int epochs) {
            for (int epoch = 0; epoch < epochs; epoch++) {
                for (size_t i = 0; i < trainingData.size(); i++) {
                    int prediction = predict(trainingData[i]);
                    int error = labels[i] - prediction;

                    // Update weights and bias
                    for (size_t j = 0; j < weights.size(); j++) {
                        weights[j] += learningRate * error * trainingData[i][j];
                    }
                    bias += learningRate * error;
                }
            }
        }
           

    
        
    };

int main() {

    cout<<"Perceptron Algorithm Source Code" << endl;

    return 0;
}
