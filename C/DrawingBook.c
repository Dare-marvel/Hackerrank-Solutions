#include <stdio.h>
#include <stdlib.h>

int pages(int n, int p) {
    int fromFront = p / 2; // We divide p by 2 because we turn two pages at a time.
    int fromBack = (n-p)/2; //We need to turn (n-p) pages from the back to reach at page p 
    return fromFront < fromBack ? fromFront : fromBack;
}

int main() {
    int n, p;
    scanf("%d", &n);
    scanf("%d", &p);
    printf("%d\n", pages(n, p));
    return 0;
}
