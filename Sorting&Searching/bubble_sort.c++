#include <iostream>
using namespace std;

int steps = 0;

void bubble_sort(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {

        bool is_sorted = true;
        for (int j = 0; j < size - i - 1; j++)
        {
            steps++;
            if (arr[j] > arr[j + 1])
            {
                is_sorted = false;
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        if (is_sorted)
            break;
    }
}

int main()
{

    int arr[] = {10, 5, 2, 1, 3, 4, 6, 7, 8, 9};
    // int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(arr) / sizeof(arr[0]);
    bubble_sort(arr, size);
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl
         << "Steps: " << steps << endl;
}
