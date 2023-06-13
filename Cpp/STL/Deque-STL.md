### [Deque-STL](https://www.hackerrank.com/challenges/deque-stl/problem)

## Explanation:
The `printKMax` function takes an array `arr`, its size `n`, and an integer `k` as input. It prints the maximum element of all subarrays of size `k` in the array.

The function uses a double-ended queue (`deque`) to store the indexes of array elements. The queue maintains a decreasing order of values from front to rear, i.e., `arr[Qi.front()]` to `arr[Qi.rear()]` are sorted in decreasing order.

First, the function processes the first `k` elements of the array. For each element, it removes any previous smaller elements from the queue and adds the new element at the rear of the queue.

Then, it processes the rest of the elements in the array. For each element, it prints the element at the front of the queue (which is the largest element of the previous window), removes any elements that are out of this window from the front of the queue, removes any smaller elements from the rear of the queue, and adds the current element at the rear of the queue.

Finally, it prints the maximum element of the last window.

This function uses a sliding window approach to find and print the maximum element of all subarrays of size `k` in an efficient manner.

## Dry run:
Let's say we have an array `arr = [8, 5, 10, 7, 9, 4, 15, 12, 90, 13]`, `n = 10`, and `k = 4`.

We start by processing the first `k` elements of the array: `[8, 5, 10, 7]`.

1. For the first element `8`, the queue is empty so we add its index `0` to the queue: `Qi = [0]`.
2. For the second element `5`, it is smaller than `arr[Qi.back()] = arr[0] = 8`, so we add its index `1` to the queue: `Qi = [0, 1]`.
3. For the third element `10`, it is larger than both elements in the queue (`arr[0] = 8` and `arr[1] = 5`), so we remove them from the queue and add its index `2` to the queue: `Qi = [2]`.
4. For the fourth element `7`, it is smaller than `arr[Qi.back()] = arr[2] = 10`, so we add its index `3` to the queue: `Qi = [2, 3]`.

Now we process the rest of the elements in the array.

1. The first element at the front of the queue is `arr[Qi.front()] = arr[2] = 10`, which is the maximum element of the first window `[8, 5, 10, 7]`, so we print it: `10`.
2. The next element in the array is `9`. Since `Qi.front() = 2 <= i - k = 5 - 4 = 1`, we do not remove it from the front of the queue: `Qi = [2,3]`.
3. Since `9 >= arr[Qi.back()] = arr[3] = 7`, we remove it from the rear of the queue and add its index `4` to the queue: `Qi = [2,4]`.
4. The next element at the front of the queue is now `arr[Qi.front()] = arr[2] = 10`, which is still the maximum element of this window `[5,10,7,9]`, so we print it: `10`.
5. We repeat this process for each remaining element in the array until we reach the end.

The final output will be: `[10,10,10,15,15,90,90]`.

I hope this helps you understand how this function works!
## Time and Space Complexity:
### `Time Complexity`:
The time complexity of the printKMax function is O(n), where n is the size of the input array. This is because each element is processed once and added to and removed from the deque at most once.
### `Space Complexity`:
The space complexity of the function is O(k), where k is the size of the subarrays. This is because the deque stores at most k elements at any given time.

## Code:
```cpp
#include <iostream>
#include <deque>

using namespace std;

// A Dequeue (Double ended queue) based method for printing maixmum element of
// all subarrays of size k
void printKMax(int arr[], int n, int k)
{
    // Create a Double Ended Queue, Qi that will store indexes of array elements
    // The queue will store indexes of useful elements in every window and it will
    // maintain decreasing order of values from front to rear in Qi, i.e., 
    // arr[Qi.front[]] to arr[Qi.rear()] are sorted in decreasing order
    std::deque<int>  Qi(k);

    /* Process first k (or first window) elements of array */
    int i;
    for (i = 0; i < k; ++i)
    {
        // For very element, the previous smaller elements are useless so
        // remove them from Qi
        while ( (!Qi.empty()) && arr[i] >= arr[Qi.back()])
            Qi.pop_back();  // Remove from rear

        // Add new element at rear of queue
        Qi.push_back(i);
    }

    // Process rest of the elements, i.e., from arr[k] to arr[n-1]
    for ( ; i < n; ++i)
    {
        // The element at the front of the queue is the largest element of
        // previous window, so print it
        cout << arr[Qi.front()] << " ";

        // Remove the elements which are out of this window
        while ( (!Qi.empty()) && Qi.front() <= i - k)
            Qi.pop_front();  // Remove from front of queue

        // Remove all elements smaller than the currently
        // being added element (remove useless elements)
        while ( (!Qi.empty()) && arr[i] >= arr[Qi.back()])
            Qi.pop_back();

         // Add current element at the rear of Qi
        Qi.push_back(i);
    }

    // Print the maximum element of last window
    cout << arr[Qi.front()] << endl;
}

// Driver program to test above functions
int main()
{
int t;
cin >> t;
while(t>0) {
    int n,k;
    cin >> n >> k;
    int i;
    int arr[n];
    for(i=0;i<n;i++)
        cin >> arr[i];
    printKMax(arr, n, k);
    t--;
}
return 0;
}
```
