#include <iostream>
#include <iomanip>

using namespace std;

int acccalc()
{
    int weight;
    int height;

    cout << "Enter your weight in pounds: ";
    cin >> weight;

    cout << "Enter your height in inches: ";
    cin >> height;

    double bmi = 703.0 * weight / (height * height);

    cout << fixed << setprecision(1); 

    if (bmi <= 18.5) {
        cout << "Your BMI is " << bmi << " and you are underweight";
        cout << endl;
    }

    else if (bmi > 18.5 && bmi <= 24.9) {
        cout << "Your BMI is " << bmi << " and you are normal";
        cout << endl;
    }

    else if (bmi > 24.9 && bmi <= 29.9) {
        cout << "Your BMI is " << bmi << " and you are overweight";
        cout << endl;
    }

    else if (bmi >= 30) {
        cout << "Your BMI is " << bmi << " and you are obese";
        cout << endl;
    }

    return 0;
}