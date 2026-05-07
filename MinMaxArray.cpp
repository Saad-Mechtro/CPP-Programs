#include<iostream>
using namespace std;

// Function to find minimum and maximum values
void get_value(float &min, float &max, float array[], int n)
{
    min = array[0];
    max = array[0];

    for(int i = 1; i < n; i++)
    {
        if(array[i] < min)
        {
            min = array[i];
        }

        if(array[i] > max)
        {
            max = array[i];
        }
    }
}

int main()
{
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    float array[100];

    cout << "Enter values:\n";

    for(int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    float min, max;

    get_value(min, max, array, n);

    cout << "\nMaximum Value = " << max << endl;

    cout << "Minimum Value = " << min << endl;

    return 0;
}
