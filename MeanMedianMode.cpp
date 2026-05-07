#include<iostream>
using namespace std;

// Function to input array
void input(int array[], int n)
{
    cout << "Enter values:\n";

    for(int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
}

// Function to calculate Mean
float mean(int array[], int n)
{
    int sum = 0;

    for(int i = 0; i < n; i++)
    {
        sum += array[i];
    }

    return (float)sum / n;
}

// Function to sort array
void sort(int array[], int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(array[i] > array[j])
            {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}

// Function to calculate Median
float median(int array[], int n)
{
    sort(array, n);

    if(n % 2 == 0)
    {
        return (array[n/2] + array[(n/2)-1]) / 2.0;
    }

    else
    {
        return array[n/2];
    }
}

// Function to calculate Mode
int mode(int array[], int n)
{
    int Mode = array[0];
    int maxCount = 0;

    for(int i = 0; i < n; i++)
    {
        int count = 0;

        for(int j = 0; j < n; j++)
        {
            if(array[i] == array[j])
            {
                count++;
            }
        }

        if(count > maxCount)
        {
            maxCount = count;
            Mode = array[i];
        }
    }

    return Mode;
}

// Function to display result
void DisplayResult(float Mean, float Median, int Mode)
{
    cout << "\n===== Result =====\n";

    cout << "Mean = " << Mean << endl;

    cout << "Median = " << Median << endl;

    cout << "Mode = " << Mode << endl;
}

int main()
{
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int array[100];

    input(array, n);

    float Mean = mean(array, n);

    float Median = median(array, n);

    int Mode = mode(array, n);

    DisplayResult(Mean, Median, Mode);

    return 0;
}
