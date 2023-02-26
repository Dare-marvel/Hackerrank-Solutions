// Link to the problem : https://www.hackerrank.com/challenges/sock-merchant/problem

#include <stdio.h>

// Define a function named 'freq' that takes an array of integers 'arr'
// and its size 'n' as input and returns nothing
void freq(int arr[], int n)
{
    // Declare two integer variables 'i' and 'j'
    int i, j;
    // Declare an array of integers 'fr' with size 101
    // to store the frequency of each color
    // Initialize all elements to 0
    int fr[101] = {0}; // Assuming colors are between 1 and 100
    // Loop over each element in 'arr' and increment the frequency of its color
    for (i = 0; i < n; i++)
    {
        fr[arr[i]]++;
    }
    // Declare an integer variable 's' to store the number of pairs
    int s = 0;
    // Loop over each color (assuming colors are between 1 and 100)
    for (i = 1; i <= 100; i++)
    {
        // Add the number of pairs for this color to 's'
        // by dividing the frequency by 2 and rounding down
        s += fr[i] / 2;
    }
    // Print the total number of pairs
    printf("%d", s);
}

// Define the main function
int main()
{
    // Declare an integer variable 'n' to store the size of the array
    int n;
    // Read the size of the array from the standard input
    scanf("%d", &n);
    // Declare an array of integers 'arr' with size 'n'
    int arr[n];
    // Read the elements of the array from the standard input
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    // Call the 'freq' function to count the number of pairs
    freq(arr, n);
    // Return 0 to indicate successful completion of the program
    return 0;
}
