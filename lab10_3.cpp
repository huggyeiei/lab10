#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream source;
    source.open("score.txt");

    double sum = 0, num_2 = 0, mean = 0, standard_deviation = 0;
    int count = 0;
    string textline;

    while (getline(source, textline)) {
        double value = stod(textline);
        sum += value;
        num_2 += pow(value, 2);
        count++;
    }

    source.close();

    if (count > 0) {
        mean = sum / count;
        standard_deviation = sqrt((num_2 / count) - pow(mean, 2));
    }

    cout << "Number of data = " << count << endl;
    cout << setprecision(3);
    cout << "Mean = " << mean << endl;
    cout << "Standard deviation = " << standard_deviation << endl;

    return 0;
}
