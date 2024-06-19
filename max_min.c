#include <stdio.h>
#include <limits.h>

void mini_max_sum(int arr[], int arr_size) {
    long long total_sum = 0;
    int min_element = INT_MAX;
    int max_element = INT_MIN;

    // Calculate the total sum and find the min and max elements
    for (int i = 0; i < arr_size; i++) {
        total_sum += arr[i];
        if (arr[i] < min_element) {
            min_element = arr[i];
        }
        if (arr[i] > max_element) {
            max_element = arr[i];
        }
    }

    // Calculate the minimum and maximum sums
    long long min_sum = total_sum - max_element;
    long long max_sum = total_sum - min_element;

    // Print the results
    printf("%lld %lld\n", min_sum, max_sum);
}

int main() {
    int arr[] = {256741038, 623958417, 467905213, 714532089, 938071625};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    mini_max_sum(arr, arr_size);

    return 0;
}
