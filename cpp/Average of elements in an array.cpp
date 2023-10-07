//Program of calculate and display the average of elements in an array//
#include <iostream>
using namespace std;

int main() 
{
    // Define an array of numbers
    double numbers[] = {10.5, 20.0, 15.3, 8.7, 12.1};

    // Calculate the number of elements in the array
    int numElements = sizeof(numbers) / sizeof(numbers[0]);

    // Initialize variables for sum and average
    double sum = 0.0;
    double average;

    // Calculate the sum of elements in the array
    for (int i = 0; i < numElements; i++)
      {
        sum += numbers[i];
      }

    // Calculate the average
    if (numElements > 0) 
    {
        average = sum / numElements;
    } else 
    {
        cout << "The array is empty, cannot calculate the average." << endl;
        return 1; // Exit with an error code
    }

    // Display the average
    cout << "The average of the elements in the array is: " << average << endl;

    return 0;
}
