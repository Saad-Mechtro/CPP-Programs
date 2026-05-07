#include<iostream>
#include<cmath>
using namespace std;

// Function to calculate standard deviation
double stdev(double x[], int n)
{
    double sum = 0;
    double mean;
    double sq_sum = 0;

    // Calculate Mean
    for(int i = 0; i < n; i++)
    {
        sum += x[i];
    }

    mean = sum / n;

    // Calculate squared differences
    for(int i = 0; i < n; i++)
    {
        sq_sum += (x[i] - mean) * (x[i] - mean);
    }

    // Calculate standard deviation
    double sd = sqrt(sq_sum / n);

    return sd;
}

int main()
{
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    double array[100];

    cout << "Enter values:\n";

    for(int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    double result = stdev(array, n);

    cout << "\nStandard Deviation = " << result << endl;

    return 0;
}
