#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n], freq[n+1];
    for(int i=0;i<=n;i++) freq[i]=0;
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
        if(arr[i]<=n) freq[arr[i]]++;
    }
    for(int i=1;i<=n;i++) printf("%d ", freq[i]);
    return 0;
}
