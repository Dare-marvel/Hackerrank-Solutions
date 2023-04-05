// Link : https://www.hackerrank.com/challenges/climbing-the-leaderboard/problem?h_r=profile


// Code :
#include <stdio.h>
int main()
{
    int n, m;

    // Get leaderboard list
    scanf("%d", &n);
    int l[n];
    // Taking input of the values of the leaderboard
    for(int i=0; i<n; ++i)
        scanf("%d", &l[i]);

    // Delete duplicates from leaderboard list
    for(int i=1; i<n; ++i){
        if(l[i]==l[i-1]){
            for(int j=i; j<n-1; ++j)
                l[j] = l[j+1];
            --n;
        }
    }

    // Get player list
    scanf("%d", &m);
    int p[m];
    // Taking input of the scores of the player
    for(int i=0; i<m; ++i)
        scanf("%d", &p[i]);

    // Decide ranks
    int pr[m];
    for(int i=0; i<m; ++i){
        pr[i] = n+1;
        for(int j=0; j<n; ++j){
            if(p[i]>=l[j]){
                pr[i] = j+1;
                break;
            }
        }
    }

    for(int i=0; i<m; ++i)
        printf("%d ", pr[i]);
    
    return 0;
}
