#include <stdio.h>

int main() {
    int arr[100];
    
    scanf("%d", &arr[0]);
    
    int i = 1;

    int second_val;
    scanf("%d", &second_val);
    
    arr[0] = 100;
    arr[1] = second_val;
    
    printf("%d %d ", arr[0], arr[1]);
    
    i = 2;
    while (1) {
        arr[i] = arr[i - 2] - arr[i - 1];
        printf("%d ", arr[i]);
        
        if (arr[i] < 0) {
            break;
        }
        i++;
    }
    printf("\n");

    return 0;
}