### [Climbing the Leaderboard](https://www.hackerrank.com/challenges/climbing-the-leaderboard/problem?h_r=profile)

## Explanation:
This code is a solution to a problem where a player's rank is determined based on their scores and the scores of other players. Here's the main logic of the code in points:
1. The code takes in two arrays as input: `ranked` and `player`. The `ranked` array contains the scores of other players, while the `player` array contains the scores of the player whose rank is to be determined.
2. The code removes any duplicate scores from the `ranked` array and stores the unique scores in a new array called `franked`.
3. For each score in the `player` array, the code checks if it is greater than the highest score or less than the lowest score in the `franked` array. If it is greater, the player's rank is 1. If it is less, the player's rank is equal to the length of the `franked` array + 1.
4. If the player's score falls within the range of scores in the `franked` array, a binary search is performed on the `franked` array to determine the player's rank.


## Time and Space Compexity:
### `Time Complexity`:
The time complexity of this code is O(pn log(rn)), where pn is the number of elements in the `player` array and rn is the number of elements in the `ranked` array. This is because for each element in the `player` array, a binary search is performed on the `ranked` array which takes O(log(rn)) time.

### `Space Complexity`:
The space complexity of this code is O(rn), where rn is the number of elements in the `ranked` array. This is because a new array called `franked` is created which can have at most rn elements.


## Code:
```cpp
#include<bits/stdc++.h>
using namespace std;

// Function to perform binary search on the ranked list
int bin_srch(int franked[], int frn, int element){
    int lo=0, hi=frn-1;

    while(lo<=hi){
        int mid=(lo+hi)/2;
            
        if(franked[mid] == element) // If element found, return index
            return mid;
        else if(franked[mid] < element && element < franked[mid-1]) // If element is between mid and mid-1, return mid
            return mid;
        else if(franked[mid] > element && element >= franked[mid+1]) // If element is between mid and mid+1, return mid+1
            return mid+1;
        else if(franked[mid] < element)
            hi = mid-1; // If element is smaller than mid, search left half
        else if(franked[mid] > element)
            lo = mid+1; // If element is greater than mid, search right half
    }
    return 0; // If element not found, return 0
}

int main()
{
    int rn;
    cin >> rn;

    int ranked[rn];
    for(int i=0; i<rn; i++){
        cin >> ranked[i];
    }

    int pn;
    cin >> pn;

    int player[pn];
    for(int i=0; i<pn; i++){
        cin >> player[i];
    }

    int u=0;
    int dup=0;
    // Remove duplicates from the ranked list
    for(int i=0; i<rn; i++){
        if(ranked[i] == ranked[i+1]){
            ranked[i] = -1;
            dup++;
        }
    }
    int frn = rn-dup; // Calculate the new length of the ranked list
    int franked[frn];
    // Copy non-duplicate elements to a new list called franked
    for(int i=0; i<rn; i++){
        if(ranked[i] != -1){
            franked[u] = ranked[i];
            u++;
        }
    }

    for(int j=0; j<pn; j++){
        int x = player[j];
        if(x > franked[0]){ // If the score is greater than the highest score in the ranked list, return 1
            cout << "1" << endl;
        }
        else if(x < franked[frn-1]){ // If the score is less than the lowest score in the ranked list, return the length of the list + 1
            cout << frn+1 << endl;
        }
        else{
            int ans = bin_srch(franked, frn, x); // Perform binary search on the franked list
            cout << ans+1 << endl; // Print the rank of the player
        }
    }
```
    return 0;
}
