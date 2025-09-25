#include <stdio.h>
int checkSortedRotated(int arr[], int n) {
    int count = 0;
    for(int i=0;i<n;i++) {
        if(arr[i] > arr[(i+1)%n]) count++;
        if(count > 1) return 0;
    }
    return 1;
}
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    printf("%s", checkSortedRotated(arr,n) ? "Yes" : "No");
    return 0;
}
