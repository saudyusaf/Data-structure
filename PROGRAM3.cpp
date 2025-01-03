#include <stdio.h>

int main() {
    int m, n, a[10], b[10], c[20], i, j, t, k = 0;
    
    // Input size and elements for array a
    printf("Enter size of array a: ");
    scanf("%d", &m);
    printf("Enter array elements for a: ");
    for(i = 0; i < m; i++) {
        scanf("%d", &a[i]);
    }

    // Input size and elements for array b
    printf("Enter size of array b: ");
    scanf("%d", &n);
    printf("Enter array elements for b: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }

    // Sort array a in ascending order
    for(i = 0; i < m; i++) {
        for(j = i + 1; j < m; j++) {
            if(a[i] > a[j]) {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }

    // Sort array b in ascending order
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(b[i] > b[j]) {
                t = b[i];
                b[i] = b[j];
                b[j] = t;
            }
        }
    }

    // Merging arrays a and b into array c
    i = j = 0;
    while(i < m && j < n) {
        if(a[i] <= b[j]) {
            c[k] = a[i];
            i++;
        } else {
            c[k] = b[j];
            j++;
        }
        k++;
    }

    // If any elements are left in array a
    while(i < m) {
        c[k] = a[i];
        i++;
        k++;
    }

    // If any elements are left in array b
    while(j < n) {
        c[k] = b[j];
        j++;
        k++;
    }

    // Output the sorted arrays
    printf("\nArray a: ");
    for(i = 0; i < m; i++) {
        printf("%d ", a[i]);
    }

    printf("\nArray b: ");
    for(i = 0; i < n; i++) {
        printf("%d ", b[i]);
    }

    printf("\nArray c (merged): ");
    for(i = 0; i < m + n; i++) {
        printf("%d ", c[i]);
    }
    printf("\n");
}
