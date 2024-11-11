/* ***********  finding MAximum and Minimum Funtion  ************** */
#include <iostream>
#include <climits> // for INT_MAX and INT_MIN

using namespace std;

int getMin(int num[], int n)
{
    int min = INT_MAX;  // Initialize min to INT_MAX
    for (int i = 0; i < n; i++)
    {
        if (num[i] < min)
            min = num[i];
    }
    return min;
}

int getMax(int num[], int n)
{
    int max = INT_MIN;  // Initialize max to INT_MIN
    for (int i = 0; i < n; i++)
    {
        if (num[i] > max)
            max = num[i];
    }
    return max;
}

int main()
{
    int size;
    cout<<"Enter the size of the element: ";
    cin >> size;

    int num[100];  // Assuming a maximum size of 100 for num array
    cout<<"Enter the Array: "<<endl;
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }

    // To find and print the minimum value, call getMin function
    cout << "Minimum value is " << getMin(num, size) << endl;

    // To find and print the maximum value, call getMax function
    cout << "Maximum value is " << getMax(num, size) << endl;

    return 0;
}
